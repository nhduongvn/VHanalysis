void H_dR_Bj1_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_all/H_dR_Bj1_tags_all
//=========  (Thu Aug 10 12:20:13 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_all = new TCanvas("H_dR_Bj1_tags_all", "H_dR_Bj1_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_all->SetHighLightColor(2);
   H_dR_Bj1_tags_all->Range(0,0,1,1);
   H_dR_Bj1_tags_all->SetFillColor(0);
   H_dR_Bj1_tags_all->SetFillStyle(4000);
   H_dR_Bj1_tags_all->SetBorderMode(0);
   H_dR_Bj1_tags_all->SetBorderSize(2);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.364644,6.314516,12.86209);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.3);
   st->SetMaximum(8.362764e+10);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",30,0,6);
   st_stack_48->SetMinimum(0.0446255);
   st_stack_48->SetMaximum(2.750551e+11);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetRange(1,30);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetLabelSize(0.035);
   st_stack_48->GetXaxis()->SetTitleSize(0.035);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.2");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetLabelSize(0.05);
   st_stack_48->GetYaxis()->SetTitleSize(0.057);
   st_stack_48->GetYaxis()->SetTitleOffset(1.2);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetLabelSize(0.035);
   st_stack_48->GetZaxis()->SetTitleSize(0.035);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(1,20239.16);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(2,74458.26);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(3,64083.03);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(4,56084.85);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(5,44727.38);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(6,51121.75);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(7,36174.14);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(8,28155.97);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(9,21940.35);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(10,30579.81);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(11,38082.35);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(12,20102.1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(13,21753.84);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(14,17154.41);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(15,11797.05);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(16,16199.31);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(17,8919.411);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(18,6983.61);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(19,4944.034);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(20,5132.166);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(21,2163.113);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(22,3198.971);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(23,2742.587);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(24,1629.061);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(25,2372.252);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(26,851.7389);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(27,1536.618);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(28,649.7811);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(29,221.9917);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(30,48.49477);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(31,897.9466);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(1,1461.016);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(2,3915.02);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(3,3453.068);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(4,3409.813);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(5,3050.025);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(6,15031.08);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(7,3018.129);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(8,2553.318);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(9,2295.146);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(10,3721.35);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(11,15016.59);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(12,2559.407);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(13,2681.522);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(14,2168.763);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(15,1277.776);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(16,2796.804);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(17,1250.417);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(18,1064.754);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(19,790.2506);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(20,1533.855);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(21,419.8605);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(22,725.8219);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(23,717.6479);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(24,544.3469);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(25,668.9254);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(26,286.6123);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(27,543.7792);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(28,377.5768);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(29,60.4121);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(30,32.73378);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(31,527.4695);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetEntries(29294);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(1,116.1834);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(2,356.5238);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(3,374.3004);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(4,317.019);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(5,261.1922);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(6,219.5099);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(7,183.1163);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(8,154.8181);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(9,138.0397);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(10,123.4602);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(11,102.9733);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(12,91.17477);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(13,80.74198);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(14,77.65979);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(15,67.51156);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(16,63.47578);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(17,48.64807);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(18,42.34287);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(19,31.38789);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(20,27.32689);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(21,23.75753);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(22,21.33715);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(23,17.08228);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(24,12.53278);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(25,11.46042);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(26,7.680109);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(27,5.855324);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(28,3.062984);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(29,2.336659);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(30,1.788408);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(31,3.070263);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(1,4.456943);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(2,7.582925);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(3,7.671491);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(4,7.026692);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(5,6.431912);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(6,5.969915);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(7,5.405243);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(8,5.012492);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(9,4.715302);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(10,4.477917);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(11,3.987336);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(12,3.742424);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(13,3.43878);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(14,3.52906);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(15,3.234728);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(16,3.163154);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(17,2.796668);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(18,2.55959);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(19,2.138204);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(20,2.075862);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(21,1.947778);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(22,1.900609);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(23,1.629374);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(24,1.371002);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(25,1.351457);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(26,1.127701);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(27,1.029389);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(28,0.6688829);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(29,0.602914);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(30,0.5717583);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(31,0.6667163);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetEntries(34591);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(1,1692.207);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(2,6269.816);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(3,7560.323);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(4,6748.145);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(5,5499.194);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(6,4396.665);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(7,3560.302);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(8,2961.199);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(9,2586.907);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(10,2273.036);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(11,2077.93);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(12,1891.211);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(13,1697.439);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(14,1499.089);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(15,1341.307);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(16,1150.585);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(17,926.2737);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(18,768.4836);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(19,643.7779);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(20,511.1141);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(21,406.8271);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(22,329.9417);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(23,256.6214);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(24,199.1692);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(25,146.4754);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(26,106.4418);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(27,77.209);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(28,51.02355);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(29,32.63506);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(30,22.34046);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(31,40.4274);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(1,10.68484);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(2,20.55555);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(3,22.60809);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(4,21.37214);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(5,19.29713);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(6,17.25791);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(7,15.51833);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(8,14.15215);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(9,13.22976);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(10,12.3954);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(11,11.86239);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(12,11.32716);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(13,10.72341);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(14,10.07351);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(15,9.532731);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(16,8.822479);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(17,7.902432);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(18,7.199072);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(19,6.589072);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(20,5.864435);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(21,5.225758);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(22,4.70786);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(23,4.148656);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(24,3.664636);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(25,3.136948);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(26,2.663471);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(27,2.266283);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(28,1.847282);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(29,1.477707);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(30,1.219768);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(31,1.631993);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetEntries(880955);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(1,314.5151);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(2,981.8107);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(3,1059.965);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(4,872.8712);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(5,659.3304);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(6,519.9474);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(7,430.9251);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(8,376.0818);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(9,337.3697);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(10,309.4523);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(11,268.8256);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(12,260.1777);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(13,228.3581);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(14,212.1727);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(15,164.7324);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(16,141.5053);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(17,118.4436);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(18,101.8233);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(19,75.36956);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(20,61.76951);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(21,53.7028);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(22,33.78594);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(23,26.38446);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(24,24.61196);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(25,17.16236);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(26,12.54809);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(27,7.900026);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(28,6.739368);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(29,2.884535);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(30,1.392991);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(31,5.32449);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(1,7.458123);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(2,19.23185);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(3,22.66134);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(4,22.376);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(5,20.50638);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(6,16.22522);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(7,15.37064);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(8,13.94427);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(9,13.96834);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(10,14.00521);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(11,11.23356);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(12,12.54916);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(13,11.26009);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(14,11.78752);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(15,8.545281);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(16,7.725735);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(17,8.522365);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(18,7.068413);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(19,6.613748);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(20,5.931725);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(21,5.107463);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(22,2.959369);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(23,2.413057);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(24,3.15946);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(25,2.02335);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(26,1.638201);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(27,1.131488);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(28,1.213385);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(29,0.7038863);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(30,0.4221077);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(31,1.217998);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetEntries(50972);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(1,50.89013);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(2,116.4629);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(3,95.47366);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(4,65.99608);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(5,65.44353);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(6,60.98966);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(7,42.68135);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(8,33.72413);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(9,28.14782);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(10,24.19658);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(11,20.68322);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(12,33.87906);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(13,24.18916);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(14,14.30501);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(15,15.39393);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(16,14.46807);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(17,11.45423);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(18,8.272677);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(19,8.052264);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(20,5.603393);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(21,5.641831);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(22,5.560723);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(23,3.501947);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(24,1.899752);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(25,3.265049);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(26,0.3557222);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(27,0.6930041);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(28,0.5265396);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(29,0.1448546);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(30,0.5066363);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(31,0.4032125);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(1,2.64655);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(2,14.05916);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(3,9.17206);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(4,5.365358);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(5,8.989177);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(6,8.905251);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(7,5.353169);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(8,4.426338);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(9,3.632589);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(10,3.077676);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(11,3.636953);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(12,5.099799);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(13,3.86485);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(14,2.29625);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(15,2.940178);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(16,2.429417);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(17,2.428889);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(18,1.55353);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(19,2.484264);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(20,1.420813);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(21,1.533624);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(22,2.437754);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(23,0.6811423);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(24,0.5034544);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(25,1.276124);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(26,0.1616718);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(27,0.3099311);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(28,0.2382196);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(29,0.0894394);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(30,0.2152736);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(31,0.2069137);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetEntries(7669);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(1,0.6306118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(2,1.351393);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(3,1.172824);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(6,0.2687386);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(9,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(12,0.4520427);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(1,0.4459099);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(2,0.6627884);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(3,0.6669298);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(5,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(6,0.1900269);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(9,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(11,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(12,0.4520427);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(17,0.1343693);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(1,1.066537);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(2,2.172467);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(3,1.448992);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(4,1.078175);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(5,0.2179625);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(6,0.6538874);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(7,0.1089812);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(8,0.1089812);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(11,0.2179625);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(12,0.5610239);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(15,0.2179625);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(16,0.3269437);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(17,0.2179625);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(30,0.1089812);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(1,0.4963298);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(2,0.7224592);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(3,0.6841562);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(4,0.4272659);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(5,0.1541227);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(6,0.2669484);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(7,0.1089812);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(8,0.1089812);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(11,0.1541227);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(12,0.4649941);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(14,0.1089812);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(15,0.1541227);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(16,0.188761);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(17,0.1541227);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(30,0.1089812);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(1,5.638155);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(2,21.23344);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(3,23.02399);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(4,14.1201);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(5,11.91325);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(6,8.365811);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(7,9.625787);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(8,7.087379);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(9,5.125327);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(10,6.486191);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(11,5.509496);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(12,5.062931);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(13,4.954534);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(14,4.944515);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(15,3.652199);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(16,3.119559);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(17,3.615991);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(18,1.893505);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(19,1.029073);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(20,0.8020359);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(21,0.4864143);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(22,0.5588287);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(23,0.7658287);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(24,1.344694);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(25,0.5588287);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(1,1.232063);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(2,2.349127);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(3,2.458152);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(4,1.924806);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(5,1.759909);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(6,1.482068);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(7,1.585288);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(8,1.366713);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(9,1.147779);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(10,1.299552);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(11,1.204684);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(12,1.133368);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(13,1.13846);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(14,1.136274);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(15,0.978035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(16,0.9024173);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(17,0.9683129);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(18,0.7166832);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(19,0.5152364);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(20,0.4639984);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(21,0.3439469);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(22,0.3951516);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(23,0.4431386);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(24,0.6020495);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(25,0.3951516);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(27,0.2432072);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(1,5.191967);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(2,19.39194);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(3,22.16433);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(4,18.02934);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(5,13.22739);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(6,9.689356);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(7,7.798278);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(8,6.582531);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(9,6.143622);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(10,6.221755);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(11,6.002703);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(12,5.816018);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(13,5.083046);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(14,4.112302);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(15,3.217073);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(16,2.48821);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(17,1.698129);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(18,1.287364);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(19,0.9245721);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(20,0.6738987);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(21,0.533801);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(22,0.4507878);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(23,0.3659004);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(24,0.3135612);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(25,0.2470752);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(26,0.1683365);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(27,0.1021494);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(28,0.04542635);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(29,0.02855118);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(30,0.01234476);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(31,0.01886394);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(1,0.09917355);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(2,0.19066);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(3,0.2025004);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(4,0.1821235);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(5,0.1557218);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(6,0.1334987);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(7,0.1200094);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(8,0.1103006);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(9,0.1067462);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(10,0.1074821);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(11,0.1057183);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(12,0.1041014);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(13,0.09712165);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(14,0.08728557);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(15,0.07707211);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(16,0.06792606);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(17,0.05596984);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(18,0.04906193);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(19,0.04134656);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(20,0.03506551);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(21,0.03156271);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(22,0.02872855);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(23,0.0261657);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(24,0.02457742);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(25,0.02160405);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(26,0.01767062);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(27,0.01368644);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(28,0.009083569);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(29,0.007547422);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(30,0.004756959);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(31,0.006059196);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetEntries(83441);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(1,2.02935);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(2,8.007631);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(3,10.17556);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(4,8.756802);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(5,6.580637);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(6,4.74201);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(7,3.749975);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(8,3.068037);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(9,2.75794);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(10,2.630334);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(11,2.482146);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(12,2.269469);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(13,2.027978);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(14,1.746695);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(15,1.377598);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(16,1.068873);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(17,0.9124528);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(18,0.6448914);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(19,0.4953315);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(20,0.4020281);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(21,0.3361668);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(22,0.2483518);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(23,0.2401192);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(24,0.1523041);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(25,0.09741977);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(26,0.1029082);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(27,0.04116328);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(28,0.03018641);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(29,0.008232657);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(30,0.001372109);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(31,0.005488438);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(1,0.03121145);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(2,0.0619994);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(3,0.06988995);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(4,0.06483481);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(5,0.05620429);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(6,0.0477108);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(7,0.04242772);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(8,0.03837653);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(9,0.03638546);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(10,0.03553374);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(11,0.03451828);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(12,0.03300636);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(13,0.0312009);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(14,0.02895637);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(15,0.0257156);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(16,0.02265158);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(17,0.02092862);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(18,0.01759458);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(19,0.01541997);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(20,0.01389196);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(21,0.01270319);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(22,0.01091866);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(23,0.01073616);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(24,0.008550497);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(25,0.006838471);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(26,0.007028465);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(27,0.004445192);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(28,0.003806635);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(29,0.00198795);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(30,0.0008115772);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(31,0.001623154);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetEntries(146904);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(1,0.01326405);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(2,0.07416786);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(3,0.06523695);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(4,0.05103258);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(5,0.03650655);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(6,0.0283049);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(7,0.02377521);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(8,0.0138861);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(9,0.0138861);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(10,0.009996332);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(11,0.008416081);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(12,0.004208041);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(13,0.01504085);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(14,0.008630517);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(15,0.005362797);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(16,0.005362797);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(17,0.002627789);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(18,0.004315259);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(21,0.005255579);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(23,0.004315259);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(28,0.002627789);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(1,0.005183774);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(2,0.01309707);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(3,0.01209997);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(4,0.01075661);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(5,0.009125515);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(6,0.008100621);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(7,0.007381912);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(8,0.005810807);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(9,0.005810807);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(10,0.004615424);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(11,0.004336466);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(12,0.003066345);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(13,0.006224833);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(14,0.004467093);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(15,0.003792828);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(16,0.003792828);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(17,0.002627789);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(18,0.003158712);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(19,0.002234813);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(20,0.002234813);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(21,0.003716255);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(23,0.003158712);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(28,0.002627789);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetEntries(187);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(1,0.006028868);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(2,0.03079991);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(3,0.03092837);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(4,0.02415187);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(5,0.02080797);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(6,0.01002902);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(7,0.009868423);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(8,0.009636641);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(9,0.005095455);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(10,0.006236137);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(11,0.003666055);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(12,0.004622298);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(13,0.004772295);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(14,0.003193235);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(15,0.002801191);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(16,0.004207423);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(17,0.003250844);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(18,0.001429736);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(19,0.001314182);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(20,0.001164185);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(21,0.002478367);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(22,0.001072134);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(23,0.001521787);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(24,0.0009221373);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(25,0.001371791);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(1,0.001309753);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(2,0.003018582);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(3,0.002986559);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(4,0.002573484);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(5,0.002427802);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(6,0.001679299);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(7,0.001635962);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(8,0.00168586);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(9,0.001198842);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(10,0.001355669);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(11,0.00100297);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(12,0.001180025);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(13,0.00118225);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(14,0.0009390978);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(15,0.0009081298);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(16,0.00110769);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(17,0.0009590356);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(18,0.0005932865);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(19,0.0005963076);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(20,0.0005918846);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(21,0.0008401846);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(22,0.0005510293);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(23,0.0006314134);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(24,0.0005462398);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(25,0.000627238);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all__131 = new TH1D("VbbHcc_tags_H_dR_Bj1_all__131","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(1,19328);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(2,60374);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(3,59863);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(4,48687);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(5,39637);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(6,33164);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(7,27485);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(8,23555);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(9,20796);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(10,18873);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(11,17300);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(12,15875);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(13,14291);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(14,12900);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(15,11329);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(16,9825);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(17,7907);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(18,6708);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(19,5607);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(20,4564);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(21,3881);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(22,3182);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(23,2454);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(24,1977);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(25,1488);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(26,1123);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(27,846);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(28,510);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(29,375);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(30,246);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(31,423);
   VbbHcc_tags_H_dR_Bj1_all__131->SetEntries(474602);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all__131->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all__131->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1_all__131->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1_all__131->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fx1095[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fy1095[30] = {
   22427.53,
   82235.14,
   73231.18,
   64131.25,
   51244.67,
   56342.62,
   40412.48,
   31698.66,
   25045,
   33325.31,
   40567.12,
   22392.71,
   23796.65,
   18968.56,
   13394.61,
   17576.36,
   10030.82,
   7908.364,
   5705.076,
   5739.862,
   2654.407,
   3590.856,
   3047.554,
   1869.087,
   2551.521,
   979.2893,
   1628.662,
   711.2118,
   260.0296,
   74.64627};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fex1095[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fey1095[30] = {
   1461.084,
   3915.155,
   3453.238,
   3409.965,
   3050.175,
   15031.11,
   3018.218,
   2553.405,
   2295.235,
   3721.402,
   15016.6,
   2559.471,
   2681.572,
   2168.823,
   1277.848,
   2796.832,
   1250.477,
   1064.806,
   790.3127,
   1533.88,
   419.9315,
   725.8499,
   717.6663,
   544.3707,
   668.9385,
   286.6318,
   543.7862,
   377.5839,
   60.43735,
   32.7651};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fx1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fy1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fex1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fey1095);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetMinimum(37.69305);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetMaximum(94761.14);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1_all","MC unc. (stat.)","fl");

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
   H_dR_Bj1_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__132 = new TH1D("data_mc_ratio__132","",30,0,6);
   data_mc_ratio__132->SetBinContent(1,0.8617981);
   data_mc_ratio__132->SetBinContent(2,0.734163);
   data_mc_ratio__132->SetBinContent(3,0.8174524);
   data_mc_ratio__132->SetBinContent(4,0.7591774);
   data_mc_ratio__132->SetBinContent(5,0.7734854);
   data_mc_ratio__132->SetBinContent(6,0.588613);
   data_mc_ratio__132->SetBinContent(7,0.6801117);
   data_mc_ratio__132->SetBinContent(8,0.7430914);
   data_mc_ratio__132->SetBinContent(9,0.8303454);
   data_mc_ratio__132->SetBinContent(10,0.5663264);
   data_mc_ratio__132->SetBinContent(11,0.4264537);
   data_mc_ratio__132->SetBinContent(12,0.7089361);
   data_mc_ratio__132->SetBinContent(13,0.6005467);
   data_mc_ratio__132->SetBinContent(14,0.6800726);
   data_mc_ratio__132->SetBinContent(15,0.8457881);
   data_mc_ratio__132->SetBinContent(16,0.5589895);
   data_mc_ratio__132->SetBinContent(17,0.7882709);
   data_mc_ratio__132->SetBinContent(18,0.8482158);
   data_mc_ratio__132->SetBinContent(19,0.9828091);
   data_mc_ratio__132->SetBinContent(20,0.795141);
   data_mc_ratio__132->SetBinContent(21,1.462097);
   data_mc_ratio__132->SetBinContent(22,0.8861397);
   data_mc_ratio__132->SetBinContent(23,0.8052359);
   data_mc_ratio__132->SetBinContent(24,1.057736);
   data_mc_ratio__132->SetBinContent(25,0.5831815);
   data_mc_ratio__132->SetBinContent(26,1.14675);
   data_mc_ratio__132->SetBinContent(27,0.5194448);
   data_mc_ratio__132->SetBinContent(28,0.717086);
   data_mc_ratio__132->SetBinContent(29,1.442144);
   data_mc_ratio__132->SetBinContent(30,3.295543);
   data_mc_ratio__132->SetBinContent(31,0.4465812);
   data_mc_ratio__132->SetBinError(1,0.006198863);
   data_mc_ratio__132->SetBinError(2,0.00298791);
   data_mc_ratio__132->SetBinError(3,0.003341052);
   data_mc_ratio__132->SetBinError(4,0.003440621);
   data_mc_ratio__132->SetBinError(5,0.003885096);
   data_mc_ratio__132->SetBinError(6,0.003232187);
   data_mc_ratio__132->SetBinError(7,0.004102347);
   data_mc_ratio__132->SetBinError(8,0.004841731);
   data_mc_ratio__132->SetBinError(9,0.005757963);
   data_mc_ratio__132->SetBinError(10,0.004122364);
   data_mc_ratio__132->SetBinError(11,0.003242268);
   data_mc_ratio__132->SetBinError(12,0.005626654);
   data_mc_ratio__132->SetBinError(13,0.005023605);
   data_mc_ratio__132->SetBinError(14,0.005987705);
   data_mc_ratio__132->SetBinError(15,0.007946315);
   data_mc_ratio__132->SetBinError(16,0.005639459);
   data_mc_ratio__132->SetBinError(17,0.008864814);
   data_mc_ratio__132->SetBinError(18,0.01035642);
   data_mc_ratio__132->SetBinError(19,0.01312514);
   data_mc_ratio__132->SetBinError(20,0.01176986);
   data_mc_ratio__132->SetBinError(21,0.02346953);
   data_mc_ratio__132->SetBinError(22,0.01570913);
   data_mc_ratio__132->SetBinError(23,0.01625496);
   data_mc_ratio__132->SetBinError(24,0.02378888);
   data_mc_ratio__132->SetBinError(25,0.01511827);
   data_mc_ratio__132->SetBinError(26,0.03421991);
   data_mc_ratio__132->SetBinError(27,0.01785888);
   data_mc_ratio__132->SetBinError(28,0.0317531);
   data_mc_ratio__132->SetBinError(29,0.07447198);
   data_mc_ratio__132->SetBinError(30,0.2101162);
   data_mc_ratio__132->SetBinError(31,0.2496378);
   data_mc_ratio__132->SetMinimum(0.4);
   data_mc_ratio__132->SetMaximum(1.6);
   data_mc_ratio__132->SetEntries(235.7143);
   data_mc_ratio__132->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__132->SetLineColor(ci);
   data_mc_ratio__132->SetLineWidth(2);
   data_mc_ratio__132->SetMarkerStyle(20);
   data_mc_ratio__132->SetMarkerSize(1.2);
   data_mc_ratio__132->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__132->GetXaxis()->SetRange(1,30);
   data_mc_ratio__132->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__132->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__132->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__132->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__132->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__132->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__132->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__132->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__132->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__132->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__132->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__132->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__132->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__132->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1096[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1096[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1096[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1096[30] = {
   0.0651469,
   0.04760927,
   0.0471553,
   0.05317166,
   0.05952181,
   0.2667804,
   0.0746853,
   0.08055245,
   0.09164444,
   0.1116689,
   0.3701667,
   0.1142993,
   0.1126869,
   0.1143378,
   0.09540021,
   0.1591246,
   0.1246635,
   0.134643,
   0.138528,
   0.2672329,
   0.1582016,
   0.2021384,
   0.2354893,
   0.2912496,
   0.2621724,
   0.2926936,
   0.3338853,
   0.5309022,
   0.2324249,
   0.4389382};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1096,Graph_from_mc_statistical_error_fy1096,Graph_from_mc_statistical_error_fex1096,Graph_from_mc_statistical_error_fey1096);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1096 = new TH1F("Graph_Graph_from_mc_statistical_error1096","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1096->SetMinimum(0.3629174);
   Graph_Graph_from_mc_statistical_error1096->SetMaximum(1.637083);
   Graph_Graph_from_mc_statistical_error1096->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1096->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1096);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->SetSelected(H_dR_Bj1_tags_all);
}
