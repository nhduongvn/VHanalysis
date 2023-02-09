#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(-1.310117,-544147.2,7.029799,3990413);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_all->SetBottomMargin(0.12);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3536957);
   
   TH1F *st_stack_112 = new TH1F("st_stack_112","",30,0,6);
   st_stack_112->SetMinimum(0);
   st_stack_112->SetMaximum(3536957);
   st_stack_112->SetDirectory(0);
   st_stack_112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_112->SetLineColor(ci);
   st_stack_112->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_112->GetXaxis()->SetRange(1,30);
   st_stack_112->GetXaxis()->SetLabelFont(42);
   st_stack_112->GetXaxis()->SetTitleOffset(1);
   st_stack_112->GetXaxis()->SetTitleFont(42);
   st_stack_112->GetYaxis()->SetTitle("Events/0.2");
   st_stack_112->GetYaxis()->SetLabelFont(42);
   st_stack_112->GetYaxis()->SetTitleSize(0.037);
   st_stack_112->GetYaxis()->SetTitleFont(42);
   st_stack_112->GetZaxis()->SetLabelFont(42);
   st_stack_112->GetZaxis()->SetTitleOffset(1);
   st_stack_112->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_112);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(1,1876.019);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,1181968);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,2323605);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,2067702);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,2251516);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,2004005);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,2017966);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,1760623);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,1502789);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,1326754);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,1468702);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,1310483);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,1071072);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,1063388);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,732325.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,797909.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,516905.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,344041.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,264224.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,161497.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,85734.63);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,89026.89);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(23,65450.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(24,17479.53);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(25,5246.899);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(26,3248.189);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(27,437.9987);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(28,402.3904);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(30,24.1281);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(1,1876.019);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,86919.93);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,134347.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,130868.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,139618.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,129398.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,130435.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,121559.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,103944);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,94459.08);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,111630.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,100052.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,85296);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,89554.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,50639.29);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,63548.45);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,54043.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,45553.29);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,47403.66);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,29114.76);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,16824.53);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,30640.87);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(23,27519.11);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(24,4226.119);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(25,1552.136);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(26,1411.212);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(27,270.3292);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(28,311.2339);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(30,24.1281);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(113207);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(1,5.405707);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,9866.13);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,34366.46);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,48798.19);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,50754.31);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,44762.17);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,37575.86);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,31464.31);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,26164.76);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,21949.91);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,18473.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,15882.12);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,13930.02);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,12618.8);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,11624.49);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,10476.79);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,6233.235);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,4073.712);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,2668.769);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,1736.916);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,1095.293);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(22,652.4749);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,365.3084);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(24,202.498);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(25,98.2632);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(26,49.25953);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(27,20.16893);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(28,8.409406);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(29,3.968465);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(30,2.198512);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(31,3.497161);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(1,0.5900148);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,25.04252);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,46.83384);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,56.12012);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,57.64274);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,54.47012);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,50.13069);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,45.93378);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,41.87227);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,38.28986);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,35.04534);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,32.43875);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,30.304);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,28.82206);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,27.62368);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,26.20225);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,20.18571);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,16.2823);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,13.16151);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,10.59682);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,8.411518);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(22,6.486088);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,4.85035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(24,3.612111);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(25,2.526114);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(26,1.788278);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(27,1.1513);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(28,0.7492891);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(29,0.5150383);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(30,0.386192);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(31,0.489101);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(6476475);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_1","QCD","F");

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
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
