#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,-0.8934424,7.029799,9.433739);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetLogy();
   Z_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.04733e+08);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(2.217274);
   st_stack_116->SetMaximum(2.5178e+08);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,226853.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,1018674);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,667096.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,449425.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,275049.6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,296601.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,123345.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,108498.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,69076.47);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,46502.16);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,29805.28);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,23170.04);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,20047.89);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,7757.101);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,6937.021);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,5688.501);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,3738.614);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,2566.012);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(19,3440.218);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(20,1017.64);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(21,1943.488);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(22,765.9987);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,81.06352);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(24,55.94917);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(25,3524.937);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(26,21.6364);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,7389.724);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,41954.16);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,29982.57);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,18210.67);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,14630.38);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,53439.45);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,18282.89);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,28438.45);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,8376.74);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,7399.728);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,5349.946);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,4842.315);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,4604.35);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,2152.186);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,1812.579);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,2739.84);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,2086.205);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,1834.593);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(19,2343.384);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(20,496.3817);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(21,1795.737);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(22,476.1169);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,40.59251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(24,38.62345);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(25,2356.075);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(26,21.6364);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(70650);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,4074.091);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,28656.51);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,42325.99);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,37933.51);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,26827.83);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,17004.29);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,10602.43);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,6764.332);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,4475.923);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,3038.249);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,2072.765);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,1418.238);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,1000.945);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,691.8395);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,470.885);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,331.4167);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(17,232.9803);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,160.1959);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,107.8592);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(20,78.9076);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(21,48.61536);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(22,38.51116);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(23,24.25116);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(24,15.87906);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,10.71532);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(26,7.302173);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(27,4.84193);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(28,4.141517);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(29,2.216171);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(30,1.435798);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(31,3.473421);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,16.30745);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,43.24229);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,52.52115);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,49.69664);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,41.77116);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,33.21862);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,26.20796);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,20.90022);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,16.99152);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,13.99644);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,11.54051);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,9.535571);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,8.010888);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,6.662847);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,5.496646);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,4.615847);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(17,3.870975);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,3.206425);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,2.628341);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(20,2.242599);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(21,1.764673);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(22,1.580094);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(23,1.244942);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(24,1.005915);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,0.826699);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(26,0.6805118);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(27,0.5519206);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(28,0.5166452);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(29,0.3704454);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(30,0.3036734);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(31,0.4712229);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(2980897);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","QCD","F");

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
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
