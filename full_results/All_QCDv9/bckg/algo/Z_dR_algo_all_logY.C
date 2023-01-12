#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Mon Dec 19 11:15:38 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,-0.9999334,7.029799,10.01976);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetLogy();
   Z_dR_algo_all->SetLeftMargin(0.15709);
   Z_dR_algo_all->SetRightMargin(0.1234783);
   Z_dR_algo_all->SetBottomMargin(0.12);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.305119e+08);
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",30,0,6);
   st_stack_76->SetMinimum(2.10102);
   st_stack_76->SetMaximum(8.275481e+08);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_76->GetXaxis()->SetRange(1,30);
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetTitleOffset(1);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Events/0.2");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetTitleSize(0.037);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetTitleOffset(1);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(2,2378.696);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,2489002);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,3283748);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,2590353);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,2302540);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,1908186);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,2020922);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,1652550);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,1683987);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,1259447);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,1406048);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,1019653);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,1323449);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,1113671);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,1039508);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,524234.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,330493.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,241735.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,219179.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,53392.56);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,43573.61);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(23,10358.19);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,6071.935);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(25,2821.983);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(26,3459.422);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(27,45.42986);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(2,1864.769);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,117325.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,144732.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,147525.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,141626.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,119231.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,135074);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,123702.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,129338.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,99612.58);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,122315.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,90577.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,123353.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,111300.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,102534);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,66427.16);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,52118.47);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,54422.19);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,55342.46);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,8043.816);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,21399.15);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(23,2487.472);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,2021.204);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(25,1550.01);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(26,2070.033);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(27,18.11583);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(124211);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,8.538491);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,9485.393);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,21371.39);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,28443.19);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,35737.64);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,40771.1);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,43095.45);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,42919.63);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,40362.18);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,36760.41);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,32501.89);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,28530.46);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,25154.17);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,22594.52);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,19377.28);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,9073.759);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,4523.913);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,2315.065);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,1198.63);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,604.8179);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,280.4842);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,126.9485);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(24,51.34262);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,21.44731);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(26,7.544446);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(27,1.88095);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(28,0.3603039);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.8193607);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,27.57081);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,41.47753);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,47.8611);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,54.3712);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,57.58152);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,58.80517);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,58.74712);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,56.75218);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,54.04985);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,50.55859);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,47.16786);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,44.35496);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,42.32937);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,38.77414);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,26.40687);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,18.99849);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,13.05701);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,9.349973);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,6.760063);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,4.639332);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,3.119335);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(24,1.898682);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,1.227046);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(26,0.7277079);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(27,0.3683218);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(28,0.1879305);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(6577915);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}
