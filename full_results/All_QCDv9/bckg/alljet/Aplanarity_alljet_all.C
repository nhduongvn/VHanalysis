#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_all()
{
//=========Macro generated from canvas: Aplanarity_alljet_all/Aplanarity_alljet_all
//=========  (Thu Feb 16 10:35:36 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_all = new TCanvas("Aplanarity_alljet_all", "Aplanarity_alljet_all",0,0,600,600);
   Aplanarity_alljet_all->SetHighLightColor(2);
   Aplanarity_alljet_all->Range(-0.2183529,-6.72471e+11,1.171633,4.931454e+12);
   Aplanarity_alljet_all->SetFillColor(0);
   Aplanarity_alljet_all->SetFillStyle(4000);
   Aplanarity_alljet_all->SetBorderMode(0);
   Aplanarity_alljet_all->SetBorderSize(2);
   Aplanarity_alljet_all->SetLeftMargin(0.15709);
   Aplanarity_alljet_all->SetRightMargin(0.1234783);
   Aplanarity_alljet_all->SetBottomMargin(0.12);
   Aplanarity_alljet_all->SetFrameFillStyle(1000);
   Aplanarity_alljet_all->SetFrameBorderMode(0);
   Aplanarity_alljet_all->SetFrameFillStyle(1000);
   Aplanarity_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.371061e+12);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(0);
   st_stack_256->SetMaximum(4.371061e+12);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetTitle("Aplanarity");
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetTitleOffset(1);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Events/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetTitleSize(0.037);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetTitleOffset(1);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_all_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(0,199303.3);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(1,2.913987e+12);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(2,2.283596e+11);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(3,8.364644e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(4,4.057372e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(5,2.250225e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(6,1.34243e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(7,8.396244e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(8,5.397911e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(9,3.532761e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(10,2.329426e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(11,1.537583e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(12,1.014203e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(13,6.673037e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(14,4.336737e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(15,2.764316e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(16,1.728775e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(17,1.0467e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(18,5.712953e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(19,3.042386e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(20,1.607491e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(21,6317582);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(22,2096935);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(23,718561.6);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(24,28254.58);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(25,35.44002);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(0,65949.56);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(1,2.536155e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(2,7.088872e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(3,4.303287e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(4,3.029758e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(5,2.227275e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(6,1.72994e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(7,1.358883e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(8,1.100897e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(9,8950503);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(10,7193924);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(11,5791916);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(12,4704843);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(13,3809947);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(14,3069590);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(15,2500215);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(16,1923164);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(17,1539639);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(18,1142508);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(19,825994.7);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(20,580680.7);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(21,368604.4);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(22,207628.5);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(23,120505.5);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(24,20226.27);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(25,35.44002);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetEntries(7.031602e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_all_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(0,5.379801);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(1,5.339162e+07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(2,2.245938e+07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(3,1.33593e+07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(4,8774645);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(5,6045734);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(6,4274937);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(7,3067561);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(8,2215458);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(9,1602966);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(10,1156194);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(11,828059.1);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(12,586831.3);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(13,409746.9);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(14,280708.2);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(15,187322.6);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(16,121343.9);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(17,75552.07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(18,44608.67);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(19,24704.07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(20,12438.02);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(21,5527.439);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(22,2039.005);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(23,546.2124);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(24,86.11111);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(25,2.554302);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(0,0.6148754);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(1,1993.374);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(2,1309.189);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(3,1012.532);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(4,822.6342);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(5,683.3132);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(6,575.3379);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(7,487.5693);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(8,414.3539);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(9,352.6689);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(10,299.4615);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(11,253.5122);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(12,214.5393);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(13,178.4656);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(14,147.8379);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(15,121.0707);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(16,97.19069);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(17,76.63101);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(18,58.8778);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(19,43.9363);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(20,31.22071);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(21,20.42104);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(22,12.48128);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(23,6.444824);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(24,2.510329);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(25,0.4216451);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetEntries(1.853042e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_alljet_all->Modified();
   Aplanarity_alljet_all->cd();
   Aplanarity_alljet_all->SetSelected(Aplanarity_alljet_all);
}
