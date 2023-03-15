#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenGlu_bckg_17()
{
//=========Macro generated from canvas: GenJet_all_nGenGlu_bckg_17/GenJet_all_nGenGlu_bckg_17
//=========  (Thu Mar  9 15:52:36 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenGlu_bckg_17 = new TCanvas("GenJet_all_nGenGlu_bckg_17", "GenJet_all_nGenGlu_bckg_17",0,0,600,600);
   GenJet_all_nGenGlu_bckg_17->SetHighLightColor(2);
   GenJet_all_nGenGlu_bckg_17->Range(-4.867058,-6.78889e+10,22.93266,4.97852e+11);
   GenJet_all_nGenGlu_bckg_17->SetFillColor(0);
   GenJet_all_nGenGlu_bckg_17->SetFillStyle(4000);
   GenJet_all_nGenGlu_bckg_17->SetBorderMode(0);
   GenJet_all_nGenGlu_bckg_17->SetBorderSize(2);
   GenJet_all_nGenGlu_bckg_17->SetLeftMargin(0.15709);
   GenJet_all_nGenGlu_bckg_17->SetRightMargin(0.1234783);
   GenJet_all_nGenGlu_bckg_17->SetBottomMargin(0.12);
   GenJet_all_nGenGlu_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_17->SetFrameBorderMode(0);
   GenJet_all_nGenGlu_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.412779e+11);
   
   TH1F *st_stack_28 = new TH1F("st_stack_28","",20,-0.5,19.5);
   st_stack_28->SetMinimum(0);
   st_stack_28->SetMaximum(4.412779e+11);
   st_stack_28->SetDirectory(0);
   st_stack_28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_28->SetLineColor(ci);
   st_stack_28->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_28->GetXaxis()->SetLabelFont(42);
   st_stack_28->GetXaxis()->SetTitleOffset(1);
   st_stack_28->GetXaxis()->SetTitleFont(42);
   st_stack_28->GetYaxis()->SetTitle("Event/1.0");
   st_stack_28->GetYaxis()->SetLabelFont(42);
   st_stack_28->GetYaxis()->SetTitleSize(0.037);
   st_stack_28->GetYaxis()->SetTitleFont(42);
   st_stack_28->GetZaxis()->SetLabelFont(42);
   st_stack_28->GetZaxis()->SetTitleOffset(1);
   st_stack_28->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_28);
   
   
   TH1D *GenJet_all_nGenGlu_stack_1 = new TH1D("GenJet_all_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_1->SetBinContent(1,4.918194e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(2,1.973407e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(3,3.509663e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(4,3.662548e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(5,2.482932e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(6,1.212441e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(7,4.950549e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(8,1.819822e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(9,6.225866e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(10,2.032227e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(11,6.322576e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(12,1.920848e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(13,5.502682e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(14,1.48736e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(15,4184730);
   GenJet_all_nGenGlu_stack_1->SetBinContent(16,1225900);
   GenJet_all_nGenGlu_stack_1->SetBinContent(17,358851.8);
   GenJet_all_nGenGlu_stack_1->SetBinContent(18,61680.64);
   GenJet_all_nGenGlu_stack_1->SetBinContent(19,19832.92);
   GenJet_all_nGenGlu_stack_1->SetBinContent(20,1514.655);
   GenJet_all_nGenGlu_stack_1->SetBinContent(21,818.1632);
   GenJet_all_nGenGlu_stack_1->SetBinError(1,2.833239e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(2,5.688965e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(3,7.584713e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(4,7.716192e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(5,6.293113e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(6,4.328163e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(7,2.709847e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(8,1.605447e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(9,9160234);
   GenJet_all_nGenGlu_stack_1->SetBinError(10,5107733);
   GenJet_all_nGenGlu_stack_1->SetBinError(11,2777473);
   GenJet_all_nGenGlu_stack_1->SetBinError(12,1494667);
   GenJet_all_nGenGlu_stack_1->SetBinError(13,778775.5);
   GenJet_all_nGenGlu_stack_1->SetBinError(14,390909.3);
   GenJet_all_nGenGlu_stack_1->SetBinError(15,205162.2);
   GenJet_all_nGenGlu_stack_1->SetBinError(16,109591);
   GenJet_all_nGenGlu_stack_1->SetBinError(17,62455.65);
   GenJet_all_nGenGlu_stack_1->SetBinError(18,17115.71);
   GenJet_all_nGenGlu_stack_1->SetBinError(19,4501.311);
   GenJet_all_nGenGlu_stack_1->SetBinError(20,565.8872);
   GenJet_all_nGenGlu_stack_1->SetBinError(21,403.9468);
   GenJet_all_nGenGlu_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_1,"");
   
   TH1D *GenJet_all_nGenGlu_stack_2 = new TH1D("GenJet_all_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_2->SetBinContent(1,6016302);
   GenJet_all_nGenGlu_stack_2->SetBinContent(2,9953581);
   GenJet_all_nGenGlu_stack_2->SetBinContent(3,8938916);
   GenJet_all_nGenGlu_stack_2->SetBinContent(4,5856548);
   GenJet_all_nGenGlu_stack_2->SetBinContent(5,3124871);
   GenJet_all_nGenGlu_stack_2->SetBinContent(6,1440254);
   GenJet_all_nGenGlu_stack_2->SetBinContent(7,595254);
   GenJet_all_nGenGlu_stack_2->SetBinContent(8,225871.8);
   GenJet_all_nGenGlu_stack_2->SetBinContent(9,79877);
   GenJet_all_nGenGlu_stack_2->SetBinContent(10,26592.58);
   GenJet_all_nGenGlu_stack_2->SetBinContent(11,8458.727);
   GenJet_all_nGenGlu_stack_2->SetBinContent(12,2583.185);
   GenJet_all_nGenGlu_stack_2->SetBinContent(13,761.2889);
   GenJet_all_nGenGlu_stack_2->SetBinContent(14,213.4618);
   GenJet_all_nGenGlu_stack_2->SetBinContent(15,58.84802);
   GenJet_all_nGenGlu_stack_2->SetBinContent(16,15.64251);
   GenJet_all_nGenGlu_stack_2->SetBinContent(17,3.278726);
   GenJet_all_nGenGlu_stack_2->SetBinContent(18,0.8022431);
   GenJet_all_nGenGlu_stack_2->SetBinContent(19,0.1172337);
   GenJet_all_nGenGlu_stack_2->SetBinContent(21,0.05758461);
   GenJet_all_nGenGlu_stack_2->SetBinError(1,627.093);
   GenJet_all_nGenGlu_stack_2->SetBinError(2,810.255);
   GenJet_all_nGenGlu_stack_2->SetBinError(3,769.7663);
   GenJet_all_nGenGlu_stack_2->SetBinError(4,623.7899);
   GenJet_all_nGenGlu_stack_2->SetBinError(5,455.8404);
   GenJet_all_nGenGlu_stack_2->SetBinError(6,309.401);
   GenJet_all_nGenGlu_stack_2->SetBinError(7,198.7794);
   GenJet_all_nGenGlu_stack_2->SetBinError(8,122.3276);
   GenJet_all_nGenGlu_stack_2->SetBinError(9,72.68006);
   GenJet_all_nGenGlu_stack_2->SetBinError(10,41.87902);
   GenJet_all_nGenGlu_stack_2->SetBinError(11,23.57965);
   GenJet_all_nGenGlu_stack_2->SetBinError(12,13.02086);
   GenJet_all_nGenGlu_stack_2->SetBinError(13,7.05484);
   GenJet_all_nGenGlu_stack_2->SetBinError(14,3.712177);
   GenJet_all_nGenGlu_stack_2->SetBinError(15,1.957713);
   GenJet_all_nGenGlu_stack_2->SetBinError(16,0.9871608);
   GenJet_all_nGenGlu_stack_2->SetBinError(17,0.458235);
   GenJet_all_nGenGlu_stack_2->SetBinError(18,0.2256237);
   GenJet_all_nGenGlu_stack_2->SetBinError(19,0.08692066);
   GenJet_all_nGenGlu_stack_2->SetBinError(21,0.05758461);
   GenJet_all_nGenGlu_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenGlu_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenGlu_stack_1","QCD","F");

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
   GenJet_all_nGenGlu_bckg_17->Modified();
   GenJet_all_nGenGlu_bckg_17->cd();
   GenJet_all_nGenGlu_bckg_17->SetSelected(GenJet_all_nGenGlu_bckg_17);
}
