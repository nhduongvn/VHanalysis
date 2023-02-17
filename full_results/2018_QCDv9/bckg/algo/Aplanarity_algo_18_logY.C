#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Feb 16 10:37:40 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2183529,-0.874367,1.171633,9.329585);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15709);
   Aplanarity_algo_18->SetRightMargin(0.1234783);
   Aplanarity_algo_18->SetBottomMargin(0.12);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(8.540163e+07);
   
   TH1F *st_stack_127 = new TH1F("st_stack_127","",50,0,1);
   st_stack_127->SetMinimum(2.239274);
   st_stack_127->SetMaximum(2.037933e+08);
   st_stack_127->SetDirectory(0);
   st_stack_127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_127->SetLineColor(ci);
   st_stack_127->GetXaxis()->SetTitle("Aplanarity");
   st_stack_127->GetXaxis()->SetRange(1,50);
   st_stack_127->GetXaxis()->SetLabelFont(42);
   st_stack_127->GetXaxis()->SetTitleOffset(1);
   st_stack_127->GetXaxis()->SetTitleFont(42);
   st_stack_127->GetYaxis()->SetTitle("Events/0.02");
   st_stack_127->GetYaxis()->SetLabelFont(42);
   st_stack_127->GetYaxis()->SetTitleSize(0.037);
   st_stack_127->GetYaxis()->SetTitleFont(42);
   st_stack_127->GetZaxis()->SetLabelFont(42);
   st_stack_127->GetZaxis()->SetTitleOffset(1);
   st_stack_127->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_127);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,827163.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,319716.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,197758.8);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,134671.1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,52826.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,28356.78);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,27526.69);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,19698.04);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,7622.016);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,4588.534);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,5008.464);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,4297.458);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,1959.424);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,1954.07);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2658.631);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,913.234);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(18,31.75439);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,50340.87);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,17169.36);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,42336.1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,32154.91);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,6910.818);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,5289.708);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,5877.485);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,6021.903);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,2562.94);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,2440.557);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,2861.824);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,2282.07);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,880.4759);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,1920.247);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,2260.021);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,617.0515);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(18,31.75439);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(24188);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,26852.77);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,19120.93);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,12965.8);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,9043.16);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,6484.029);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,4729.411);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3489.177);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,2598.119);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1923.28);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1434.563);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,1033.682);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,754.0135);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,534.63);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,364.3243);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,258.5143);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,167.7505);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,108.0606);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,64.88132);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,34.87035);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,17.14826);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,8.552612);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,3.610066);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,0.7156204);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,48.77629);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,41.41996);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,34.15603);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,28.16783);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,23.59286);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,20.26176);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,18.17118);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,15.05157);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,13.25348);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,11.21918);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,9.404844);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,8.290908);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,6.72163);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,5.456389);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,4.724987);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,3.73392);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,3.086095);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,2.450236);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,1.694905);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,1.181142);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,0.8934292);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.5432259);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.2379397);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(1270077);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
