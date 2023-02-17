#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_18()
{
//=========Macro generated from canvas: Aplanarity_seljet_18/Aplanarity_seljet_18
//=========  (Thu Feb 16 10:35:38 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_18 = new TCanvas("Aplanarity_seljet_18", "Aplanarity_seljet_18",0,0,600,600);
   Aplanarity_seljet_18->SetHighLightColor(2);
   Aplanarity_seljet_18->Range(-0.2183529,-4.398013e+08,1.171633,3.22521e+09);
   Aplanarity_seljet_18->SetFillColor(0);
   Aplanarity_seljet_18->SetFillStyle(4000);
   Aplanarity_seljet_18->SetBorderMode(0);
   Aplanarity_seljet_18->SetBorderSize(2);
   Aplanarity_seljet_18->SetLeftMargin(0.15709);
   Aplanarity_seljet_18->SetRightMargin(0.1234783);
   Aplanarity_seljet_18->SetBottomMargin(0.12);
   Aplanarity_seljet_18->SetFrameFillStyle(1000);
   Aplanarity_seljet_18->SetFrameBorderMode(0);
   Aplanarity_seljet_18->SetFrameFillStyle(1000);
   Aplanarity_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.858709e+09);
   
   TH1F *st_stack_319 = new TH1F("st_stack_319","",50,0,1);
   st_stack_319->SetMinimum(0);
   st_stack_319->SetMaximum(2.858709e+09);
   st_stack_319->SetDirectory(0);
   st_stack_319->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_319->SetLineColor(ci);
   st_stack_319->GetXaxis()->SetTitle("Aplanarity");
   st_stack_319->GetXaxis()->SetRange(1,50);
   st_stack_319->GetXaxis()->SetLabelFont(42);
   st_stack_319->GetXaxis()->SetTitleOffset(1);
   st_stack_319->GetXaxis()->SetTitleFont(42);
   st_stack_319->GetYaxis()->SetTitle("Events/0.02");
   st_stack_319->GetYaxis()->SetLabelFont(42);
   st_stack_319->GetYaxis()->SetTitleSize(0.037);
   st_stack_319->GetYaxis()->SetTitleFont(42);
   st_stack_319->GetZaxis()->SetLabelFont(42);
   st_stack_319->GetZaxis()->SetTitleOffset(1);
   st_stack_319->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_319);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(0,52.47782);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,1.90093e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,9.582437e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,5.094761e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,2.911847e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,1.746021e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,1.110669e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,7.263238e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,4.763505e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,3.192688e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,2.166103e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,1.463138e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,9596774);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,6542768);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,4304364);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,2617207);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,1789372);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,1109719);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,595153.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,312591);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,145440.3);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,55072.06);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,16347.66);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,4530.039);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(24,431.6515);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(25,35.44002);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(0,35.12001);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,2133570);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,1622083);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,1195556);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,904890.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,673226);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,561019.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,464186);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,342511.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,320849.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,255673.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,205838);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,159529.5);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,138413.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,131020.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,74782.97);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,80829.76);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,75092.76);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,35984.14);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,30139.98);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,13377.51);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,7369.265);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,2957.632);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,2411.899);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(24,399.6085);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(25,35.44002);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(4.358765e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(0,1.040852);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,4875705);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,3792849);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,2564120);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,1748018);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,1218195);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,863133.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,619158.4);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,446622.9);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,322546.3);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,232060.3);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,166164.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,117692.4);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,81856.12);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,56071.29);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,37485.96);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,24296.35);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,15141.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,8930.751);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,4976.868);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,2522.184);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,1121.904);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,412.4939);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,110.7822);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,16.62622);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(25,0.39745);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(0,0.2810839);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,671.9086);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,593.4801);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,487.6063);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,402.7973);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,336.5205);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,283.1316);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,239.9381);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,203.2462);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,173.6341);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,146.3894);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,124.4251);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,105.8747);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,87.05733);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,72.65842);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,59.03755);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,47.56947);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,37.24895);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,28.83177);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,21.51154);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,15.38322);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,9.987696);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,6.05569);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,4.531307);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,1.172265);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(25,0.1702317);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(2.308027e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_seljet_18->Modified();
   Aplanarity_seljet_18->cd();
   Aplanarity_seljet_18->SetSelected(Aplanarity_seljet_18);
}
