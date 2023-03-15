#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenC_signal_16_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenC_signal_16/GenJet_VbbHcc_nGenC_signal_16
//=========  (Thu Mar  9 15:52:25 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenC_signal_16 = new TCanvas("GenJet_VbbHcc_nGenC_signal_16", "GenJet_VbbHcc_nGenC_signal_16",0,0,600,600);
   GenJet_VbbHcc_nGenC_signal_16->SetHighLightColor(2);
   GenJet_VbbHcc_nGenC_signal_16->Range(-4.867058,-0.7281663,22.93266,2.674434);
   GenJet_VbbHcc_nGenC_signal_16->SetFillColor(0);
   GenJet_VbbHcc_nGenC_signal_16->SetFillStyle(4000);
   GenJet_VbbHcc_nGenC_signal_16->SetBorderMode(0);
   GenJet_VbbHcc_nGenC_signal_16->SetBorderSize(2);
   GenJet_VbbHcc_nGenC_signal_16->SetLogy();
   GenJet_VbbHcc_nGenC_signal_16->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenC_signal_16->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenC_signal_16->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenC_signal_16->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenC_signal_16->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenC_signal_16->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenC_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(150.3799);
   
   TH1F *st_stack_163 = new TH1F("st_stack_163","",20,-0.5,19.5);
   st_stack_163->SetMinimum(0.4787908);
   st_stack_163->SetMaximum(215.8611);
   st_stack_163->SetDirectory(0);
   st_stack_163->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_163->SetLineColor(ci);
   st_stack_163->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_163->GetXaxis()->SetLabelFont(42);
   st_stack_163->GetXaxis()->SetTitleOffset(1);
   st_stack_163->GetXaxis()->SetTitleFont(42);
   st_stack_163->GetYaxis()->SetTitle("Event/1.0");
   st_stack_163->GetYaxis()->SetLabelFont(42);
   st_stack_163->GetYaxis()->SetTitleSize(0.037);
   st_stack_163->GetYaxis()->SetTitleFont(42);
   st_stack_163->GetZaxis()->SetLabelFont(42);
   st_stack_163->GetZaxis()->SetTitleOffset(1);
   st_stack_163->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_163);
   
   
   TH1D *GenJet_VbbHcc_nGenC_stack_1 = new TH1D("GenJet_VbbHcc_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(1,0.488297);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(2,17.10496);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(3,109.5161);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(4,16.62839);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(5,3.044851);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(6,0.4012361);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(7,0.04116177);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(8,0.002874535);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(1,0.03881554);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(2,0.2310421);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(3,0.5844528);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(4,0.225169);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(5,0.0955269);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(6,0.03478085);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(7,0.01094931);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(8,0.002874535);
   GenJet_VbbHcc_nGenC_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenC_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenC_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenC_stack_2 = new TH1D("GenJet_VbbHcc_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(1,0.01875485);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(2,1.667703);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(3,15.29924);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(4,2.817184);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(5,0.5290799);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(6,0.09003399);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(7,0.01134159);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(8,0.001519439);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(1,0.002672339);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(2,0.0252465);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(3,0.07646294);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(4,0.03276852);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(5,0.01420728);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(6,0.005866073);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(7,0.002080047);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(8,0.0007619707);
   GenJet_VbbHcc_nGenC_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenC_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenC_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_VbbHcc_nGenC_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_VbbHcc_nGenC_signal_16->Modified();
   GenJet_VbbHcc_nGenC_signal_16->cd();
   GenJet_VbbHcc_nGenC_signal_16->SetSelected(GenJet_VbbHcc_nGenC_signal_16);
}
