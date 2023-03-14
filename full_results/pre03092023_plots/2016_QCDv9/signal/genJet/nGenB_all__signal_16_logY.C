#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenB_all__signal_16_logY()
{
//=========Macro generated from canvas: nGenB_all__signal_16/nGenB_all__signal_16
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenB_all__signal_16 = new TCanvas("nGenB_all__signal_16", "nGenB_all__signal_16",0,0,600,600);
   nGenB_all__signal_16->SetHighLightColor(2);
   nGenB_all__signal_16->Range(-3.775293,0.393228,17.0745,3.16658);
   nGenB_all__signal_16->SetFillColor(0);
   nGenB_all__signal_16->SetFillStyle(4000);
   nGenB_all__signal_16->SetBorderMode(0);
   nGenB_all__signal_16->SetBorderSize(2);
   nGenB_all__signal_16->SetLogy();
   nGenB_all__signal_16->SetLeftMargin(0.15709);
   nGenB_all__signal_16->SetRightMargin(0.1234783);
   nGenB_all__signal_16->SetBottomMargin(0.12);
   nGenB_all__signal_16->SetFrameFillStyle(1000);
   nGenB_all__signal_16->SetFrameBorderMode(0);
   nGenB_all__signal_16->SetFrameFillStyle(1000);
   nGenB_all__signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",15,-0.5,14.5);
   st_stack_13->SetMinimum(5.321452);
   st_stack_13->SetMaximum(774.898);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetTitleOffset(1);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/1.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *nGenB_all_stack_1 = new TH1D("nGenB_all_stack_1","",15,-0.5,14.5);
   nGenB_all_stack_1->SetBinContent(1,503.9606);
   nGenB_all_stack_1->SetBinContent(2,36.0105);
   nGenB_all_stack_1->SetBinContent(3,121.7683);
   nGenB_all_stack_1->SetBinContent(4,8.270265);
   nGenB_all_stack_1->SetBinContent(5,1.52063);
   nGenB_all_stack_1->SetBinContent(6,0.1180431);
   nGenB_all_stack_1->SetBinContent(7,0.02617238);
   nGenB_all_stack_1->SetBinError(1,1.253041);
   nGenB_all_stack_1->SetBinError(2,0.3328725);
   nGenB_all_stack_1->SetBinError(3,0.6146942);
   nGenB_all_stack_1->SetBinError(4,0.1592043);
   nGenB_all_stack_1->SetBinError(5,0.06670052);
   nGenB_all_stack_1->SetBinError(6,0.01876819);
   nGenB_all_stack_1->SetBinError(7,0.008750932);
   nGenB_all_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   nGenB_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenB_all_stack_1->SetLineColor(ci);
   nGenB_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenB_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenB_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenB_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenB_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenB_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenB_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenB_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenB_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenB_all_stack_1,"");
   
   TH1D *nGenB_all_stack_2 = new TH1D("nGenB_all_stack_2","",15,-0.5,14.5);
   nGenB_all_stack_2->SetBinContent(1,69.32679);
   nGenB_all_stack_2->SetBinContent(2,4.061557);
   nGenB_all_stack_2->SetBinContent(3,18.21807);
   nGenB_all_stack_2->SetBinContent(4,1.292162);
   nGenB_all_stack_2->SetBinContent(5,0.2353642);
   nGenB_all_stack_2->SetBinContent(6,0.02288809);
   nGenB_all_stack_2->SetBinContent(7,0.00164911);
   nGenB_all_stack_2->SetBinError(1,0.1627318);
   nGenB_all_stack_2->SetBinError(2,0.03937522);
   nGenB_all_stack_2->SetBinError(3,0.08341454);
   nGenB_all_stack_2->SetBinError(4,0.02221873);
   nGenB_all_stack_2->SetBinError(5,0.00946517);
   nGenB_all_stack_2->SetBinError(6,0.002939035);
   nGenB_all_stack_2->SetBinError(7,0.0007594446);
   nGenB_all_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   nGenB_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenB_all_stack_2->SetLineColor(ci);
   nGenB_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenB_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenB_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenB_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenB_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenB_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenB_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenB_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenB_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenB_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenB_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("nGenB_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenB_all__signal_16->Modified();
   nGenB_all__signal_16->cd();
   nGenB_all__signal_16->SetSelected(nGenB_all__signal_16);
}
