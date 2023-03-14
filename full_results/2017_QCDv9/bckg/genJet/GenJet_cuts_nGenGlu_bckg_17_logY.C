#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenGlu_bckg_17_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenGlu_bckg_17/GenJet_cuts_nGenGlu_bckg_17
//=========  (Thu Mar  9 15:52:23 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenGlu_bckg_17 = new TCanvas("GenJet_cuts_nGenGlu_bckg_17", "GenJet_cuts_nGenGlu_bckg_17",0,0,600,600);
   GenJet_cuts_nGenGlu_bckg_17->SetHighLightColor(2);
   GenJet_cuts_nGenGlu_bckg_17->Range(-4.867058,-2.90373,22.93266,14.2506);
   GenJet_cuts_nGenGlu_bckg_17->SetFillColor(0);
   GenJet_cuts_nGenGlu_bckg_17->SetFillStyle(4000);
   GenJet_cuts_nGenGlu_bckg_17->SetBorderMode(0);
   GenJet_cuts_nGenGlu_bckg_17->SetBorderSize(2);
   GenJet_cuts_nGenGlu_bckg_17->SetLogy();
   GenJet_cuts_nGenGlu_bckg_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenGlu_bckg_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenGlu_bckg_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenGlu_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_bckg_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenGlu_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.00832e+12);
   
   TH1F *st_stack_100 = new TH1F("st_stack_100","",20,-0.5,19.5);
   st_stack_100->SetMinimum(0.1428204);
   st_stack_100->SetMaximum(3.429014e+12);
   st_stack_100->SetDirectory(0);
   st_stack_100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_100->SetLineColor(ci);
   st_stack_100->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_100->GetXaxis()->SetLabelFont(42);
   st_stack_100->GetXaxis()->SetTitleOffset(1);
   st_stack_100->GetXaxis()->SetTitleFont(42);
   st_stack_100->GetYaxis()->SetTitle("Event/1.0");
   st_stack_100->GetYaxis()->SetLabelFont(42);
   st_stack_100->GetYaxis()->SetTitleSize(0.037);
   st_stack_100->GetYaxis()->SetTitleFont(42);
   st_stack_100->GetZaxis()->SetLabelFont(42);
   st_stack_100->GetZaxis()->SetTitleOffset(1);
   st_stack_100->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_100);
   
   
   TH1D *GenJet_cuts_nGenGlu_stack_1 = new TH1D("GenJet_cuts_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(1,8.368788e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(2,4.495389e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(3,1.15995e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(4,6.892061e+09);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(5,7.593067e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(6,7.046654e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(7,7458285);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(8,796335.8);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(9,90635.05);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(10,9463.23);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(11,1089.786);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(12,93.74656);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(13,3.874483);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(14,4.025485);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(15,4.340696);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(1,1.186553e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(2,8.403169e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(3,3.912679e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(4,4509829);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(5,836266.1);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(6,152398.2);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(7,35523.14);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(8,7875.388);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(9,1959.324);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(10,455.9825);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(11,92.035);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(12,21.45149);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(13,1.103884);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(14,4.025485);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(15,4.340696);
   GenJet_cuts_nGenGlu_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenGlu_stack_1,"");
   
   TH1D *GenJet_cuts_nGenGlu_stack_2 = new TH1D("GenJet_cuts_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(1,2.700496e+07);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(2,7515487);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(3,1464655);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(4,242978);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(5,36308.62);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(6,5016.861);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(7,658.484);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(8,84.59075);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(9,11.43238);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(10,1.694215);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(11,0.06501123);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(1,1338.294);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(2,701.9888);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(3,308.309);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(4,125.1835);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(5,48.25534);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(6,17.87853);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(7,6.466514);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(8,2.29268);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(9,0.8577108);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(10,0.3391636);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(11,0.06501123);
   GenJet_cuts_nGenGlu_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenGlu_bckg_17->Modified();
   GenJet_cuts_nGenGlu_bckg_17->cd();
   GenJet_cuts_nGenGlu_bckg_17->SetSelected(GenJet_cuts_nGenGlu_bckg_17);
}
