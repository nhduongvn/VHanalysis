#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenC__signal_16_logY()
{
//=========Macro generated from canvas: nGenC__signal_16/nGenC__signal_16
//=========  (Fri Mar  3 13:54:36 2023) by ROOT version 6.26/06
   TCanvas *nGenC__signal_16 = new TCanvas("nGenC__signal_16", "nGenC__signal_16",0,0,600,600);
   nGenC__signal_16->SetHighLightColor(2);
   nGenC__signal_16->Range(-2.683529,0.5990883,11.21633,2.358281);
   nGenC__signal_16->SetFillColor(0);
   nGenC__signal_16->SetFillStyle(4000);
   nGenC__signal_16->SetBorderMode(0);
   nGenC__signal_16->SetBorderSize(2);
   nGenC__signal_16->SetLogy();
   nGenC__signal_16->SetLeftMargin(0.15709);
   nGenC__signal_16->SetRightMargin(0.1234783);
   nGenC__signal_16->SetBottomMargin(0.12);
   nGenC__signal_16->SetFrameFillStyle(1000);
   nGenC__signal_16->SetFrameBorderMode(0);
   nGenC__signal_16->SetFrameFillStyle(1000);
   nGenC__signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",10,-0.5,9.5);
   st_stack_19->SetMinimum(6.459389);
   st_stack_19->SetMaximum(152.1816);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/1.0");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *nGenC_stack_1 = new TH1D("nGenC_stack_1","",10,-0.5,9.5);
   nGenC_stack_1->SetBinContent(1,0.488297);
   nGenC_stack_1->SetBinContent(2,17.10496);
   nGenC_stack_1->SetBinContent(3,109.5161);
   nGenC_stack_1->SetBinContent(4,16.62839);
   nGenC_stack_1->SetBinContent(5,3.044851);
   nGenC_stack_1->SetBinContent(6,0.4012361);
   nGenC_stack_1->SetBinContent(7,0.04116177);
   nGenC_stack_1->SetBinContent(8,0.002874535);
   nGenC_stack_1->SetBinError(1,0.03881554);
   nGenC_stack_1->SetBinError(2,0.2310421);
   nGenC_stack_1->SetBinError(3,0.5844528);
   nGenC_stack_1->SetBinError(4,0.225169);
   nGenC_stack_1->SetBinError(5,0.0955269);
   nGenC_stack_1->SetBinError(6,0.03478085);
   nGenC_stack_1->SetBinError(7,0.01094931);
   nGenC_stack_1->SetBinError(8,0.002874535);
   nGenC_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   nGenC_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_stack_1->SetLineColor(ci);
   nGenC_stack_1->GetXaxis()->SetRange(1,10);
   nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_stack_1,"");
   
   TH1D *nGenC_stack_2 = new TH1D("nGenC_stack_2","",10,-0.5,9.5);
   nGenC_stack_2->SetBinContent(1,0.01875485);
   nGenC_stack_2->SetBinContent(2,1.667703);
   nGenC_stack_2->SetBinContent(3,15.29924);
   nGenC_stack_2->SetBinContent(4,2.817184);
   nGenC_stack_2->SetBinContent(5,0.5290799);
   nGenC_stack_2->SetBinContent(6,0.09003399);
   nGenC_stack_2->SetBinContent(7,0.01134159);
   nGenC_stack_2->SetBinContent(8,0.001519439);
   nGenC_stack_2->SetBinError(1,0.002672339);
   nGenC_stack_2->SetBinError(2,0.0252465);
   nGenC_stack_2->SetBinError(3,0.07646294);
   nGenC_stack_2->SetBinError(4,0.03276852);
   nGenC_stack_2->SetBinError(5,0.01420728);
   nGenC_stack_2->SetBinError(6,0.005866073);
   nGenC_stack_2->SetBinError(7,0.002080047);
   nGenC_stack_2->SetBinError(8,0.0007619707);
   nGenC_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   nGenC_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_stack_2->SetLineColor(ci);
   nGenC_stack_2->GetXaxis()->SetRange(1,10);
   nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenC_stack_1","ZHcc","F");

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
   nGenC__signal_16->Modified();
   nGenC__signal_16->cd();
   nGenC__signal_16->SetSelected(nGenC__signal_16);
}
