void H_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Thu Aug 10 12:32:10 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(0,0,1,1);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.947901,6.314516,15.4449);
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
   st->SetMinimum(0.01);
   st->SetMaximum(1.008061e+13);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",30,0,6);
   st_stack_137->SetMinimum(0.001176229);
   st_stack_137->SetMaximum(4.032949e+13);
   st_stack_137->SetDirectory(0);
   st_stack_137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_137->SetLineColor(ci);
   st_stack_137->GetXaxis()->SetRange(1,30);
   st_stack_137->GetXaxis()->SetLabelFont(42);
   st_stack_137->GetXaxis()->SetLabelSize(0.035);
   st_stack_137->GetXaxis()->SetTitleSize(0.035);
   st_stack_137->GetXaxis()->SetTitleFont(42);
   st_stack_137->GetYaxis()->SetTitle("Events/0.2");
   st_stack_137->GetYaxis()->SetLabelFont(42);
   st_stack_137->GetYaxis()->SetLabelSize(0.05);
   st_stack_137->GetYaxis()->SetTitleSize(0.057);
   st_stack_137->GetYaxis()->SetTitleOffset(1.2);
   st_stack_137->GetYaxis()->SetTitleFont(42);
   st_stack_137->GetZaxis()->SetLabelFont(42);
   st_stack_137->GetZaxis()->SetLabelSize(0.035);
   st_stack_137->GetZaxis()->SetTitleSize(0.035);
   st_stack_137->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_137);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,172504.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,607166.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,589801);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,464568);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,323129.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,243730.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,174779.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,125939.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,117530.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,97584.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,106907.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,72201.69);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,67115.47);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,47757.85);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,42853.08);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,29355.66);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,17178.89);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,32113);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,9669.724);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,7552.554);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,4082.616);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,2956.914);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,3990.371);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,348.5364);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(25,543.4709);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,1123.122);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,599.6373);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(28,296.8788);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(29,28.08319);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,296.8788);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(31,1984.228);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,4333.062);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,11719.93);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,14016.78);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,23996.17);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,11969.86);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,22136.77);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,8170.803);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,6787.466);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,6466.855);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,5869.745);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,20867.77);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,5183.399);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,5724.293);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,4291.02);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,4393.018);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,3614.021);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,1935.83);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,20170.23);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,2344.624);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1827.155);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1612.158);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,1520.04);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,1632.55);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,271.6425);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(25,380.1799);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,538.5191);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,381.565);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(28,269.7752);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(29,22.96885);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,269.7752);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(31,1468.783);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(135373);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,1454.475);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,5177.704);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,4851.519);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,3332.425);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,2246.863);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,1593.816);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,1209.082);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,966.2922);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,774.8578);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,633.475);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,512.9724);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,417.7455);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,343.1582);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,278.8295);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,236.7078);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,188.7689);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,147.024);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,102.5366);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,71.5905);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,45.16646);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,27.5448);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,17.93109);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,10.7692);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,6.768138);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,4.073772);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,2.992014);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,2.601891);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,1.660801);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.8753714);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.9716148);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.665318);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,14.77383);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,26.50377);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,25.66085);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,21.07858);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,17.20844);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,14.42327);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,12.57099);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,11.19885);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,10.07058);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,9.032784);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,8.110706);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,7.382597);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,6.638086);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,5.913437);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,5.51664);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,4.956629);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,4.370924);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,3.604209);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,2.917355);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,2.372766);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.777799);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,1.373413);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.9839283);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.7796329);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.554991);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.4437083);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.4260525);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.3680568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.3146233);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.3184708);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.2782835);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(358903);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,24658.04);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,93023.21);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,84590.3);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,53466.36);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,33850.07);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,23165.72);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,17056.93);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,13181.16);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,10374.21);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,8092.242);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,6478.4);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,5429.214);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,4737.092);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,4177.777);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,3623.149);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,3012.47);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,2409.563);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,1775.929);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,1238.322);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,739.961);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,389.1335);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,187.1684);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,110.0789);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,65.25046);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,39.69385);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,28.05069);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,18.53145);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,11.54568);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,7.519978);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,7.401548);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,12.82798);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,39.50632);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,76.42127);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,72.76681);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,57.78761);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,45.91898);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,37.94543);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,32.52673);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,28.58441);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,25.34166);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,22.35558);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,20.00657);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,18.33869);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,17.16181);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,16.14939);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,15.0599);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,13.7382);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,12.29426);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,10.55592);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,8.825213);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,6.807909);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,4.912218);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,3.386702);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,2.588523);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,1.995452);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,1.5471);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,1.292349);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,1.065094);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.8389966);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.6779847);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.674528);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.8705504);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(6548404);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,1177.643);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,3246.262);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,2706.445);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,1934.766);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,1300.628);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,941.1744);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,729.2775);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,594.6354);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,493.778);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,406.2773);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,324.3142);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,285.9717);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,229.2013);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,224.5939);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,166.3023);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,135.7264);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,71.66001);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,61.98322);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,41.88616);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,25.19793);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,11.5621);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,13.08541);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,8.415072);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,3.89985);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(25,3.80982);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(26,3.743245);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.8385511);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(28,0.07830265);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(30,0.279517);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(31,0.3797856);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,15.91637);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,43.18918);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,48.09533);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,42.8499);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,36.20026);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,30.418);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,25.2301);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,23.88468);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,21.65247);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,19.65558);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,16.46819);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,16.84175);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,15.45074);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,16.88351);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,13.92338);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,13.44823);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,8.258);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,9.279505);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,7.871849);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,6.20457);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,3.969404);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,4.769752);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,3.889141);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,2.730176);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(25,2.728742);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(26,2.72793);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.4841377);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(28,0.07830265);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(30,0.279517);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(31,0.1701689);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(93897);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,852.268);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,1770.965);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,1351.567);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,990.0276);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,577.4361);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,477.9868);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,333.9477);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,319.5427);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,237.5522);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,165.7493);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,155.0786);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,117.2442);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,93.64281);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,77.0407);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,64.18836);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,48.02106);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,29.64085);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,27.29292);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,14.97613);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,19.93982);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,5.570613);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,3.687097);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(23,2.407395);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(26,6.130927);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(27,0.04479634);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(28,1.031886);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(29,0.04479634);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(31,0.07097071);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,18.72536);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,48.84321);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,49.4796);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,48.15827);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,33.32578);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,33.19776);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,24.175);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,26.14746);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,20.09563);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,17.89046);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,16.06937);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,13.00864);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,14.83522);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,13.24758);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,11.83);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,9.885289);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,4.437493);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,9.108268);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,6.491273);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,8.842261);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,2.124614);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,1.833713);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(23,1.559336);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(26,6.067925);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(27,0.04479634);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(28,1.031886);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(29,0.04479634);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(31,0.07097071);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(71986);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,9.54022);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,18.00549);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,14.24315);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,10.0777);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,6.852834);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,4.434187);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,1.746801);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,3.090494);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,2.418647);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(10,1.746801);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,1.343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(12,0.6718465);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(13,0.5374772);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.5374772);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(15,0.2687386);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(16,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(17,0.4031079);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(18,0.4031079);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(19,0.2687386);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(20,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,1.132216);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,1.555437);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,1.383417);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,1.163672);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.9595887);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.7718929);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,0.4844754);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,0.6444125);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,0.5700807);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(10,0.4844754);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.424913);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(12,0.3004589);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(13,0.2687386);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.2687386);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(15,0.1900269);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(16,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(17,0.2327345);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(18,0.2327345);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(19,0.1900269);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(20,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(21,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,18.86714);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,28.4643);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,19.84867);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,14.83197);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,8.506574);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,6.979753);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,4.144228);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,4.144228);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,3.489876);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,3.817052);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,3.053642);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,2.835525);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,1.63588);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(14,1.308704);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(15,0.8724691);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,1.199645);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(17,0.7634105);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.2181173);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(19,0.7634105);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(20,0.3271759);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(22,0.1090586);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(23,0.2181173);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,1.434442);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,1.761896);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,1.471281);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,1.271831);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.9631798);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.8724691);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.6722826);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,0.6722826);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.6169288);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.6451996);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.5770841);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.5560921);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.4223823);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(14,0.3777902);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(15,0.3084644);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.3617066);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(17,0.288542);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.1542322);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(19,0.288542);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(20,0.1888951);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(22,0.1090586);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(23,0.1542322);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(1159);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,21.40223);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,39.88597);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,28.69844);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,16.78129);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,12.64677);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,8.025836);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,5.593764);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,4.377729);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,3.648107);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,4.377729);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,2.675279);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,1.945657);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,2.432072);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,2.432072);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(15,1.70245);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,2.188864);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(17,0.9728286);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(18,0.9728286);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(19,0.7296215);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,2.281485);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,3.114571);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,2.641906);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,2.02023);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,1.753792);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,1.397119);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,1.166381);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,1.031841);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,0.9419372);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,1.031841);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,0.8066269);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.6878937);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.7690885);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.7690885);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(15,0.6434656);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.7296215);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(17,0.4864143);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(18,0.4864143);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(19,0.4212471);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(21,0.2432072);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,11.19632);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,26.54748);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,19.3521);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,11.84758);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,6.948069);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,4.800584);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,3.676692);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,2.949872);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,2.437389);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,2.047187);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,1.595157);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,1.323115);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,1.184346);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,1.00848);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.8257444);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.7419334);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.5289711);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.4204289);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.2418153);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(20,0.1538825);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.07007149);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(22,0.04121852);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(23,0.01511346);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(24,0.005495803);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(25,0.002747902);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(26,0.004121852);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(27,0.001373951);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(28,0.002747902);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(31,0.005495803);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.124029);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.1909841);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.1630608);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.1275852);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.09770519);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.08121432);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.07107457);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.06366301);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.05786927);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.05303521);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.04681524);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.04263677);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.04033897);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.03722367);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.03368282);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.03192773);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.02695886);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.02403432);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.01822752);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(20,0.01454053);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.009811971);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(22,0.007525438);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(23,0.004556879);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(24,0.002747902);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(25,0.00194306);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(26,0.002379753);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(27,0.001373951);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(28,0.00194306);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(31,0.002747902);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,3.016539);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,10.37045);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,8.060694);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,5.031981);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,2.959968);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,2.013652);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,1.61264);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,1.316536);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,1.170453);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,0.922327);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,0.7114378);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,0.6287291);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.534921);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.4747693);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.4024439);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.3222416);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.2348783);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.1561081);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.1181552);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.08270867);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.03866899);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.01539599);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.009667248);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.00751897);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.004654601);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.00286437);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.002148277);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.001790231);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(29,0.0007160924);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(31,0.002148277);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.03286427);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.06093522);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.05372244);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.04244622);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.03255465);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.02685108);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.02402914);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.0217113);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.02047135);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.01817239);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.01596019);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.0150038);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.01383931);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.013038);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.0120039);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.01074139);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.009170457);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.007476224);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.006504232);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.005441831);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.003720925);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.002347866);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.001860463);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.001640774);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.001290954);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.001012708);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.0008770305);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.0008006157);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(29,0.0005063538);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(31,0.0008770305);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.09846027);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.2652957);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1668355);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.1668355);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.07111019);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.02461507);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.0355551);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.04102511);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.03282009);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.02735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.01367504);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(16,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(17,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.01641004);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.0269367);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.02136109);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.02136109);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.01394586);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.00986121);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.01059264);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.009474344);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.008648853);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.006115663);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(16,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(17,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(19,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.02786674);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.09181732);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.08002755);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.056448);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.02608041);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.02000689);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.02429408);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.01643423);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.01214704);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.00857438);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.006788051);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.004644456);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.005716254);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.00428719);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.001786329);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.005001722);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(20,0.002143595);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.003155287);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.005727407);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.005347066);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.004490762);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.003052481);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.002673533);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.00294609);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.002423095);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.0020832);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.001597741);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.001750238);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.001557286);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.00128814);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.001237605);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.0007988707);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.001336766);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(20,0.000875119);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0__375 = new TH1D("VbbHcc_algo_H_dR_Bj0__375","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(1,96729);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(2,196510);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(3,149075);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(4,101570);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(5,67064);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(6,47327);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(7,37105);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(8,30331);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(9,25149);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(10,20891);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(11,17254);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(12,14056);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(13,11453);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(14,9419);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(15,7351);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(16,5519);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(17,4124);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(18,2827);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(19,1936);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(20,1250);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(21,766);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(22,453);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(23,302);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(24,214);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(25,135);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(26,85);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(27,79);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(28,28);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(29,39);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(30,17);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(31,46);
   VbbHcc_algo_H_dR_Bj0__375->SetEntries(849133);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0__375->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0__375->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0__375->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0__375->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__375->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fx1273[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fy1273[30] = {
   200711.2,
   710508.3,
   683391.3,
   524350.4,
   361142.5,
   269935.8,
   194125.6,
   141017.3,
   129424.5,
   106894.9,
   114387.8,
   78459.3,
   72524.91,
   52521.87,
   46947.52,
   32745.25,
   19839.69,
   34082.91,
   11038.62,
   8383.519,
   4516.916,
   3178.952,
   4122.287,
   424.4679,
   591.0561,
   1164.046,
   621.6575,
   311.2,
   36.52405,
   305.5315};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fex1273[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fey1273[30] = {
   4333.338,
   11720.4,
   14017.16,
   23996.33,
   11970.06,
   22136.86,
   8170.952,
   6787.628,
   6466.98,
   5869.855,
   20867.79,
   5183.481,
   5724.363,
   4291.108,
   4393.085,
   3614.089,
   1935.897,
   20170.23,
   2344.665,
   1827.201,
   1612.172,
   1520.053,
   1632.558,
   271.6647,
   380.1932,
   538.5619,
   381.5671,
   269.7787,
   22.98105,
   269.7764};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1273);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetMinimum(12.1887);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetMaximum(794450.2);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__376 = new TH1D("data_mc_ratio__376","",30,0,6);
   data_mc_ratio__376->SetBinContent(1,0.4819312);
   data_mc_ratio__376->SetBinContent(2,0.2765766);
   data_mc_ratio__376->SetBinContent(3,0.21814);
   data_mc_ratio__376->SetBinContent(4,0.1937064);
   data_mc_ratio__376->SetBinContent(5,0.1856996);
   data_mc_ratio__376->SetBinContent(6,0.1753269);
   data_mc_ratio__376->SetBinContent(7,0.1911391);
   data_mc_ratio__376->SetBinContent(8,0.2150871);
   data_mc_ratio__376->SetBinContent(9,0.1943141);
   data_mc_ratio__376->SetBinContent(10,0.195435);
   data_mc_ratio__376->SetBinContent(11,0.1508377);
   data_mc_ratio__376->SetBinContent(12,0.1791502);
   data_mc_ratio__376->SetBinContent(13,0.1579182);
   data_mc_ratio__376->SetBinContent(14,0.1793348);
   data_mc_ratio__376->SetBinContent(15,0.1565791);
   data_mc_ratio__376->SetBinContent(16,0.1685435);
   data_mc_ratio__376->SetBinContent(17,0.2078661);
   data_mc_ratio__376->SetBinContent(18,0.08294479);
   data_mc_ratio__376->SetBinContent(19,0.1753842);
   data_mc_ratio__376->SetBinContent(20,0.1491021);
   data_mc_ratio__376->SetBinContent(21,0.1695847);
   data_mc_ratio__376->SetBinContent(22,0.1424998);
   data_mc_ratio__376->SetBinContent(23,0.07326031);
   data_mc_ratio__376->SetBinContent(24,0.5041606);
   data_mc_ratio__376->SetBinContent(25,0.2284047);
   data_mc_ratio__376->SetBinContent(26,0.07302118);
   data_mc_ratio__376->SetBinContent(27,0.1270796);
   data_mc_ratio__376->SetBinContent(28,0.08997429);
   data_mc_ratio__376->SetBinContent(29,1.067789);
   data_mc_ratio__376->SetBinContent(30,0.05564075);
   data_mc_ratio__376->SetBinContent(31,0.02300943);
   data_mc_ratio__376->SetBinError(1,0.001549554);
   data_mc_ratio__376->SetBinError(2,0.0006239118);
   data_mc_ratio__376->SetBinError(3,0.0005649799);
   data_mc_ratio__376->SetBinError(4,0.0006078006);
   data_mc_ratio__376->SetBinError(5,0.0007170776);
   data_mc_ratio__376->SetBinError(6,0.0008059238);
   data_mc_ratio__376->SetBinError(7,0.000992278);
   data_mc_ratio__376->SetBinError(8,0.001235011);
   data_mc_ratio__376->SetBinError(9,0.001225304);
   data_mc_ratio__376->SetBinError(10,0.001352143);
   data_mc_ratio__376->SetBinError(11,0.001148326);
   data_mc_ratio__376->SetBinError(12,0.001511077);
   data_mc_ratio__376->SetBinError(13,0.001475613);
   data_mc_ratio__376->SetBinError(14,0.001847831);
   data_mc_ratio__376->SetBinError(15,0.001826252);
   data_mc_ratio__376->SetBinError(16,0.002268725);
   data_mc_ratio__376->SetBinError(17,0.003236863);
   data_mc_ratio__376->SetBinError(18,0.001560006);
   data_mc_ratio__376->SetBinError(19,0.003986004);
   data_mc_ratio__376->SetBinError(20,0.004217243);
   data_mc_ratio__376->SetBinError(21,0.006127345);
   data_mc_ratio__376->SetBinError(22,0.006695225);
   data_mc_ratio__376->SetBinError(23,0.004215657);
   data_mc_ratio__376->SetBinError(24,0.03446371);
   data_mc_ratio__376->SetBinError(25,0.01965795);
   data_mc_ratio__376->SetBinError(26,0.007920259);
   data_mc_ratio__376->SetBinError(27,0.01429758);
   data_mc_ratio__376->SetBinError(28,0.01700354);
   data_mc_ratio__376->SetBinError(29,0.1709832);
   data_mc_ratio__376->SetBinError(30,0.01349486);
   data_mc_ratio__376->SetBinError(31,0.01724193);
   data_mc_ratio__376->SetMinimum(0.4);
   data_mc_ratio__376->SetMaximum(1.6);
   data_mc_ratio__376->SetEntries(65.16934);
   data_mc_ratio__376->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__376->SetLineColor(ci);
   data_mc_ratio__376->SetLineWidth(2);
   data_mc_ratio__376->SetMarkerStyle(20);
   data_mc_ratio__376->SetMarkerSize(1.2);
   data_mc_ratio__376->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__376->GetXaxis()->SetRange(1,30);
   data_mc_ratio__376->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__376->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__376->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__376->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__376->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__376->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__376->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__376->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__376->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__376->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__376->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__376->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__376->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__376->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__376->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__376->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__376->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1274[30] = {
   0.02158991,
   0.01649579,
   0.02051118,
   0.04576393,
   0.03314498,
   0.08200785,
   0.04209106,
   0.04813329,
   0.04996721,
   0.0549124,
   0.1824302,
   0.06606586,
   0.07892962,
   0.08170136,
   0.09357439,
   0.1103699,
   0.09757696,
   0.591799,
   0.2124055,
   0.2179516,
   0.3569188,
   0.4781618,
   0.3960321,
   0.6400122,
   0.6432439,
   0.4626639,
   0.6137899,
   0.8668982,
   0.6292032,
   0.882974};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1274,Graph_from_mc_statistical_error_fy1274,Graph_from_mc_statistical_error_fex1274,Graph_from_mc_statistical_error_fey1274);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1274 = new TH1F("Graph_Graph_from_mc_statistical_error1274","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1274->SetMinimum(0.1053234);
   Graph_Graph_from_mc_statistical_error1274->SetMaximum(2.059569);
   Graph_Graph_from_mc_statistical_error1274->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1274->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1274->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1274);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
