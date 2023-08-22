void H_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Tue Aug 22 09:21:47 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(0,0,1,1);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1620.676,6.314516,1619356);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.3);
   st->SetMaximum(1387865);
   
   TH1F *st_stack_144 = new TH1F("st_stack_144","",30,0,6);
   st_stack_144->SetMinimum(0.3);
   st_stack_144->SetMaximum(1457258);
   st_stack_144->SetDirectory(0);
   st_stack_144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_144->SetLineColor(ci);
   st_stack_144->GetXaxis()->SetRange(1,30);
   st_stack_144->GetXaxis()->SetLabelFont(42);
   st_stack_144->GetXaxis()->SetLabelSize(0.035);
   st_stack_144->GetXaxis()->SetTitleSize(0.035);
   st_stack_144->GetXaxis()->SetTitleFont(42);
   st_stack_144->GetYaxis()->SetTitle("Events/0.2");
   st_stack_144->GetYaxis()->SetLabelFont(42);
   st_stack_144->GetYaxis()->SetLabelSize(0.05);
   st_stack_144->GetYaxis()->SetTitleSize(0.057);
   st_stack_144->GetYaxis()->SetTitleOffset(1.2);
   st_stack_144->GetYaxis()->SetTitleFont(42);
   st_stack_144->GetZaxis()->SetLabelFont(42);
   st_stack_144->GetZaxis()->SetLabelSize(0.035);
   st_stack_144->GetZaxis()->SetTitleSize(0.035);
   st_stack_144->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_144);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(1,26.07926);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,160656.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,339328.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,411048.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,493994.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,544586);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,498664.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,454272.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,450491);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,390363.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,369489.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,335295.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,341705);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,332670.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,267639.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,270278.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,227379.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,193741.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,155022.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,146877.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,104396.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,73077.63);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(23,66457.96);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(24,51914.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(25,36076.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(26,28462.04);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(27,17221.35);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(28,13163.81);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(29,7290.645);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(30,4281.411);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(31,4939.171);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(1,26.07926);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,7172.697);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,9761.061);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,20266.51);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,12643.06);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,25107.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,20748.13);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,11592.47);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,24284.06);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,10492.13);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,23351.51);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,9592.162);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,28650.84);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,23032.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,7843.12);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,18945.76);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,8202.076);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,7476.823);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,5871.02);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,18087.91);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,4895.898);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,3682.747);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(23,3758.118);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(24,4309.688);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(25,3112.301);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(26,2231.945);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(27,1548.193);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(28,1462.135);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(29,1181.747);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(30,1627.892);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(31,1686.333);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(333044);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(1,1.497909);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,988.6909);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,2804.741);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,3635.444);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,4110.494);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,4031.385);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,3825.397);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,3505.624);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,3160.153);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,2866.858);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,2575.429);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,2326.868);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,2141.817);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,1988.953);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,1827.464);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,1724.844);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,1482.892);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,1335.53);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,1130.435);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,940.282);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,764.2407);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(22,592.7555);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,467.014);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(24,356.2527);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(25,261.3499);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(26,179.581);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(27,124.7495);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(28,74.90631);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(29,42.15816);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(30,26.74611);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(31,38.19631);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(1,0.5571902);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,12.8077);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,21.01702);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,23.62909);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,24.83633);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,24.17909);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,23.45786);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,22.45379);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,21.24087);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,20.18224);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,19.14376);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,17.95996);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,17.26135);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,16.50796);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,15.89198);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,15.54169);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,14.24729);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,13.67257);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,12.55765);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,11.46946);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,10.30316);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(22,9.055783);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,8.029153);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(24,6.975698);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(25,5.938019);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(26,4.921368);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(27,4.099138);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(28,3.023447);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(29,2.239131);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(30,1.86477);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(31,2.093194);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(631310);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(1,40.36039);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(2,29192.08);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(3,91346.27);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(4,102029.8);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(5,89514.24);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(6,72014.75);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(7,58341.65);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(8,48375.85);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(9,40759.67);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(10,34998.66);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(11,30238.12);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(12,26485.37);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(13,23849.43);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(14,21928.16);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(15,20635.05);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(16,19610.45);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(17,18121.72);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(18,16686.67);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(19,14961.95);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(20,13182.31);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(21,11448.65);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(22,9624.714);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(23,7734.873);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(24,6000.279);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(25,4398.864);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(26,2991.157);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(27,1824.541);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(28,995.8454);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(29,484.3605);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(30,243.8015);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(31,315.1164);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(1,1.502088);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(2,44.06485);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(3,78.38539);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(4,82.72068);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(5,77.13823);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(6,68.8243);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(7,61.66561);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(8,55.99667);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(9,51.30868);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(10,47.49484);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(11,44.12553);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(12,41.27937);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(13,39.16285);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(14,37.57184);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(15,36.47864);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(16,35.582);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(17,34.25036);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(18,32.90137);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(19,31.17544);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(20,29.30527);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(21,27.34436);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(22,25.11804);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(23,22.54101);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(24,19.85981);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(25,16.98911);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(26,13.99851);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(27,10.90485);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(28,8.003523);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(29,5.532633);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(30,3.891214);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(31,4.425174);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetEntries(1.291274e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(1,0.7521426);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(2,867.4829);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(3,2385.301);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(4,2481.234);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(5,2906.597);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(6,2772.014);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(7,2568.107);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(8,2396.761);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(9,2195.419);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(10,1997.891);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(11,1868.955);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(12,1676.657);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(13,1537.998);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(14,1463.21);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(15,1275.713);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(16,1199.641);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(17,1078.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(18,953.3736);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(19,776.8572);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(20,659.5378);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(21,521.8679);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(22,408.2056);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(23,316.8703);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(24,242.5946);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(25,193.4258);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(26,140.0236);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(27,85.96237);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(28,53.98534);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(29,31.91029);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(30,14.17371);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(31,32.57626);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(1,0.3815458);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(2,19.99866);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(3,38.00469);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(4,44.7076);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(5,50.08989);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(6,46.72534);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(7,43.15198);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(8,40.9919);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(9,37.71854);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(10,34.76023);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(11,33.81091);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(12,29.8688);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(13,28.2694);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(14,27.22698);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(15,23.4392);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(16,23.95876);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(17,23.64516);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(18,23.92692);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(19,20.45581);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(20,21.07065);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(21,17.81315);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(22,16.5456);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(23,14.00781);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(24,11.66829);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(25,9.873613);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(26,8.511564);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(27,6.036718);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(28,3.436851);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(29,4.023713);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(30,1.796359);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(31,7.387133);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetEntries(198969);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(1,0.1293901);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(2,389.9905);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(3,866.6548);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(4,819.5748);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(5,966.4238);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(6,1053.084);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(7,983.2106);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(8,959.3877);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(9,972.1766);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(10,780.1778);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(11,801.7344);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(12,671.8212);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(13,644.6999);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(14,645.2676);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(15,626.4748);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(16,513.8333);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(17,497.7159);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(18,421.5581);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(19,390.4594);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(20,295.3756);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(21,244.7031);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(22,202.5792);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(23,178.1022);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(24,92.30883);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(25,80.23877);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(26,47.63496);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(27,31.0073);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(28,24.28148);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(29,16.93329);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(30,8.25446);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(31,24.57166);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(1,0.1281885);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(2,26.24468);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(3,40.89277);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(4,44.26976);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(5,43.34045);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(6,46.69507);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(7,46.28458);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(8,47.54276);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(9,45.99085);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(10,34.20161);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(11,35.17441);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(12,32.30296);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(13,28.54316);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(14,31.53929);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(15,32.60615);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(16,22.45061);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(17,28.2511);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(18,28.72881);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(19,28.05284);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(20,24.63442);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(21,21.08993);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(22,21.65334);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(23,21.09897);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(24,9.729275);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(25,11.80276);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(26,5.048459);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(27,3.431548);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(28,3.561581);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(29,2.960304);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(30,2.50808);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(31,10.52273);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetEntries(95654);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(2,4.820881);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(3,12.74235);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(4,10.27972);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(5,9.930903);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(6,8.024371);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(7,9.024232);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(8,10.63987);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(9,7.927203);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(10,6.705226);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(11,5.727552);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(12,7.231321);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(13,8.793012);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(14,5.466189);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(15,5.747982);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(16,5.227621);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(17,3.363706);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(18,2.384276);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(19,3.165999);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(20,3.585822);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(21,2.082052);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(22,1.326493);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(23,0.6175295);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(24,1.188464);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(27,0.4664177);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(28,0.8731578);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(31,0.1511118);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(2,1.189521);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(3,1.839247);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(4,1.639095);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(5,1.679833);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(6,1.705749);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(7,1.638545);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(8,1.765472);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(9,1.537447);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(10,1.458532);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(11,1.24578);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(12,1.456859);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(13,1.754281);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(14,0.9641309);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(15,1.124097);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(16,1.290094);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(17,0.8146225);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(18,0.7745858);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(19,0.9064511);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(20,1.060559);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(21,0.7445224);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(22,0.6634303);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(23,0.3809033);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(24,0.6863332);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(27,0.3496464);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(28,0.6096191);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(31,0.1511118);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetEntries(653);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(2,9.361049);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(3,21.37719);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(4,17.47781);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(5,14.59114);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(6,12.74567);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(7,12.23441);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(8,10.35776);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(9,9.268441);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(10,9.06536);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(11,7.228772);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(12,8.991443);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(13,11.48982);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(14,5.007391);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(15,5.108056);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(16,6.586599);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(17,4.537121);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(18,3.713237);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(19,3.894949);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(20,2.782506);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(21,1.917636);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(22,1.917636);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(23,1.662007);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(24,1.784041);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(25,1.010026);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(26,0.2244502);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(27,0.8764315);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(28,0.7953844);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(29,0.1122251);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(31,0.1122251);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(2,1.352945);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(3,2.007158);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(4,1.805378);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(5,1.77011);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(6,1.822609);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(7,1.693755);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(8,1.689988);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(9,1.530965);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(10,1.502341);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(11,1.261414);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(12,1.476123);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(13,1.801388);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(14,0.8306745);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(15,1.01353);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(16,1.310327);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(17,0.8374226);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(18,0.8237786);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(19,0.9094333);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(20,0.9818949);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(21,0.6907239);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(22,0.6907239);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(23,0.5005512);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(24,0.7253547);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(25,0.3366753);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(26,0.1587103);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(27,0.4029767);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(28,0.5925832);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(29,0.1122251);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(31,0.1122251);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetEntries(1264);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(2,29.0209);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(3,66.66049);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(4,49.7702);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(5,34.0149);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(6,27.52464);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(7,21.71292);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(8,20.15248);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(9,20.32451);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(10,16.81178);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(11,14.3751);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(12,16.35719);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(13,14.12342);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(14,13.97495);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(15,14.68276);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(16,12.03137);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(17,10.70003);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(18,9.849462);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(19,7.934132);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(20,5.124007);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(21,3.792149);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(22,4.112134);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(23,3.726935);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(24,4.032538);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(25,1.876819);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(26,1.078117);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(27,0.8120543);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(28,1.077602);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(29,0.2794144);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(2,2.782103);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(3,4.22787);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(4,3.642266);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(5,3.01999);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(6,2.713964);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(7,2.399646);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(8,2.31311);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(9,2.33309);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(10,2.11974);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(11,1.957518);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(12,2.095789);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(13,1.941547);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(14,1.939401);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(15,1.981506);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(16,1.794664);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(17,1.69282);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(18,1.6203);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(19,1.449598);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(20,1.176384);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(21,1.013944);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(22,1.062366);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(23,0.9967537);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(24,1.041892);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(25,0.7099592);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(26,0.5394972);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(27,0.4693271);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(28,0.538925);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(29,0.2794144);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetEntries(1595);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(1,0.005736969);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(2,17.12174);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(3,49.01497);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(4,44.52784);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(5,31.95617);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(6,20.91201);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(7,15.18745);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(8,12.11315);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(9,11.11372);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(10,9.997917);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(11,9.011812);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(12,8.280025);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(13,7.324998);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(14,7.007209);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(15,6.505182);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(16,5.907641);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(17,5.106532);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(18,4.357504);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(19,3.881685);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(20,3.147455);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(21,3.065104);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(22,2.763699);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(23,2.590166);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(24,2.351795);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(25,1.949799);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(26,1.397028);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(27,0.8831113);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(28,0.4739341);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(29,0.146712);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(30,0.08080363);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(31,0.06680001);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(1,0.002876078);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(2,0.1878817);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(3,0.3164464);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(4,0.2975495);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(5,0.2500973);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(6,0.2015758);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(7,0.1716313);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(8,0.1539425);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(9,0.1478661);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(10,0.1407474);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(11,0.1340406);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(12,0.1288214);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(13,0.121148);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(14,0.1185838);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(15,0.1142034);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(16,0.1081864);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(17,0.1002598);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(18,0.09284926);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(19,0.08749396);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(20,0.07834871);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(21,0.07710353);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(22,0.07417895);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(23,0.0720018);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(24,0.06916031);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(25,0.06339376);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(26,0.05384857);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(27,0.04327614);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(28,0.0312646);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(29,0.01704343);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(30,0.01270045);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(31,0.0113852);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetEntries(160336);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(1,0.003246718);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(2,5.173645);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(3,18.22221);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(4,20.78387);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(5,17.59397);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(6,12.39759);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(7,9.756388);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(8,8.120042);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(9,7.16226);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(10,6.521033);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(11,5.842469);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(12,5.121698);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(13,4.524302);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(14,4.230474);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(15,4.048658);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(16,3.735349);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(17,3.482105);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(18,2.95289);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(19,2.564907);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(20,2.370104);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(21,1.962641);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(22,1.749981);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(23,1.368492);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(24,1.108754);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(25,0.795446);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(26,0.5373319);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(27,0.3814894);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(28,0.1688293);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(29,0.1055183);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(30,0.03246718);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(31,0.03246718);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(1,0.001357909);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(2,0.05420592);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(3,0.10173);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(4,0.1086455);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(5,0.09996093);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(6,0.08391065);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(7,0.0744377);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(8,0.06790903);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(9,0.06377838);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(10,0.06085645);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(11,0.0576032);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(12,0.0539331);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(13,0.05069022);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(14,0.04901657);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(15,0.04795169);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(16,0.04605895);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(17,0.04447023);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(18,0.04095171);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(19,0.03816667);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(20,0.03668868);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(21,0.03338634);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(22,0.03152572);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(23,0.02787851);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(24,0.02509378);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(25,0.02125464);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(26,0.01746907);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(27,0.01471938);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(28,0.009792022);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(29,0.007741273);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(30,0.004294086);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(31,0.004294086);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetEntries(282471);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(2,0.1506208);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(3,0.330044);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(4,0.3844199);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(5,0.262885);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(6,0.2071988);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(7,0.1450495);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(8,0.09815651);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(9,0.09242977);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(10,0.09569152);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(11,0.1098524);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(12,0.084954);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(13,0.05130339);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(14,0.08320499);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(15,0.0616287);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(16,0.05021614);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(17,0.03708113);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(18,0.03429909);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(19,0.03017306);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(20,0.02841686);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(21,0.02724882);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(22,0.03881686);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(23,0.01884129);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(24,0.01861831);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(25,0.008630517);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(26,0.01980681);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(27,0.00589551);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(28,0.00659102);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(2,0.01824512);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(3,0.02765711);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(4,0.02941277);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(5,0.02453309);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(6,0.02170759);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(7,0.01834915);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(8,0.01504015);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(9,0.01430168);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(10,0.01496307);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(11,0.01614053);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(12,0.0137683);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(13,0.01054047);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(14,0.01400937);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(15,0.01209856);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(16,0.01075605);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(17,0.009414182);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(18,0.008826054);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(19,0.008065678);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(20,0.0079928);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(21,0.007774413);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(22,0.009136211);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(23,0.006512068);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(24,0.006362907);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(25,0.004467093);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(26,0.007089196);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(27,0.003531947);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(28,0.003893142);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(2,0.03947005);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(3,0.1266209);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(4,0.1388712);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(5,0.1133022);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(6,0.0916989);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(7,0.07345209);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(8,0.06133484);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(9,0.05939021);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(10,0.05238031);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(11,0.04236553);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(12,0.03795881);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(13,0.02913009);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(14,0.02801129);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(15,0.0319531);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(16,0.0206338);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(17,0.02480644);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(18,0.0206798);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(19,0.01817826);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(20,0.01764783);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(21,0.01439766);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(22,0.01058228);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(23,0.01159613);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(24,0.007654261);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(25,0.005567939);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(26,0.006005364);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(27,0.002293928);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(28,0.0008304226);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(30,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(31,0.0005072625);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(2,0.003368938);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(3,0.006041472);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(4,0.006410422);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(5,0.005792544);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(6,0.005250246);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(7,0.004686994);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(8,0.004303388);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(9,0.004172547);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(10,0.003930363);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(11,0.003481647);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(12,0.003364125);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(13,0.002908617);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(14,0.00285967);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(15,0.003103366);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(16,0.002469377);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(17,0.002719418);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(18,0.002497018);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(19,0.002345249);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(20,0.002310477);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(21,0.002063974);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(22,0.001757901);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(23,0.001874719);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(24,0.001513028);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(25,0.00128084);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(26,0.001328812);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(27,0.0008317484);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(28,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(30,0.0002935987);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(31,0.0003645467);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all__395 = new TH1D("VbbHcc_algo_H_dR_Bj1_all__395","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(1,119);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(2,84394);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(3,186161);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(4,197357);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(5,232999);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(6,236215);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(7,225315);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(8,211957);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(9,196986);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(10,183628);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(11,170520);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(12,159458);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(13,148773);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(14,139142);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(15,129780);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(16,120553);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(17,104049);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(18,90299);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(19,75847);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(20,63400);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(21,51118);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(22,40530);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(23,32378);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(24,25126);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(25,19289);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(26,13889);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(27,9726);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(28,6079);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(29,3529);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(30,2072);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(31,2252);
   VbbHcc_algo_H_dR_Bj1_all__395->SetEntries(3162969);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all__395->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all__395->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1_all__395->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1_all__395->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1_all__395->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all__395->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all__395->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fx1287[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fy1287[30] = {
   68.82807,
   192160.2,
   436899.6,
   520157.9,
   591600.4,
   624539.1,
   564451,
   509571.8,
   497634.3,
   431056.5,
   405015.7,
   366502,
   369925.3,
   358731.9,
   292040.8,
   293361,
   248587.4,
   213161.8,
   172304.1,
   161971.9,
   117388.5,
   83917.81,
   75164.82,
   58616.52,
   41015.62,
   31823.7,
   19291.03,
   14316.22,
   7866.652,
   4574.501};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fex1287[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fey1287[30] = {
   26.13152,
   7172.921,
   9761.559,
   20266.79,
   12643.49,
   25107.6,
   20748.34,
   11592.8,
   24284.2,
   10492.37,
   23351.61,
   9592.368,
   28650.9,
   23032.77,
   7843.324,
   18945.83,
   8202.243,
   7477.001,
   5871.22,
   18087.97,
   4896.063,
   3682.945,
   3758.279,
   4309.767,
   3112.392,
   2232.016,
   1548.252,
   1462.169,
   1181.772,
   1627.901};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fx1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fy1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fex1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fey1287);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetMinimum(38.42689);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetMaximum(714607.1);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1_all","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

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
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_algo_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__396 = new TH1D("data_mc_ratio__396","",30,0,6);
   data_mc_ratio__396->SetBinContent(1,1.728946);
   data_mc_ratio__396->SetBinContent(2,0.4391857);
   data_mc_ratio__396->SetBinContent(3,0.4260956);
   data_mc_ratio__396->SetBinContent(4,0.3794175);
   data_mc_ratio__396->SetBinContent(5,0.3938453);
   data_mc_ratio__396->SetBinContent(6,0.3782229);
   data_mc_ratio__396->SetBinContent(7,0.3991755);
   data_mc_ratio__396->SetBinContent(8,0.4159512);
   data_mc_ratio__396->SetBinContent(9,0.3958449);
   data_mc_ratio__396->SetBinContent(10,0.4259952);
   data_mc_ratio__396->SetBinContent(11,0.4210208);
   data_mc_ratio__396->SetBinContent(12,0.4350809);
   data_mc_ratio__396->SetBinContent(13,0.4021704);
   data_mc_ratio__396->SetBinContent(14,0.3878718);
   data_mc_ratio__396->SetBinContent(15,0.44439);
   data_mc_ratio__396->SetBinContent(16,0.4109374);
   data_mc_ratio__396->SetBinContent(17,0.418561);
   data_mc_ratio__396->SetBinContent(18,0.4236172);
   data_mc_ratio__396->SetBinContent(19,0.4401926);
   data_mc_ratio__396->SetBinContent(20,0.3914259);
   data_mc_ratio__396->SetBinContent(21,0.43546);
   data_mc_ratio__396->SetBinContent(22,0.4829726);
   data_mc_ratio__396->SetBinContent(23,0.43076);
   data_mc_ratio__396->SetBinContent(24,0.4286505);
   data_mc_ratio__396->SetBinContent(25,0.4702842);
   data_mc_ratio__396->SetBinContent(26,0.4364357);
   data_mc_ratio__396->SetBinContent(27,0.5041721);
   data_mc_ratio__396->SetBinContent(28,0.4246232);
   data_mc_ratio__396->SetBinContent(29,0.4486025);
   data_mc_ratio__396->SetBinContent(30,0.4529456);
   data_mc_ratio__396->SetBinContent(31,0.420935);
   data_mc_ratio__396->SetBinError(1,0.1584922);
   data_mc_ratio__396->SetBinError(2,0.001511793);
   data_mc_ratio__396->SetBinError(3,0.0009875582);
   data_mc_ratio__396->SetBinError(4,0.0008540652);
   data_mc_ratio__396->SetBinError(5,0.0008159219);
   data_mc_ratio__396->SetBinError(6,0.0007782051);
   data_mc_ratio__396->SetBinError(7,0.0008409474);
   data_mc_ratio__396->SetBinError(8,0.00090348);
   data_mc_ratio__396->SetBinError(9,0.0008918819);
   data_mc_ratio__396->SetBinError(10,0.0009941119);
   data_mc_ratio__396->SetBinError(11,0.001019567);
   data_mc_ratio__396->SetBinError(12,0.001089549);
   data_mc_ratio__396->SetBinError(13,0.001042673);
   data_mc_ratio__396->SetBinError(14,0.001039822);
   data_mc_ratio__396->SetBinError(15,0.00123356);
   data_mc_ratio__396->SetBinError(16,0.00118355);
   data_mc_ratio__396->SetBinError(17,0.001297597);
   data_mc_ratio__396->SetBinError(18,0.001409717);
   data_mc_ratio__396->SetBinError(19,0.001598356);
   data_mc_ratio__396->SetBinError(20,0.001554551);
   data_mc_ratio__396->SetBinError(21,0.001926023);
   data_mc_ratio__396->SetBinError(22,0.002399022);
   data_mc_ratio__396->SetBinError(23,0.002393924);
   data_mc_ratio__396->SetBinError(24,0.002704218);
   data_mc_ratio__396->SetBinError(25,0.003386145);
   data_mc_ratio__396->SetBinError(26,0.003703265);
   data_mc_ratio__396->SetBinError(27,0.005112245);
   data_mc_ratio__396->SetBinError(28,0.005446125);
   data_mc_ratio__396->SetBinError(29,0.007551546);
   data_mc_ratio__396->SetBinError(30,0.009950644);
   data_mc_ratio__396->SetBinError(31,0.1329804);
   data_mc_ratio__396->SetMinimum(0.4);
   data_mc_ratio__396->SetMaximum(1.6);
   data_mc_ratio__396->SetEntries(394.3983);
   data_mc_ratio__396->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__396->SetLineColor(ci);
   data_mc_ratio__396->SetLineWidth(2);
   data_mc_ratio__396->SetMarkerStyle(20);
   data_mc_ratio__396->SetMarkerSize(1.2);
   data_mc_ratio__396->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__396->GetXaxis()->SetRange(1,30);
   data_mc_ratio__396->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__396->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__396->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__396->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__396->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__396->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__396->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__396->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__396->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__396->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__396->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__396->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__396->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__396->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__396->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__396->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__396->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1288[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1288[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1288[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1288[30] = {
   0.3796637,
   0.03732782,
   0.0223428,
   0.03896277,
   0.02137168,
   0.0402018,
   0.03675844,
   0.02275008,
   0.04879928,
   0.02434106,
   0.05765606,
   0.02617276,
   0.07745051,
   0.06420609,
   0.02685695,
   0.06458197,
   0.0329954,
   0.03507665,
   0.03407475,
   0.1116735,
   0.0417082,
   0.04388753,
   0.05000051,
   0.07352478,
   0.07588308,
   0.07013691,
   0.0802576,
   0.1021337,
   0.1502256,
   0.3558642};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1288,Graph_from_mc_statistical_error_fy1288,Graph_from_mc_statistical_error_fex1288,Graph_from_mc_statistical_error_fey1288);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1288 = new TH1F("Graph_Graph_from_mc_statistical_error1288","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1288->SetMinimum(0.5444035);
   Graph_Graph_from_mc_statistical_error1288->SetMaximum(1.455596);
   Graph_Graph_from_mc_statistical_error1288->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1288->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1288->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1288);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
