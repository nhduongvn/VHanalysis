#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenB_all__bckg_16()
{
//=========Macro generated from canvas: nGenB_all__bckg_16/nGenB_all__bckg_16
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenB_all__bckg_16 = new TCanvas("nGenB_all__bckg_16", "nGenB_all__bckg_16",0,0,600,600);
   nGenB_all__bckg_16->SetHighLightColor(2);
   nGenB_all__bckg_16->Range(-3.775293,-1.715847e+11,17.0745,1.258287e+12);
   nGenB_all__bckg_16->SetFillColor(0);
   nGenB_all__bckg_16->SetFillStyle(4000);
   nGenB_all__bckg_16->SetBorderMode(0);
   nGenB_all__bckg_16->SetBorderSize(2);
   nGenB_all__bckg_16->SetLeftMargin(0.15709);
   nGenB_all__bckg_16->SetRightMargin(0.1234783);
   nGenB_all__bckg_16->SetBottomMargin(0.12);
   nGenB_all__bckg_16->SetFrameFillStyle(1000);
   nGenB_all__bckg_16->SetFrameBorderMode(0);
   nGenB_all__bckg_16->SetFrameFillStyle(1000);
   nGenB_all__bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",15,-0.5,14.5);
   st_stack_14->SetMinimum(0);
   st_stack_14->SetMaximum(1.1153e+12);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetTitleOffset(1);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Events/1.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *nGenB_all_stack_1 = new TH1D("nGenB_all_stack_1","",15,-0.5,14.5);
   nGenB_all_stack_1->SetBinContent(1,1.062191e+12);
   nGenB_all_stack_1->SetBinContent(2,5.549792e+10);
   nGenB_all_stack_1->SetBinContent(3,3.27985e+10);
   nGenB_all_stack_1->SetBinContent(4,1.807792e+09);
   nGenB_all_stack_1->SetBinContent(5,2.648548e+08);
   nGenB_all_stack_1->SetBinContent(6,1.654963e+07);
   nGenB_all_stack_1->SetBinContent(7,1016819);
   nGenB_all_stack_1->SetBinContent(8,115837.8);
   nGenB_all_stack_1->SetBinContent(9,2232.205);
   nGenB_all_stack_1->SetBinContent(10,13.60338);
   nGenB_all_stack_1->SetBinError(1,1.492982e+08);
   nGenB_all_stack_1->SetBinError(2,3.39097e+07);
   nGenB_all_stack_1->SetBinError(3,2.577992e+07);
   nGenB_all_stack_1->SetBinError(4,5947870);
   nGenB_all_stack_1->SetBinError(5,2212511);
   nGenB_all_stack_1->SetBinError(6,531721.7);
   nGenB_all_stack_1->SetBinError(7,121432);
   nGenB_all_stack_1->SetBinError(8,43910.81);
   nGenB_all_stack_1->SetBinError(9,1551.413);
   nGenB_all_stack_1->SetBinError(10,10.24181);
   nGenB_all_stack_1->SetEntries(2.393713e+08);

   ci = TColor::GetColor("#ff6600");
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
   nGenB_all_stack_2->SetBinContent(1,35745.42);
   nGenB_all_stack_2->SetBinContent(2,2318888);
   nGenB_all_stack_2->SetBinContent(3,2.496475e+07);
   nGenB_all_stack_2->SetBinContent(4,2136508);
   nGenB_all_stack_2->SetBinContent(5,367430.9);
   nGenB_all_stack_2->SetBinContent(6,36181.63);
   nGenB_all_stack_2->SetBinContent(7,3943.752);
   nGenB_all_stack_2->SetBinContent(8,357.1405);
   nGenB_all_stack_2->SetBinContent(9,30.86368);
   nGenB_all_stack_2->SetBinContent(10,2.714567);
   nGenB_all_stack_2->SetBinContent(11,0.3930166);
   nGenB_all_stack_2->SetBinError(1,47.70125);
   nGenB_all_stack_2->SetBinError(2,383.5966);
   nGenB_all_stack_2->SetBinError(3,1257.064);
   nGenB_all_stack_2->SetBinError(4,368.9639);
   nGenB_all_stack_2->SetBinError(5,153.3053);
   nGenB_all_stack_2->SetBinError(6,48.26092);
   nGenB_all_stack_2->SetBinError(7,15.95896);
   nGenB_all_stack_2->SetBinError(8,4.8231);
   nGenB_all_stack_2->SetBinError(9,1.418564);
   nGenB_all_stack_2->SetBinError(10,0.4170544);
   nGenB_all_stack_2->SetBinError(11,0.16224);
   nGenB_all_stack_2->SetEntries(5.126171e+08);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("nGenB_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("nGenB_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   nGenB_all__bckg_16->Modified();
   nGenB_all__bckg_16->cd();
   nGenB_all__bckg_16->SetSelected(nGenB_all__bckg_16);
}
