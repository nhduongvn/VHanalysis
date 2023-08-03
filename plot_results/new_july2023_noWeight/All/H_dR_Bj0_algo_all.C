void H_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Thu Aug  3 10:21:24 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(0,0,1,1);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-4085.059,6.314516,4081273);
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
   st->SetMaximum(3497845);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",30,0,6);
   st_stack_140->SetMinimum(0.3);
   st_stack_140->SetMaximum(3672738);
   st_stack_140->SetDirectory(0);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->GetXaxis()->SetRange(1,30);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetLabelSize(0.035);
   st_stack_140->GetXaxis()->SetTitleSize(0.035);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Events/0.2");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetLabelSize(0.05);
   st_stack_140->GetYaxis()->SetTitleSize(0.057);
   st_stack_140->GetYaxis()->SetTitleOffset(1.2);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetLabelSize(0.035);
   st_stack_140->GetZaxis()->SetTitleSize(0.035);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,494338.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,1350042);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,1188534);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,868223.6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,620820.7);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,437757.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,343926.9);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,250457.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,236999.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,188869.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,173131.9);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,137265.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,121147.9);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,92895.55);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,74858.33);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,53225.75);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,31382.71);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,47004.84);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(19,16879.35);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,11282.21);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,6864.009);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(22,4001.005);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(23,4377.918);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(24,1076.734);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(25,668.0695);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(26,1401.406);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(27,747.5771);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(28,357.6219);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(29,44.68149);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(30,335.5495);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(31,2371.449);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,16180.12);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,21595.43);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,17836.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,25761.98);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,25299.63);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,23137.33);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,22302.57);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,8570.521);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,16776.81);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,7333.234);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,21131.11);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,6702.34);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,6603.134);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,5373.906);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,5112.175);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,4250.103);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,2540.586);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,20317.79);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(19,2650.613);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,2017.357);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,1765.05);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(22,1589.927);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(23,1635.108);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(24,470.5613);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(25,384.3073);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(26,601.7023);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(27,385.3562);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(28,271.8368);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(29,25.87977);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(30,270.9392);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(31,1514.869);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(367140);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,3126.29);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,10798.18);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,9614.262);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,6465.701);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,4339.785);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,3076.294);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,2390.533);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,1910.021);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,1572.596);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,1279.521);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,1018.132);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,841.4333);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,691.2378);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,556.8971);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,457.9585);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,363.4111);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,270.8019);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,192.4341);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,131.7844);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,81.77183);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,50.6926);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(22,30.79122);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,18.80651);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(24,12.34875);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(25,8.964031);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(26,5.878303);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(27,5.298207);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(28,2.928934);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(29,1.402595);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(30,1.568134);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(31,2.68213);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,22.27577);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,39.52742);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,37.26598);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,30.37788);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,24.7799);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,20.74721);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,18.34788);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,16.3702);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,14.83076);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,13.29233);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,11.77356);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,10.84201);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,9.787733);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,8.731984);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,7.909775);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,7.107234);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,6.062168);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,5.100675);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,4.139661);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,3.223447);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,2.501697);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(22,1.813201);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,1.302413);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(24,1.062329);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(25,1.011851);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(26,0.6760168);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(27,0.626647);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(28,0.4473117);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(29,0.35251);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(30,0.3621923);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(31,0.4299573);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(669400);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(1,54616.18);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(2,201431.2);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(3,172635.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(4,106344.2);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(5,66508.79);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(6,45577.22);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(7,34069.75);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(8,26918.88);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(9,21549.01);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(10,17173.95);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(11,13787.92);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(12,11529.69);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(13,9926.835);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(14,8680.026);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(15,7374.14);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(16,6052.265);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(17,4721.093);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(18,3457.319);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(19,2387.693);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(20,1455.746);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(21,760.4499);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(22,375.2);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(23,214.4686);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(24,130.2055);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(25,82.63613);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(26,57.36417);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(27,39.50502);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(28,23.41843);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(29,17.72099);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(30,14.6821);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(31,26.49005);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(1,58.64206);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(2,112.1724);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(3,103.6441);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(4,81.22539);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(5,64.13656);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(6,53.02269);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(7,45.78481);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(8,40.68771);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(9,36.39752);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(10,32.4727);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(11,29.09885);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(12,26.62779);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(13,24.75172);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(14,23.1923);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(15,21.40377);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(16,19.405);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(17,17.15213);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(18,14.67423);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(19,12.20733);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(20,9.512487);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(21,6.838516);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(22,4.775145);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(23,3.595408);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(24,2.801546);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(25,2.222603);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(26,1.851307);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(27,1.541669);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(28,1.181163);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(29,1.025708);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(30,0.9410121);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(31,1.250989);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetEntries(1.366985e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(1,2946.63);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(2,8117.557);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(3,6289.759);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(4,4334.559);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(5,2846.436);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(6,2070.58);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(7,1606.028);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(8,1360.832);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(9,1136.28);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(10,944.806);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(11,743.0655);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(12,641.1664);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(13,528.6755);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(14,423.42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(15,340.0605);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(16,265.438);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(17,160.841);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(18,120.5834);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(19,77.20421);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(20,52.41042);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(21,23.83623);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(22,18.97291);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(23,13.36924);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(24,6.65386);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(25,5.839781);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(26,5.16437);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(27,1.628434);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(28,1.764134);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(29,0.3534218);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(30,1.450593);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(31,0.9252955);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(1,25.21878);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(2,65.97367);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(3,66.95173);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(4,58.59936);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(5,47.17105);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(6,41.12343);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(7,34.93407);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(8,32.33162);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(9,29.63593);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(10,27.85622);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(11,22.32251);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(12,23.53282);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(13,22.1566);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(14,19.28203);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(15,17.22299);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(16,16.62122);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(17,11.43492);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(18,11.4495);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(19,8.943008);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(20,7.363384);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(21,5.138449);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(22,5.584307);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(23,4.823042);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(24,2.861788);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(25,2.866228);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(26,2.806042);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(27,0.7112946);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(28,0.8574111);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(29,0.3534218);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(30,0.7599707);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(31,0.4172309);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetEntries(203141);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(1,1553.213);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(2,3322.955);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(3,2547.769);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(4,1744.199);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(5,1038.142);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(6,869.4824);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(7,616.0888);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(8,542.6206);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(9,425.9442);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(10,315.6965);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(11,288.9954);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(12,230.0742);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(13,191.6499);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(14,133.3641);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(15,125.8235);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(16,78.2149);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(17,54.72264);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(18,40.52837);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(19,24.88097);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(20,26.3425);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(21,10.30317);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(22,5.407919);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(23,5.506065);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(24,0.3979023);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(25,0.2647149);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(26,6.130927);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(27,0.6072252);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(28,1.158045);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(29,0.1259987);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(31,0.1159278);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(1,28.22813);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(2,68.67074);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(3,72.84704);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(4,60.20762);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(5,43.41606);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(6,43.52529);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(7,31.97425);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(8,32.91807);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(9,26.61225);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(10,24.16729);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(11,20.24152);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(12,18.67125);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(13,21.41068);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(14,17.81164);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(15,15.39597);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(16,12.58407);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(17,6.612626);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(18,9.498187);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(19,7.359157);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(20,9.10753);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(21,3.240436);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(22,1.961564);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(23,2.655851);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(24,0.2758712);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(25,0.1538019);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(26,6.067925);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(27,0.3412766);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(28,1.036051);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(29,0.09273907);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(31,0.08401178);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetEntries(104522);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(1,19.69432);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(2,30.14633);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(3,22.76764);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(4,19.01241);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(5,8.839574);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(6,6.420927);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(7,4.774363);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(8,7.831322);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(9,5.446209);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(10,3.008024);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(11,3.015127);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(12,1.575932);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(13,1.168089);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(14,1.304826);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(15,0.2687386);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(16,0.9017179);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(17,0.4031079);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(18,0.8551506);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(19,0.2687386);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(20,0.1343693);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(1,2.285889);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(2,2.678549);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(3,2.243734);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(4,2.188472);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(5,1.316311);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(6,1.186458);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(7,1.249076);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(8,1.530606);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(9,1.284704);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(10,0.795228);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(11,0.944985);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(12,0.7063715);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(13,0.5206304);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(14,0.6131727);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(15,0.1900269);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(16,0.5672878);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(17,0.2327345);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(18,0.5084367);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(19,0.1900269);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(20,0.1343693);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(21,0.1343693);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(1,29.02124);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(2,40.60514);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(3,28.37317);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(4,23.76668);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(5,10.49331);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(6,8.966493);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(7,7.17179);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(8,8.885056);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(9,6.517438);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(10,5.078276);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(11,4.725076);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(12,3.73961);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(13,2.266491);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(14,2.076052);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(15,0.8724691);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(16,1.966994);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(17,0.7634105);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(18,0.6701599);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(19,0.7634105);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(20,0.3271759);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(22,0.1090586);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(23,0.2181173);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(1,2.449694);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(2,2.803483);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(3,2.29895);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(4,2.24785);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(5,1.318931);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(6,1.254219);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(7,1.333206);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(8,1.542547);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(9,1.306168);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(10,0.9021939);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(11,1.022483);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(12,0.8473037);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(13,0.6142006);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(14,0.6681959);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(15,0.3084644);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(16,0.6592359);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(17,0.288542);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(18,0.4776297);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(19,0.288542);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(20,0.1888951);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(22,0.1090586);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(23,0.1542322);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetEntries(1319);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(1,63.58554);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(2,120.5852);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(3,66.36741);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(4,44.18163);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(5,25.98896);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(6,19.79629);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(7,13.33014);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(8,13.51117);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(9,10.06598);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(10,11.15358);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(11,9.119336);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(12,4.55648);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(13,4.283217);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(14,5.881137);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(15,4.164802);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(16,3.50737);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(17,1.505469);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(18,1.758694);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(19,1.515487);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(21,0.7758471);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(1,4.061333);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(2,5.602406);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(3,4.13125);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(4,3.385092);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(5,2.577717);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(6,2.26012);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(7,1.851825);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(8,1.877197);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(9,1.614789);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(10,1.70438);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(11,1.54431);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(12,1.075303);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(13,1.040292);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(14,1.22833);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(15,1.043456);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(16,0.9385424);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(17,0.6154628);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(18,0.6655206);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(19,0.6194901);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(21,0.4487152);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(1,37.4691);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(2,86.23951);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(3,52.94752);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(4,30.2328);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(5,17.18079);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(6,12.03402);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(7,9.759161);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(8,8.051985);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(9,7.017259);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(10,5.653626);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(11,4.573977);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(12,3.839069);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(13,3.209363);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(14,2.774395);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(15,2.045712);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(16,1.823604);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(17,1.196421);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(18,0.9387281);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(19,0.5576648);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(20,0.3588918);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(21,0.1779552);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(22,0.08629108);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(23,0.03071704);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(24,0.02338516);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(25,0.005978135);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(26,0.01326497);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(27,0.004604185);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(28,0.004363018);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(31,0.01101182);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(1,0.2617605);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(2,0.3955196);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(3,0.3056867);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(4,0.2298129);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(5,0.1729596);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(6,0.1450976);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(7,0.1313221);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(8,0.1191724);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(9,0.1121576);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(10,0.1002927);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(11,0.09035086);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(12,0.0828406);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(13,0.0752416);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(14,0.07013135);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(15,0.05951322);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(16,0.05621727);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(17,0.04551406);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(18,0.04007974);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(19,0.03096584);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(20,0.02482185);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(21,0.01761753);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(22,0.01183894);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(23,0.007217943);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(24,0.006641483);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(25,0.002998781);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(26,0.005153868);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(27,0.00266551);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(28,0.002526674);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(31,0.00424181);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetEntries(169575);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(1,11.53228);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(2,39.6464);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(3,30.81616);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(4,19.23735);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(5,11.31601);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(6,7.698223);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(7,6.165149);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(8,5.033138);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(9,4.474661);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(10,3.526071);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(11,2.719838);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(12,2.403642);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(13,2.045012);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(14,1.815051);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(15,1.53855);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(16,1.231935);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(17,0.8979435);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(18,0.5968039);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(19,0.4517094);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(20,0.3161966);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(21,0.1478322);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(22,0.0588591);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(23,0.03695804);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(24,0.02874514);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(25,0.01779461);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(26,0.01095053);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(27,0.008212898);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(28,0.006844082);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(29,0.002737633);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(31,0.008212898);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(1,0.07431411);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(2,0.1377893);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(3,0.1214795);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(4,0.09598122);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(5,0.07361397);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(6,0.06071681);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(7,0.05433573);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(8,0.04909453);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(9,0.0462907);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(10,0.04109218);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(11,0.03608986);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(12,0.03392724);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(13,0.03129404);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(14,0.02948208);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(15,0.02714373);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(16,0.02428888);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(17,0.02073663);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(18,0.01690556);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(19,0.01470765);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(20,0.0123053);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(21,0.008413916);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(22,0.005309095);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(23,0.004206958);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(24,0.003710188);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(25,0.002919161);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(26,0.002289978);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(27,0.001983179);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(28,0.001810386);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(29,0.001144989);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(31,0.001983179);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetEntries(337056);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(1,0.2772279);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(2,0.65058);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(3,0.4117844);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(4,0.338648);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(5,0.1725683);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(6,0.08966101);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(7,0.1035723);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(8,0.08799278);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(9,0.05753642);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(10,0.06907071);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(11,0.0420919);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(12,0.04613714);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(13,0.01838204);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(14,0.02435834);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(15,0.02794433);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(16,0.01884129);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(17,0.01503231);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(18,0.009292277);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(19,0.0127228);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(21,0.004315259);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(1,0.02505519);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(2,0.03853309);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(3,0.03037298);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(4,0.02807045);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(5,0.02005744);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(6,0.01386617);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(7,0.01516749);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(8,0.01438754);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(9,0.01176087);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(10,0.01251239);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(11,0.0100641);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(12,0.01030028);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(13,0.006332919);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(14,0.007785557);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(15,0.007945024);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(16,0.006512068);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(17,0.006162635);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(18,0.004224898);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(19,0.00529263);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(21,0.003158712);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(1,0.08544201);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(2,0.2833314);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(3,0.2094304);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(4,0.1368971);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(5,0.07286803);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(6,0.05380937);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(7,0.05302394);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(8,0.04138214);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(9,0.0306866);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(10,0.02095696);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(11,0.02183175);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(12,0.02355122);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(13,0.01239245);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(14,0.01099648);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(15,0.009430325);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(16,0.005153064);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(17,0.007353932);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(18,0.003988879);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(19,0.002559143);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(20,0.002351201);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(1,0.004991534);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(2,0.009112872);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(3,0.007866568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(4,0.006403608);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(5,0.004587442);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(6,0.003994785);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(7,0.004020079);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(8,0.003525607);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(9,0.003002691);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(10,0.002477364);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(11,0.002572075);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(12,0.00260007);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(13,0.00189706);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(14,0.001847773);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(15,0.00164613);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(16,0.001214523);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(17,0.001535587);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(18,0.001060537);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(19,0.0008790621);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(20,0.0008994073);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all__279 = new TH1D("VbbHcc_algo_H_dR_Bj0_all__279","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(1,279497);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(2,752658);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(3,592081);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(4,400060);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(5,261000);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(6,186988);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(7,147955);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(8,122789);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(9,103107);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(10,86206);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(11,71395);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(12,57919);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(13,47723);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(14,38572);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(15,29997);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(16,22360);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(17,16223);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(18,11152);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(19,7549);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(20,4910);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(21,2922);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(22,1790);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(23,1137);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(24,733);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(25,519);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(26,345);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(27,248);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(28,142);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(29,126);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(30,71);
   VbbHcc_algo_H_dR_Bj0_all__279->SetBinContent(31,169);
   VbbHcc_algo_H_dR_Bj0_all__279->SetEntries(3248372);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all__279->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all__279->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0_all__279->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0_all__279->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0_all__279->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all__279->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all__279->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__279->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__279->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fx1279[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fy1279[30] = {
   556742.3,
   1574030,
   1379823,
   987249.2,
   695628,
   489406.4,
   382650.6,
   281232.9,
   261716.5,
   208611.8,
   188994.2,
   150523.7,
   132499.3,
   102703.1,
   83165.24,
   59994.53,
   36594.95,
   50820.53,
   19504.48,
   12899.62,
   7710.532,
   4431.633,
   4630.356,
   1226.393,
   765.7982,
   1475.968,
   794.6288,
   386.9026,
   64.28723,
   353.2503};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fex1279[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fey1279[30] = {
   16180.29,
   21595.97,
   17836.72,
   25762.26,
   25299.81,
   23137.48,
   22302.68,
   8570.758,
   16776.9,
   7333.411,
   21131.16,
   6702.469,
   6603.26,
   5374.027,
   5112.278,
   4250.204,
   2540.685,
   20317.8,
   2650.67,
   2017.416,
   1765.075,
   1589.946,
   1635.122,
   470.5797,
   384.3258,
   601.7427,
   385.3606,
   271.843,
   25.90506,
   270.9421};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fx1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fy1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fex1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fey1279);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetMinimum(34.54395);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetMaximum(1755185);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__280 = new TH1D("data_mc_ratio__280","",30,0,6);
   data_mc_ratio__280->SetBinContent(1,0.5020222);
   data_mc_ratio__280->SetBinContent(2,0.4781725);
   data_mc_ratio__280->SetBinContent(3,0.4290993);
   data_mc_ratio__280->SetBinContent(4,0.405227);
   data_mc_ratio__280->SetBinContent(5,0.3752006);
   data_mc_ratio__280->SetBinContent(6,0.382071);
   data_mc_ratio__280->SetBinContent(7,0.3866582);
   data_mc_ratio__280->SetBinContent(8,0.4366097);
   data_mc_ratio__280->SetBinContent(9,0.3939644);
   data_mc_ratio__280->SetBinContent(10,0.4132365);
   data_mc_ratio__280->SetBinContent(11,0.3777629);
   data_mc_ratio__280->SetBinContent(12,0.3847833);
   data_mc_ratio__280->SetBinContent(13,0.3601754);
   data_mc_ratio__280->SetBinContent(14,0.3755678);
   data_mc_ratio__280->SetBinContent(15,0.3606915);
   data_mc_ratio__280->SetBinContent(16,0.3727006);
   data_mc_ratio__280->SetBinContent(17,0.4433125);
   data_mc_ratio__280->SetBinContent(18,0.2194389);
   data_mc_ratio__280->SetBinContent(19,0.3870392);
   data_mc_ratio__280->SetBinContent(20,0.3806313);
   data_mc_ratio__280->SetBinContent(21,0.3789622);
   data_mc_ratio__280->SetBinContent(22,0.4039144);
   data_mc_ratio__280->SetBinContent(23,0.2455534);
   data_mc_ratio__280->SetBinContent(24,0.5976879);
   data_mc_ratio__280->SetBinContent(25,0.6777242);
   data_mc_ratio__280->SetBinContent(26,0.2337449);
   data_mc_ratio__280->SetBinContent(27,0.3120954);
   data_mc_ratio__280->SetBinContent(28,0.3670174);
   data_mc_ratio__280->SetBinContent(29,1.959954);
   data_mc_ratio__280->SetBinContent(30,0.2009906);
   data_mc_ratio__280->SetBinContent(31,0.07036735);
   data_mc_ratio__280->SetBinError(1,0.0009495861);
   data_mc_ratio__280->SetBinError(2,0.0005511702);
   data_mc_ratio__280->SetBinError(3,0.0005576571);
   data_mc_ratio__280->SetBinError(4,0.000640672);
   data_mc_ratio__280->SetBinError(5,0.0007344178);
   data_mc_ratio__280->SetBinError(6,0.0008835624);
   data_mc_ratio__280->SetBinError(7,0.001005223);
   data_mc_ratio__280->SetBinError(8,0.001245987);
   data_mc_ratio__280->SetBinError(9,0.001226911);
   data_mc_ratio__280->SetBinError(10,0.00140744);
   data_mc_ratio__280->SetBinError(11,0.001413791);
   data_mc_ratio__280->SetBinError(12,0.001598843);
   data_mc_ratio__280->SetBinError(13,0.001648733);
   data_mc_ratio__280->SetBinError(14,0.001912284);
   data_mc_ratio__280->SetBinError(15,0.002082558);
   data_mc_ratio__280->SetBinError(16,0.002492437);
   data_mc_ratio__280->SetBinError(17,0.003480522);
   data_mc_ratio__280->SetBinError(18,0.00207796);
   data_mc_ratio__280->SetBinError(19,0.004454616);
   data_mc_ratio__280->SetBinError(20,0.005432049);
   data_mc_ratio__280->SetBinError(21,0.00701061);
   data_mc_ratio__280->SetBinError(22,0.009546909);
   data_mc_ratio__280->SetBinError(23,0.007282254);
   data_mc_ratio__280->SetBinError(24,0.02207611);
   data_mc_ratio__280->SetBinError(25,0.02974879);
   data_mc_ratio__280->SetBinError(26,0.0125844);
   data_mc_ratio__280->SetBinError(27,0.01981808);
   data_mc_ratio__280->SetBinError(28,0.03079942);
   data_mc_ratio__280->SetBinError(29,0.1746066);
   data_mc_ratio__280->SetBinError(30,0.0238532);
   data_mc_ratio__280->SetBinError(31,0.04471331);
   data_mc_ratio__280->SetMinimum(0.4);
   data_mc_ratio__280->SetMaximum(1.6);
   data_mc_ratio__280->SetEntries(174.3187);
   data_mc_ratio__280->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__280->SetLineColor(ci);
   data_mc_ratio__280->SetLineWidth(2);
   data_mc_ratio__280->SetMarkerStyle(20);
   data_mc_ratio__280->SetMarkerSize(1.2);
   data_mc_ratio__280->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__280->GetXaxis()->SetRange(1,30);
   data_mc_ratio__280->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__280->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__280->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__280->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__280->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__280->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__280->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__280->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__280->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__280->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__280->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__280->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__280->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__280->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__280->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__280->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__280->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1280[30] = {
   0.02906243,
   0.01372017,
   0.01292682,
   0.02609499,
   0.03636974,
   0.04727662,
   0.0582847,
   0.03047566,
   0.06410333,
   0.03515339,
   0.1118085,
   0.04452767,
   0.04983618,
   0.05232583,
   0.06147133,
   0.07084319,
   0.0694272,
   0.3997951,
   0.1359005,
   0.1563934,
   0.2289175,
   0.358772,
   0.353131,
   0.3837105,
   0.5018629,
   0.4076936,
   0.4849568,
   0.7026135,
   0.4029581,
   0.7669975};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1280,Graph_from_mc_statistical_error_fy1280,Graph_from_mc_statistical_error_fex1280,Graph_from_mc_statistical_error_fey1280);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1280 = new TH1F("Graph_Graph_from_mc_statistical_error1280","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1280->SetMinimum(0.07960296);
   Graph_Graph_from_mc_statistical_error1280->SetMaximum(1.920397);
   Graph_Graph_from_mc_statistical_error1280->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1280->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1280->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1280);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
