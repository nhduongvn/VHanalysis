void Z_dR_Bj0_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_all/Z_dR_Bj0_tags_all
//=========  (Thu Aug 10 12:27:50 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_all = new TCanvas("Z_dR_Bj0_tags_all", "Z_dR_Bj0_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_all->SetHighLightColor(2);
   Z_dR_Bj0_tags_all->Range(0,0,1,1);
   Z_dR_Bj0_tags_all->SetFillColor(0);
   Z_dR_Bj0_tags_all->SetFillStyle(4000);
   Z_dR_Bj0_tags_all->SetBorderMode(0);
   Z_dR_Bj0_tags_all->SetBorderSize(2);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-219.8589,6.314516,219939);
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
   st->SetMaximum(188498.2);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",30,0,6);
   st_stack_52->SetMinimum(0.3);
   st_stack_52->SetMaximum(197923.2);
   st_stack_52->SetDirectory(0);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->GetXaxis()->SetRange(1,30);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetLabelSize(0.035);
   st_stack_52->GetXaxis()->SetTitleSize(0.035);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Events/0.2");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetLabelSize(0.05);
   st_stack_52->GetYaxis()->SetTitleSize(0.057);
   st_stack_52->GetYaxis()->SetTitleOffset(1.2);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetLabelSize(0.035);
   st_stack_52->GetZaxis()->SetTitleSize(0.035);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(1,16603.17);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(2,78222.85);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(3,75684.35);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(4,73122.54);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(5,68600.99);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(6,44311.42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(7,29827.07);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(8,26033.48);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(9,23034.22);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(10,24835.63);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(11,20462.17);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(12,18967.18);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(13,16280.29);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(14,14106.12);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(15,10264.43);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(16,10252.77);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(17,8293.019);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(18,6325.937);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(19,7883.445);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(20,6018.544);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(21,3669.35);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(22,3211.409);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(23,2520.9);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(24,2378.269);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(25,823.0312);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(26,2019.477);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(27,738.4401);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(28,1009.937);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(29,140.6645);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(30,76.60924);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(31,390.2485);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(1,1274.842);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(2,3941.804);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(3,4473.974);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(4,15242.08);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(5,15372.97);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(6,3405.328);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(7,3110.949);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(8,2477.658);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(9,1974.194);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(10,2523.645);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(11,2313.185);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(12,2238.764);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(13,1719.938);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(14,1978.742);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(15,1175.649);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(16,1289.093);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(17,1190.023);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(18,1584.063);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(19,1268.984);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(20,1052.516);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(21,772.725);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(22,768.036);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(23,615.3805);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(24,668.8854);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(25,122.4028);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(26,659.516);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(27,378.993);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(28,528.5769);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(29,55.20086);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(30,41.0992);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(31,274.3039);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetEntries(30262);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(1,66.60869);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(2,296.5196);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(3,381.5944);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(4,339.2805);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(5,279.014);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(6,237.183);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(7,194.2244);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(8,150.5875);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(9,142.9003);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(10,128.1656);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(11,115.2262);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(12,107.5597);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(13,91.80064);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(14,80.66023);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(15,74.7581);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(16,64.13583);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(17,46.61253);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(18,36.73534);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(19,34.3708);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(20,28.76504);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(21,20.11611);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(22,17.0155);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(23,15.14744);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(24,11.46646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(25,7.132096);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(26,5.265179);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(27,4.84206);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(28,3.799125);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(29,1.592231);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(30,0.9913705);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(31,0.6145828);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(1,3.353143);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(2,6.808167);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(3,7.796819);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(4,7.36438);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(5,6.650699);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(6,6.193282);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(7,5.618018);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(8,4.745865);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(9,4.822968);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(10,4.512557);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(11,4.253182);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(12,4.283239);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(13,3.876472);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(14,3.633687);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(15,3.490138);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(16,3.231931);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(17,2.673107);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(18,2.355895);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(19,2.380173);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(20,2.185505);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(21,1.761553);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(22,1.584565);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(23,1.55378);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(24,1.445686);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(25,1.039652);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(26,0.9198795);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(27,0.8918109);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(28,0.8192859);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(29,0.4394776);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(30,0.3276733);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(31,0.1706531);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetEntries(36361);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(1,868.1567);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(2,5116.948);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(3,7202.347);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(4,6950.722);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(5,5811.87);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(6,4683.859);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(7,3830.34);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(8,3241.143);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(9,2788.526);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(10,2498.022);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(11,2247.632);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(12,2042.69);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(13,1845.549);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(14,1613.138);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(15,1378.471);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(16,1165.711);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(17,959.7554);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(18,797.7991);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(19,649.8956);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(20,503.2417);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(21,411.5644);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(22,308.3927);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(23,241.7122);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(24,177.5966);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(25,129.3044);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(26,95.36701);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(27,64.37122);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(28,43.26036);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(29,26.88999);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(30,16.70893);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(31,31.48736);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(1,7.3366);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(2,17.78046);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(3,21.15054);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(4,20.81069);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(5,19.03572);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(6,17.07912);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(7,15.45401);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(8,14.20502);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(9,13.17323);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(10,12.48507);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(11,11.84467);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(12,11.29618);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(13,10.74531);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(14,10.03983);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(15,9.276336);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(16,8.527053);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(17,7.738349);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(18,7.052123);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(19,6.361067);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(20,5.580923);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(21,5.049605);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(22,4.358925);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(23,3.865182);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(24,3.314139);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(25,2.818491);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(26,2.42566);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(27,1.985588);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(28,1.623698);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(29,1.285764);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(30,1.006822);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(31,1.379854);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetEntries(965144);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(1,234.9819);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(2,1008.339);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(3,1171.829);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(4,937.2864);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(5,680.5609);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(6,535.4182);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(7,386.6887);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(8,330.8928);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(9,326.6946);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(10,300.6038);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(11,254.7842);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(12,260.1194);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(13,211.1656);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(14,199.0605);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(15,164.8249);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(16,147.8944);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(17,106.7431);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(18,96.40579);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(19,81.02675);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(20,57.98083);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(21,50.46221);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(22,37.64355);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(23,23.25983);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(24,27.79034);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(25,18.83254);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(26,9.736928);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(27,9.049449);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(28,4.898979);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(29,2.607468);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(30,1.304036);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(31,2.965007);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(1,5.705226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(2,19.18783);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(3,24.8275);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(4,22.86653);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(5,19.78004);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(6,17.66597);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(7,13.07242);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(8,13.84592);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(9,14.35152);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(10,12.9199);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(11,11.88239);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(12,14.18862);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(13,10.65718);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(14,11.55516);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(15,8.841751);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(16,9.465793);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(17,7.102953);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(18,6.521127);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(19,6.283612);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(20,4.515401);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(21,4.375254);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(22,2.974319);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(23,2.124839);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(24,3.627682);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(25,1.933535);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(26,1.184588);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(27,1.121519);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(28,0.9634612);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(29,0.6502101);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(30,0.3570604);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(31,0.7905366);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetEntries(50664);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(1,46.95203);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(2,128.7897);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(3,127.2425);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(4,77.69756);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(5,56.21804);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(6,39.01701);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(7,37.7984);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(8,31.56576);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(9,31.67163);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(10,23.17194);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(11,14.82131);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(12,25.59958);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(13,19.6253);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(14,13.04013);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(15,16.63974);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(16,11.70409);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(17,8.315848);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(18,7.521251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(19,6.290547);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(20,9.089754);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(21,6.627343);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(22,5.799958);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(23,3.775853);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(24,2.333656);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(25,1.911725);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(26,2.236114);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(27,0.9154363);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(28,3.286333);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(29,0.3312781);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(30,0.1786184);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(31,0.3343351);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(1,5.305686);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(2,9.194413);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(3,14.68941);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(4,7.123239);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(5,5.620214);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(6,4.174063);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(7,7.457568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(8,3.72941);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(9,6.875701);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(10,3.559046);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(11,2.081408);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(12,4.374318);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(13,3.243736);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(14,1.800493);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(15,3.442865);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(16,2.278416);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(17,1.112553);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(18,1.469353);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(19,1.063089);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(20,3.077382);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(21,2.497408);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(22,2.187818);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(23,1.508644);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(24,0.5075644);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(25,0.5661322);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(26,0.6415652);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(27,0.3144868);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(28,2.120879);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(29,0.1854881);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(30,0.176369);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(31,0.19655);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetEntries(8033);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(1,0.9017179);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(2,0.4496752);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(3,0.9040853);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(7,0.2687386);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(8,0.586412);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(11,0.4496752);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(19,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(1,0.5672878);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(2,0.3427432);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(3,0.6392849);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(7,0.1900269);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(8,0.4715906);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(11,0.3427432);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(13,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(19,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(21,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(1,0.9854658);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(2,1.842127);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(3,1.885613);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(4,0.2181173);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(5,0.5334232);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(6,0.3271759);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(7,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(8,0.7792186);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(9,0.6424818);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(10,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(11,0.6424818);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(13,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(17,0.2181173);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(20,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(1,0.5723181);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(2,0.5156848);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(3,0.7181429);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(4,0.1542322);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(5,0.3510062);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(6,0.1888951);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(7,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(8,0.4899224);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(9,0.3675584);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(10,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(11,0.3675584);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(13,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(17,0.1542322);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(20,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(1,5.802795);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(2,20.95812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(3,21.03646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(4,19.44878);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(5,11.15744);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(6,8.994544);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(7,6.610983);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(8,7.472905);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(9,8.047904);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(10,7.686057);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(11,6.232966);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(12,6.51238);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(13,4.713612);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(14,5.555722);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(15,3.398973);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(16,2.363749);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(17,0.7496584);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(18,1.531657);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(19,1.06528);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(20,0.5226215);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(23,0.53264);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(25,0.53264);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(1,1.239065);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(2,2.347261);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(3,2.341611);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(4,2.264921);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(5,1.704665);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(6,1.522875);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(7,1.324605);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(8,1.38974);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(9,1.447929);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(10,1.405563);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(11,1.274642);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(12,1.304908);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(13,1.11354);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(14,1.214562);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(15,0.9446848);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(16,0.7892773);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(17,0.4328928);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(18,0.6266926);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(19,0.5332834);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(20,0.370435);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(21,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(23,0.3770883);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(25,0.3770883);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(28,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(1,3.770738);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(2,19.08615);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(3,23.36312);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(4,18.96888);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(5,13.59585);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(6,9.89836);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(7,7.618222);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(8,6.671086);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(9,6.107801);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(10,6.021709);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(11,5.847361);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(12,5.925176);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(13,4.995602);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(14,3.962383);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(15,3.087373);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(16,2.391818);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(17,1.847989);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(18,1.239813);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(19,0.9103776);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(20,0.628365);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(21,0.5344569);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(22,0.4321079);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.3276487);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.2633206);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.2078214);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.1480926);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.07341835);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.05228634);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.01786915);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(30,0.006186674);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.01536242);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(1,0.08378017);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(2,0.1881393);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(3,0.2072155);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(4,0.1857857);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(5,0.1570186);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(6,0.1345721);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1179072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(8,0.1106362);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(9,0.1058383);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(10,0.1049883);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(11,0.1035361);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(12,0.1045051);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(13,0.09548614);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(14,0.08528028);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(15,0.07517103);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(16,0.06646285);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(17,0.05807376);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(18,0.04771179);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(19,0.04055735);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(20,0.03414185);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(21,0.03092176);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(22,0.02819995);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(23,0.02461982);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(24,0.02221008);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(25,0.01995447);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(26,0.01665628);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(27,0.01158449);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(28,0.009932803);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(29,0.005802353);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(30,0.003613609);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(31,0.005532873);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetEntries(84585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(1,1.489272);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(2,8.285446);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(3,10.93);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(4,9.094416);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(5,6.714044);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(6,4.793595);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(7,3.613675);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(8,3.042879);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(9,2.640447);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(10,2.615808);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(11,2.373528);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(12,2.180524);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(13,1.936875);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(14,1.574139);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(15,1.303113);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(16,1.047145);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(17,0.8363468);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(18,0.6666136);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(19,0.484561);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(20,0.3832686);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(21,0.3189342);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.2559687);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.216273);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.1368816);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.09307951);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.06844082);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.05749029);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.02053225);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.01368816);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.002737633);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.005475266);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(1,0.0267055);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(2,0.06299);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(3,0.07234754);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(4,0.06599349);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(5,0.05670297);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(6,0.04791201);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(7,0.04159951);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(8,0.03817298);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(9,0.03555924);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(10,0.03539294);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(11,0.03371404);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(12,0.03231426);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(13,0.03045541);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(14,0.02745587);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(15,0.02498071);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(16,0.02239324);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(17,0.02001276);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(18,0.01786696);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(19,0.01523309);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(20,0.01354769);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(21,0.01235846);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(22,0.01107152);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(23,0.01017688);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(24,0.008096295);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(25,0.006676376);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(26,0.005724945);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(27,0.005246999);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(28,0.003135681);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(29,0.002560273);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(30,0.001144989);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(31,0.001619259);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetEntries(147270);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.02340609);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(2,0.09484054);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(3,0.09351702);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.05451093);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.01703805);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.01499856);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.01291203);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.01160179);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.0127228);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.0127228);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.007286531);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.004315259);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.01726103);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.008171272);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.009562293);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.007712026);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(1,0.007157199);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(2,0.01399059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(3,0.01414026);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(4,0.01092443);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(5,0.006163553);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(6,0.005761165);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(7,0.005014512);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(8,0.005274079);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(9,0.00529263);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(10,0.00529263);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(11,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(12,0.004223559);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(13,0.003158712);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(14,0.006317423);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(15,0.004201636);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(16,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(17,0.00479766);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(18,0.003918236);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.007805267);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.04721608);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.03589672);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.02652557);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.01689987);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.00718245);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.006143749);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.006477848);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.005106057);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.00438126);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.003342895);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.002766748);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.002778024);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.001821444);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.002501534);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.003250508);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.002120765);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.002801191);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.001429736);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.001613838);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.0005072625);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.0007148681);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(24,0.001106576);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(25,0.0006569226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(1,0.001434106);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(2,0.003679283);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(3,0.003198738);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(4,0.00276031);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(5,0.002199165);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(6,0.001388294);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(7,0.001367635);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(8,0.001403236);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(9,0.001255246);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(10,0.001050076);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(11,0.0009830785);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(12,0.0009032443);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(13,0.0008920226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(14,0.0006989114);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(15,0.0008572663);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(16,0.0009995162);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(17,0.0008108974);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(18,0.0009081298);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(19,0.0005932865);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(20,0.0006673657);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(21,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(22,0.0003645467);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(23,0.0004195169);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(24,0.0005590015);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(25,0.0004662972);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all__142 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all__142","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(1,15292);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(2,66090);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(3,65913);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(4,52763);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(5,42095);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(6,33690);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(7,27449);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(8,23146);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(9,20155);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(10,17905);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(11,16331);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(12,15002);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(13,13496);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(14,12032);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(15,10738);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(16,9181);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(17,7427);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(18,6249);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(19,5211);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(20,4226);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(21,3582);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(22,2906);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(23,2345);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(24,1739);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(25,1452);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(26,1088);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(27,697);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(28,397);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(29,297);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(30,157);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(31,260);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetEntries(479340);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all__142->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fx1103[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fy1103[30] = {
   17832.85,
   84824.21,
   84625.62,
   81475.34,
   75461.01,
   49831.07,
   34294.36,
   29806.24,
   26341.78,
   27802.04,
   23110.19,
   21417.89,
   18460.33,
   16023.26,
   11906.92,
   11648.02,
   9418.11,
   7267.847,
   8657.625,
   6619.267,
   4159.352,
   3580.949,
   2805.872,
   2597.857,
   981.0461,
   2132.299,
   817.7494,
   1065.498,
   172.117,
   95.80112};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fex1103[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fey1103[30] = {
   1274.893,
   3941.908,
   4474.124,
   15242.12,
   15373,
   3405.425,
   3111.029,
   2477.746,
   1974.309,
   2523.716,
   2313.251,
   2238.846,
   1720.012,
   1978.806,
   1175.73,
   1289.162,
   1190.073,
   1584.095,
   1269.019,
   1052.547,
   772.76,
   768.0589,
   615.4002,
   668.9052,
   122.4568,
   659.5225,
   379.001,
   528.5852,
   55.22172,
   41.11476};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fx1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fy1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fex1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fey1103);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetMinimum(49.21773);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetMaximum(106383.7);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__143 = new TH1D("data_mc_ratio__143","",30,0,6);
   data_mc_ratio__143->SetBinContent(1,0.8575187);
   data_mc_ratio__143->SetBinContent(2,0.7791408);
   data_mc_ratio__143->SetBinContent(3,0.7788776);
   data_mc_ratio__143->SetBinContent(4,0.6475947);
   data_mc_ratio__143->SetBinContent(5,0.5578378);
   data_mc_ratio__143->SetBinContent(6,0.6760842);
   data_mc_ratio__143->SetBinContent(7,0.800394);
   data_mc_ratio__143->SetBinContent(8,0.7765489);
   data_mc_ratio__143->SetBinContent(9,0.7651343);
   data_mc_ratio__143->SetBinContent(10,0.6440174);
   data_mc_ratio__143->SetBinContent(11,0.706658);
   data_mc_ratio__143->SetBinContent(12,0.7004426);
   data_mc_ratio__143->SetBinContent(13,0.7310812);
   data_mc_ratio__143->SetBinContent(14,0.7509082);
   data_mc_ratio__143->SetBinContent(15,0.9018283);
   data_mc_ratio__143->SetBinContent(16,0.7882027);
   data_mc_ratio__143->SetBinContent(17,0.7885871);
   data_mc_ratio__143->SetBinContent(18,0.8598145);
   data_mc_ratio__143->SetBinContent(19,0.6018972);
   data_mc_ratio__143->SetBinContent(20,0.6384393);
   data_mc_ratio__143->SetBinContent(21,0.8611919);
   data_mc_ratio__143->SetBinContent(22,0.8115167);
   data_mc_ratio__143->SetBinContent(23,0.8357472);
   data_mc_ratio__143->SetBinContent(24,0.6693979);
   data_mc_ratio__143->SetBinContent(25,1.480053);
   data_mc_ratio__143->SetBinContent(26,0.5102473);
   data_mc_ratio__143->SetBinContent(27,0.8523393);
   data_mc_ratio__143->SetBinContent(28,0.3725959);
   data_mc_ratio__143->SetBinContent(29,1.72557);
   data_mc_ratio__143->SetBinContent(30,1.638812);
   data_mc_ratio__143->SetBinContent(31,0.6107987);
   data_mc_ratio__143->SetBinError(1,0.006934441);
   data_mc_ratio__143->SetBinError(2,0.003030736);
   data_mc_ratio__143->SetBinError(3,0.003033777);
   data_mc_ratio__143->SetBinError(4,0.002819282);
   data_mc_ratio__143->SetBinError(5,0.002718896);
   data_mc_ratio__143->SetBinError(6,0.003683412);
   data_mc_ratio__143->SetBinError(7,0.004831039);
   data_mc_ratio__143->SetBinError(8,0.005104237);
   data_mc_ratio__143->SetBinError(9,0.005389473);
   data_mc_ratio__143->SetBinError(10,0.00481294);
   data_mc_ratio__143->SetBinError(11,0.005529717);
   data_mc_ratio__143->SetBinError(12,0.005718708);
   data_mc_ratio__143->SetBinError(13,0.006293078);
   data_mc_ratio__143->SetBinError(14,0.006845701);
   data_mc_ratio__143->SetBinError(15,0.008702863);
   data_mc_ratio__143->SetBinError(16,0.00822608);
   data_mc_ratio__143->SetBinError(17,0.009150461);
   data_mc_ratio__143->SetBinError(18,0.01087676);
   data_mc_ratio__143->SetBinError(19,0.008337998);
   data_mc_ratio__143->SetBinError(20,0.009820981);
   data_mc_ratio__143->SetBinError(21,0.01438922);
   data_mc_ratio__143->SetBinError(22,0.01505392);
   data_mc_ratio__143->SetBinError(23,0.01725852);
   data_mc_ratio__143->SetBinError(24,0.0160522);
   data_mc_ratio__143->SetBinError(25,0.03884131);
   data_mc_ratio__143->SetBinError(26,0.01546914);
   data_mc_ratio__143->SetBinError(27,0.03228465);
   data_mc_ratio__143->SetBinError(28,0.01870005);
   data_mc_ratio__143->SetBinError(29,0.1001277);
   data_mc_ratio__143->SetBinError(30,0.1307914);
   data_mc_ratio__143->SetBinError(31,0.3954251);
   data_mc_ratio__143->SetMinimum(0.4);
   data_mc_ratio__143->SetMaximum(1.6);
   data_mc_ratio__143->SetEntries(442.7504);
   data_mc_ratio__143->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__143->SetLineColor(ci);
   data_mc_ratio__143->SetLineWidth(2);
   data_mc_ratio__143->SetMarkerStyle(20);
   data_mc_ratio__143->SetMarkerSize(1.2);
   data_mc_ratio__143->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__143->GetXaxis()->SetRange(1,30);
   data_mc_ratio__143->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__143->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__143->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__143->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__143->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__143->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__143->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__143->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__143->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__143->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__143->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__143->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__143->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__143->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__143->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__143->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__143->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1104[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1104[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1104[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1104[30] = {
   0.07149125,
   0.0464715,
   0.05286962,
   0.1870765,
   0.2037211,
   0.0683394,
   0.09071547,
   0.08312842,
   0.07494971,
   0.09077446,
   0.1000966,
   0.1045316,
   0.09317342,
   0.1234958,
   0.09874337,
   0.1106765,
   0.1263601,
   0.2179593,
   0.1465782,
   0.1590127,
   0.1857886,
   0.2144847,
   0.2193258,
   0.2574834,
   0.1248227,
   0.3093011,
   0.4634684,
   0.4960923,
   0.3208382,
   0.4291678};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1104,Graph_from_mc_statistical_error_fy1104,Graph_from_mc_statistical_error_fex1104,Graph_from_mc_statistical_error_fey1104);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1104 = new TH1F("Graph_Graph_from_mc_statistical_error1104","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1104->SetMinimum(0.4046892);
   Graph_Graph_from_mc_statistical_error1104->SetMaximum(1.595311);
   Graph_Graph_from_mc_statistical_error1104->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1104->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1104->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1104);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->SetSelected(Z_dR_Bj0_tags_all);
}
