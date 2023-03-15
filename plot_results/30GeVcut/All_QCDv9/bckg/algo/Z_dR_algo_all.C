#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Tue Feb 14 16:10:10 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,-654926.2,7.029799,4802792);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
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
   st->SetMaximum(4257020);
   
   TH1F *st_stack_84 = new TH1F("st_stack_84","",30,0,6);
   st_stack_84->SetMinimum(0);
   st_stack_84->SetMaximum(4257020);
   st_stack_84->SetDirectory(0);
   st_stack_84->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_84->SetLineColor(ci);
   st_stack_84->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_84->GetXaxis()->SetRange(1,30);
   st_stack_84->GetXaxis()->SetLabelFont(42);
   st_stack_84->GetXaxis()->SetTitleOffset(1);
   st_stack_84->GetXaxis()->SetTitleFont(42);
   st_stack_84->GetYaxis()->SetTitle("Events/0.2");
   st_stack_84->GetYaxis()->SetLabelFont(42);
   st_stack_84->GetYaxis()->SetTitleSize(0.037);
   st_stack_84->GetYaxis()->SetTitleFont(42);
   st_stack_84->GetZaxis()->SetLabelFont(42);
   st_stack_84->GetZaxis()->SetTitleOffset(1);
   st_stack_84->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_84);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(2,875.8574);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,2003790);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,2817424);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,1933431);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,1577715);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,1645524);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,1571030);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,1279605);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,1196923);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,958123.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,948242.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,703909.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,808797.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,618984.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,674846.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,348324);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,187001.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,147942.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,99030.35);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,42917.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,44551.28);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(23,4878.401);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,5322.609);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(25,1429.819);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(26,1332.314);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(27,50.31782);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(2,508.1158);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,87085.15);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,142130.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,103284);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,95258.45);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,117474);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,113878);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,102523.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,99484.37);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,79266.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,92714.68);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,62820.84);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,88428.34);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,59408.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,78311.88);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,60749.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,24877.32);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,34733.23);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,27443.77);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,7876.774);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,28914.14);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(23,1076.709);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,2166.033);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(25,590.149);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(26,1217.491);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(27,20.14959);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(109852);

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
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,8.715208);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,9183.407);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,20589.51);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,27452.43);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,34380.33);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,39240.5);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,41461.11);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,41239.27);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,38772.45);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,35264.14);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,31225.7);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,27319.13);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,24094.86);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,21605.31);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,18521.95);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,8650.286);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,4302.434);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,2194.02);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,1134.298);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,568.6589);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,256.1188);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,116.7001);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(24,50.0979);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,19.7906);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(26,6.296008);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(27,1.6467);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(28,0.2101058);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.8145559);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,26.98326);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,40.38488);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,46.55001);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,53.09968);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,56.24599);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,57.22724);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,57.17112);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,55.32196);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,52.69891);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,49.38875);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,45.84037);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,43.4371);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,41.00504);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,37.67313);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,25.88852);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,18.35909);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,12.68627);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,9.069659);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,6.56146);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,4.43768);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,2.923918);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(24,1.87019);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,1.180995);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(26,0.648838);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(27,0.3584965);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(28,0.1559181);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(6312161);

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
