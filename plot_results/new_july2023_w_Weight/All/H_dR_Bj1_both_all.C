void H_dR_Bj1_both_all()
{
//=========Macro generated from canvas: H_dR_Bj1_both_all/H_dR_Bj1_both_all
//=========  (Thu Aug 10 12:25:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_all = new TCanvas("H_dR_Bj1_both_all", "H_dR_Bj1_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_all->SetHighLightColor(2);
   H_dR_Bj1_both_all->Range(0,0,1,1);
   H_dR_Bj1_both_all->SetFillColor(0);
   H_dR_Bj1_both_all->SetFillStyle(4000);
   H_dR_Bj1_both_all->SetBorderMode(0);
   H_dR_Bj1_both_all->SetBorderSize(2);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-341.7875,6.314516,341745.7);
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
   st->SetMaximum(292892.3);
   
   TH1F *st_stack_240 = new TH1F("st_stack_240","",30,0,6);
   st_stack_240->SetMinimum(0.3);
   st_stack_240->SetMaximum(307536.9);
   st_stack_240->SetDirectory(0);
   st_stack_240->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_240->SetLineColor(ci);
   st_stack_240->GetXaxis()->SetRange(1,30);
   st_stack_240->GetXaxis()->SetLabelFont(42);
   st_stack_240->GetXaxis()->SetLabelSize(0.035);
   st_stack_240->GetXaxis()->SetTitleSize(0.035);
   st_stack_240->GetXaxis()->SetTitleFont(42);
   st_stack_240->GetYaxis()->SetTitle("Events/0.2");
   st_stack_240->GetYaxis()->SetLabelFont(42);
   st_stack_240->GetYaxis()->SetLabelSize(0.05);
   st_stack_240->GetYaxis()->SetTitleSize(0.057);
   st_stack_240->GetYaxis()->SetTitleOffset(1.2);
   st_stack_240->GetYaxis()->SetTitleFont(42);
   st_stack_240->GetZaxis()->SetLabelFont(42);
   st_stack_240->GetZaxis()->SetLabelSize(0.035);
   st_stack_240->GetZaxis()->SetTitleSize(0.035);
   st_stack_240->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_240);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(1,29556.96);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(2,121763.9);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(3,78216.18);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(4,61517.53);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(5,47624.16);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(6,40437.12);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(7,34059.1);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(8,23672.31);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(9,22784.74);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(10,24689.12);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(11,21443.52);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(12,17085.3);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(13,14730.75);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(14,16810.37);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(15,15671.39);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(16,12531.23);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(17,5708.938);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(18,6278.353);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(19,2625.336);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(20,1936.856);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(21,3719.929);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(22,1122.54);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(23,913.769);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(24,460.07);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(25,205.9287);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(26,64.42067);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(27,433.0492);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(28,25.14006);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(29,24.09785);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(31,24.98391);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(1,1752.563);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(2,21421.69);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(3,4213.75);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(4,3610.275);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(5,3274.546);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(6,3645.116);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(7,3120.134);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(8,1931.25);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(9,2004.983);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(10,3093.71);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(11,2417.164);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(12,1744.196);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(13,1509.93);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(14,2692.01);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(15,2128.285);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(16,1403.718);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(17,765.1677);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(18,1114.813);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(19,619.4752);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(20,549.5953);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(21,1586.349);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(22,392.7379);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(23,389.1135);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(24,274.3142);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(25,68.52505);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(26,36.35203);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(27,372.1878);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(28,13.87179);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(29,13.83937);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(31,24.98391);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetEntries(30761);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(1,181.7305);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(2,420.1291);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(3,448.6273);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(4,382.8939);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(5,287.5264);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(6,241.5658);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(7,197.7663);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(8,162.7077);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(9,139.5294);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(10,123.5598);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(11,104.6521);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(12,93.06572);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(13,93.65237);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(14,90.31187);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(15,75.62038);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(16,59.51048);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(17,38.51114);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(18,28.29702);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(19,17.18268);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(20,12.56312);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(21,11.04466);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(22,5.524665);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(23,3.623572);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(24,2.486022);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(25,1.675148);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(26,0.7000339);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(27,0.5829446);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(28,0.525858);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(29,0.6486061);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(30,0.04982199);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(31,0.1148528);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(1,5.645597);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(2,8.114171);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(3,8.445442);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(4,7.923871);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(5,6.680265);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(6,6.221961);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(7,5.625902);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(8,5.117348);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(9,4.759818);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(10,4.516108);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(11,4.066954);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(12,3.932691);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(13,3.917887);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(14,3.892283);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(15,3.491718);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(16,3.013194);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(17,2.472383);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(18,2.098017);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(19,1.622203);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(20,1.299458);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(21,1.340353);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(22,0.9048958);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(23,0.7308707);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(24,0.5925067);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(25,0.5187183);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(26,0.3098273);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(27,0.3033221);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(28,0.2921178);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(29,0.3924974);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(30,0.04982199);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(31,0.08192212);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetEntries(36922);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(1,2737.489);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(2,8190.696);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(3,9201.074);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(4,7858.608);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(5,6377.857);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(6,4972.657);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(7,3998.051);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(8,3245.751);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(9,2680.073);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(10,2290.875);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(11,1983.021);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(12,1750.581);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(13,1566.507);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(14,1426.061);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(15,1311.637);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(16,1177.271);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(17,684.5658);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(18,444.6967);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(19,295.1994);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(20,199.9956);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(21,136.5948);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(22,86.48574);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(23,59.96953);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(24,37.07448);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(25,22.5023);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(26,11.37883);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(27,8.457927);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(28,4.839532);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(29,3.369016);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(30,1.418503);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(31,3.174103);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(1,13.64016);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(2,23.5707);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(3,24.9927);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(4,23.09265);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(5,20.7892);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(6,18.33767);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(7,16.44481);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(8,14.79358);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(9,13.44084);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(10,12.43816);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(11,11.56761);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(12,10.86419);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(13,10.29642);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(14,9.81245);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(15,9.408425);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(16,8.914783);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(17,6.804163);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(18,5.473242);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(19,4.461722);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(20,3.669077);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(21,3.039656);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(22,2.402392);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(23,2.005645);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(24,1.578615);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(25,1.222563);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(26,0.8657668);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(27,0.7533611);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(28,0.5652617);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(29,0.4786189);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(30,0.313729);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(31,0.4658077);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetEntries(956114);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(1,506.2866);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(2,1224.18);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(3,1181.859);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(4,912.1736);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(5,685.4045);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(6,533.0433);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(7,444.1801);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(8,334.7793);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(9,301.7703);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(10,280.3853);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(11,246.9893);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(12,219.854);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(13,211.8648);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(14,185.5858);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(15,192.4724);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(16,161.9252);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(17,94.66654);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(18,73.86105);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(19,34.00141);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(20,24.34276);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(21,19.4647);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(22,11.91743);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(23,6.613528);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(24,5.18497);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(25,1.620281);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(26,2.126604);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(27,0.2897749);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(28,0.1923911);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(29,0.4390469);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(30,0.09257296);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(31,0.284964);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(1,10.1097);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(2,21.01916);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(3,21.58007);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(4,22.90408);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(5,20.30067);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(6,18.40771);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(7,17.51006);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(8,13.61528);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(9,13.082);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(10,14.18834);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(11,10.72357);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(12,10.02725);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(13,10.68405);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(14,9.504351);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(15,9.001561);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(16,9.625322);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(17,6.950555);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(18,9.481302);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(19,3.668313);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(20,2.501452);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(21,3.79505);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(22,2.846644);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(23,1.374532);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(24,1.133216);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(25,0.4889333);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(26,0.7538923);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(27,0.1717302);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(28,0.1423286);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(29,0.3692386);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(30,0.09257296);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(31,0.1697857);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetEntries(52923);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(1,76.74808);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(2,127.6264);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(3,127.3176);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(4,92.42809);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(5,73.77085);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(6,43.7631);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(7,40.61876);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(8,22.81851);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(9,35.41171);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(10,28.90955);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(11,22.09035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(12,18.96292);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(13,15.02552);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(14,17.25185);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(15,24.00118);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(16,15.90728);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(17,7.195982);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(18,5.851699);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(19,3.704477);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(20,3.110864);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(21,5.104795);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(22,0.9946039);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(23,0.6366858);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(24,1.415914);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(25,0.07616006);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(26,0.008033872);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(27,0.1263986);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(28,0.07564673);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(29,0.08447854);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(1,4.39366);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(2,7.021036);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(3,12.43163);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(4,13.78978);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(5,7.416123);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(6,4.893459);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(7,4.978535);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(8,3.162043);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(9,5.241949);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(10,6.739451);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(11,2.908622);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(12,2.688299);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(13,1.836198);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(14,2.311271);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(15,4.508206);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(16,2.177275);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(17,1.730442);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(18,2.19295);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(19,0.796621);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(20,0.6736743);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(21,2.439351);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(22,0.426938);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(23,0.2821064);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(24,1.055808);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(25,0.0756476);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(26,0.007781441);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(27,0.1263986);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(28,0.07564673);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(29,0.08447854);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetEntries(8398);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(2,0.4496752);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(3,1.940172);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(4,0.586412);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(5,0.7207813);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(10,0.2687386);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(14,0.4496752);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(2,0.3427432);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(3,0.8651912);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(4,0.4715906);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(5,0.4903599);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(8,0.1343693);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(10,0.1900269);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(14,0.3427432);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(15,0.1343693);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(1,0.8602121);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(2,1.623081);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(3,1.998378);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(4,0.9969489);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(5,0.8879676);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(6,0.7628687);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(7,0.2179625);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(8,0.2179625);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(9,0.1089812);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(10,0.1089812);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(12,0.4359249);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(13,0.2179625);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(14,0.4242871);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(15,0.2179625);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(23,0.1089812);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(1,0.3985001);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(2,0.4918747);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(3,0.864914);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(4,0.5135437);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(5,0.5018468);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(6,0.2883373);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(7,0.1541227);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(8,0.1541227);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(9,0.1089812);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(10,0.1089812);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(12,0.2179625);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(13,0.1541227);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(14,0.3336086);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(15,0.1541227);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(23,0.1089812);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(1,12.70936);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(2,32.62816);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(3,26.75225);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(4,17.1472);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(5,9.093147);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(6,8.566659);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(7,6.222947);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(8,5.177704);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(9,4.480423);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(10,3.320407);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(11,5.213911);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(12,4.50046);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(13,3.889254);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(14,4.096254);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(15,2.23509);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(16,4.50046);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(17,1.893505);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(18,0.4964328);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(19,0.53264);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(1,1.837637);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(2,2.923656);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(3,2.63999);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(4,2.114579);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(5,1.539787);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(6,1.494239);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(7,1.272689);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(8,1.159868);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(9,1.088943);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(10,0.9222699);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(11,1.167997);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(12,1.0935);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(13,1.005833);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(14,1.025635);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(15,0.7458174);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(16,1.0935);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(17,0.7166832);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(18,0.3511024);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(19,0.3770883);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(20,0.2432072);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(1,8.541417);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(2,28.54918);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(3,27.17317);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(4,18.9108);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(5,12.409);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(6,8.659412);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(7,6.654085);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(8,5.606729);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(9,4.833818);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(10,4.38287);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(11,3.932808);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(12,3.782942);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(13,3.562776);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(14,3.508987);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(15,3.204421);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(16,2.905456);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(17,1.564553);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(18,0.92697);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(19,0.5596391);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(20,0.3362945);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(21,0.1990412);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(22,0.1005236);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(23,0.06998368);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(24,0.02954178);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(25,0.02973143);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(26,0.01968876);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(27,0.008392063);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(28,0.00166692);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(29,0.003672001);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(30,0.003672001);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(31,0.007905396);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(1,0.1270987);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(2,0.2314751);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(3,0.2243169);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(4,0.1862345);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(5,0.150679);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(6,0.1257894);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(7,0.1106421);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(8,0.1017471);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(9,0.09440506);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(10,0.08996394);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(11,0.08520637);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(12,0.08390759);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(13,0.08125497);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(14,0.08078045);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(15,0.07728464);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(16,0.07351373);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(17,0.05377504);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(18,0.04183385);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(19,0.0326861);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(20,0.02499088);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(21,0.01925127);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(22,0.01385895);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(23,0.01113287);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(24,0.007520897);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(25,0.007818168);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(26,0.006076302);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(27,0.003824298);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(28,0.00166692);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(29,0.002673275);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(30,0.002673275);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(31,0.004000851);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetEntries(84809);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(1,3.430274);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(2,11.61902);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(3,12.92527);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(4,9.707674);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(5,6.557311);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(6,4.315284);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(7,3.272481);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(8,2.786754);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(9,2.427262);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(10,1.929186);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(11,1.805696);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(12,1.613601);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(13,1.35976);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(14,1.299388);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(15,1.164921);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(16,1.09906);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(17,0.5721696);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(18,0.3279342);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(19,0.1838627);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(20,0.1070245);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(21,0.08918711);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(22,0.0439075);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(23,0.02469797);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(24,0.02058164);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(25,0.005488438);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(26,0.004116328);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(27,0.008232657);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(28,0.002744219);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(31,0.002744219);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(1,0.04057886);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(2,0.07468275);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(3,0.078769);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(4,0.06826421);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(5,0.05610459);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(6,0.04551349);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(7,0.03963456);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(8,0.03657504);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(9,0.03413452);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(10,0.03043144);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(11,0.02944136);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(12,0.0278313);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(13,0.02554858);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(14,0.02497496);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(15,0.02364742);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(16,0.02296921);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(17,0.01657288);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(18,0.01254668);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(19,0.009394686);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(20,0.007167656);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(21,0.006543145);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(22,0.004590974);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(23,0.003443231);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(24,0.003143225);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(25,0.001623154);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(26,0.001405693);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(27,0.00198795);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(28,0.001147744);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(31,0.001147744);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetEntries(150219);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(1,0.01546635);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(2,0.09100002);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(3,0.08816117);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(4,0.06461491);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(5,0.03451869);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(6,0.03766131);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(7,0.01798692);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(8,0.005788292);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(9,0.01010355);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(10,0.01377888);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(11,0.01010355);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(12,0.004315259);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(13,0.005362797);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(14,0.006943048);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(15,0.005470015);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(16,0.01010355);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(17,0.004208041);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(21,0.004315259);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(1,0.006021849);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(2,0.01446178);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(3,0.0143483);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(4,0.01181166);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(5,0.008662208);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(6,0.009394578);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(7,0.006526328);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(8,0.003449589);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(9,0.004677299);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(10,0.005761118);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(11,0.004677299);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(12,0.003158712);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(13,0.003792828);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(14,0.004108861);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(15,0.003867885);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(16,0.004677299);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(17,0.003066345);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(21,0.003158712);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(1,0.006893732);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(2,0.03839791);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(3,0.03746416);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(4,0.03261143);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(5,0.02193771);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(6,0.01746379);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(7,0.009060494);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(8,0.006905961);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(9,0.008438687);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(10,0.005453057);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(11,0.004565026);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(12,0.006467246);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(13,0.001844611);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(14,0.002835969);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(15,0.004414693);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(16,0.002593921);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(17,0.001314182);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(18,0.0008069192);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(20,0.0008989704);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(1,0.001377209);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(2,0.003323569);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(3,0.003293503);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(4,0.003050135);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(5,0.002497139);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(6,0.00223988);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(7,0.001640589);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(8,0.001366222);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(9,0.001524592);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(10,0.001218843);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(11,0.001129306);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(12,0.001353015);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(13,0.0007193555);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(14,0.0008684847);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(15,0.00116162);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(16,0.0008380431);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(17,0.0005963076);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(18,0.0004718988);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(20,0.0005190208);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all__659 = new TH1D("VbbHcc_both_H_dR_Bj1_all__659","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(1,29029);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(2,75743);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(3,70461);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(4,54887);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(5,43109);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(6,34721);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(7,28031);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(8,23381);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(9,20110);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(10,17824);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(11,15856);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(12,14531);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(13,13300);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(14,12546);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(15,11866);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(16,10930);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(17,6286);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(18,4312);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(19,2954);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(20,2066);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(21,1452);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(22,989);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(23,656);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(24,453);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(25,264);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(26,166);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(27,80);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(28,45);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(29,21);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(30,28);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(31,35);
   VbbHcc_both_H_dR_Bj1_all__659->SetEntries(496161);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all__659->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all__659->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1_all__659->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1_all__659->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fx1479[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fy1479[30] = {
   33085.1,
   131801.5,
   89245.97,
   70811.08,
   55078.44,
   46250.5,
   38756.11,
   27452.3,
   25953.4,
   27422.88,
   23811.24,
   19178.11,
   16626.84,
   18539.37,
   17282.09,
   13954.99,
   6537.913,
   6832.811,
   2976.701,
   2177.556,
   3892.431,
   1227.607,
   985.0957,
   506.2816,
   231.8378,
   78.65798,
   442.5228,
   30.7779,
   28.64267,
   1.56457};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fex1479[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fey1479[30] = {
   1752.661,
   21421.72,
   4213.907,
   3610.458,
   3274.69,
   3645.217,
   3120.236,
   1931.364,
   2005.084,
   3093.779,
   2417.221,
   1744.266,
   1510.01,
   2692.049,
   2128.333,
   1403.784,
   765.2358,
   1114.871,
   619.5049,
   549.6153,
   1586.359,
   392.7569,
   389.122,
   274.3238,
   68.5397,
   36.37147,
   372.1887,
   13.88731,
   13.85838,
   0.3308852};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_all_fx1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fy1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fex1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fey1479);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetMinimum(1.110316);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetMaximum(168545.5);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1_all","MC unc. (stat.)","fl");

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
   H_dR_Bj1_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__660 = new TH1D("data_mc_ratio__660","",30,0,6);
   data_mc_ratio__660->SetBinContent(1,0.8774041);
   data_mc_ratio__660->SetBinContent(2,0.5746746);
   data_mc_ratio__660->SetBinContent(3,0.7895146);
   data_mc_ratio__660->SetBinContent(4,0.7751188);
   data_mc_ratio__660->SetBinContent(5,0.7826837);
   data_mc_ratio__660->SetBinContent(6,0.7507161);
   data_mc_ratio__660->SetBinContent(7,0.7232665);
   data_mc_ratio__660->SetBinContent(8,0.8516954);
   data_mc_ratio__660->SetBinContent(9,0.7748504);
   data_mc_ratio__660->SetBinContent(10,0.6499681);
   data_mc_ratio__660->SetBinContent(11,0.6659039);
   data_mc_ratio__660->SetBinContent(12,0.7576869);
   data_mc_ratio__660->SetBinContent(13,0.7999115);
   data_mc_ratio__660->SetBinContent(14,0.6767221);
   data_mc_ratio__660->SetBinContent(15,0.6866069);
   data_mc_ratio__660->SetBinContent(16,0.7832322);
   data_mc_ratio__660->SetBinContent(17,0.9614689);
   data_mc_ratio__660->SetBinContent(18,0.6310726);
   data_mc_ratio__660->SetBinContent(19,0.9923737);
   data_mc_ratio__660->SetBinContent(20,0.9487703);
   data_mc_ratio__660->SetBinContent(21,0.3730317);
   data_mc_ratio__660->SetBinContent(22,0.8056326);
   data_mc_ratio__660->SetBinContent(23,0.6659252);
   data_mc_ratio__660->SetBinContent(24,0.894759);
   data_mc_ratio__660->SetBinContent(25,1.138727);
   data_mc_ratio__660->SetBinContent(26,2.110403);
   data_mc_ratio__660->SetBinContent(27,0.1807816);
   data_mc_ratio__660->SetBinContent(28,1.462088);
   data_mc_ratio__660->SetBinContent(29,0.7331718);
   data_mc_ratio__660->SetBinContent(30,17.89629);
   data_mc_ratio__660->SetBinContent(31,1.225127);
   data_mc_ratio__660->SetBinError(1,0.00514972);
   data_mc_ratio__660->SetBinError(2,0.002088098);
   data_mc_ratio__660->SetBinError(3,0.002974307);
   data_mc_ratio__660->SetBinError(4,0.003308518);
   data_mc_ratio__660->SetBinError(5,0.003769661);
   data_mc_ratio__660->SetBinError(6,0.004028836);
   data_mc_ratio__660->SetBinError(7,0.004319953);
   data_mc_ratio__660->SetBinError(8,0.005569969);
   data_mc_ratio__660->SetBinError(9,0.005464014);
   data_mc_ratio__660->SetBinError(10,0.004868436);
   data_mc_ratio__660->SetBinError(11,0.005288284);
   data_mc_ratio__660->SetBinError(12,0.006285531);
   data_mc_ratio__660->SetBinError(13,0.006936113);
   data_mc_ratio__660->SetBinError(14,0.00604168);
   data_mc_ratio__660->SetBinError(15,0.006303126);
   data_mc_ratio__660->SetBinError(16,0.007491702);
   data_mc_ratio__660->SetBinError(17,0.01212685);
   data_mc_ratio__660->SetBinError(18,0.009610367);
   data_mc_ratio__660->SetBinError(19,0.01825871);
   data_mc_ratio__660->SetBinError(20,0.02087353);
   data_mc_ratio__660->SetBinError(21,0.009789542);
   data_mc_ratio__660->SetBinError(22,0.02561763);
   data_mc_ratio__660->SetBinError(23,0.02600001);
   data_mc_ratio__660->SetBinError(24,0.04203945);
   data_mc_ratio__660->SetBinError(25,0.07008382);
   data_mc_ratio__660->SetBinError(26,0.163799);
   data_mc_ratio__660->SetBinError(27,0.020212);
   data_mc_ratio__660->SetBinError(28,0.2179552);
   data_mc_ratio__660->SetBinError(29,0.1599912);
   data_mc_ratio__660->SetBinError(30,3.382081);
   data_mc_ratio__660->SetBinError(31,1.091449);
   data_mc_ratio__660->SetMinimum(0.4);
   data_mc_ratio__660->SetMaximum(1.6);
   data_mc_ratio__660->SetEntries(61.89619);
   data_mc_ratio__660->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__660->SetLineColor(ci);
   data_mc_ratio__660->SetLineWidth(2);
   data_mc_ratio__660->SetMarkerStyle(20);
   data_mc_ratio__660->SetMarkerSize(1.2);
   data_mc_ratio__660->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__660->GetXaxis()->SetRange(1,30);
   data_mc_ratio__660->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__660->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__660->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__660->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__660->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__660->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__660->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__660->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__660->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__660->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__660->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__660->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__660->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__660->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1480[30] = {
   0.05297433,
   0.1625301,
   0.04721677,
   0.05098719,
   0.05945503,
   0.07881465,
   0.08050951,
   0.07035344,
   0.07725709,
   0.1128174,
   0.1015159,
   0.09095089,
   0.0908176,
   0.1452071,
   0.1231525,
   0.1005937,
   0.1170459,
   0.1631643,
   0.2081179,
   0.2524001,
   0.4075496,
   0.3199371,
   0.3950093,
   0.5418404,
   0.2956365,
   0.4624003,
   0.841061,
   0.4512103,
   0.4838367,
   0.2114863};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1480,Graph_from_mc_statistical_error_fy1480,Graph_from_mc_statistical_error_fex1480,Graph_from_mc_statistical_error_fey1480);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1480 = new TH1F("Graph_Graph_from_mc_statistical_error1480","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1480->SetMinimum(0.1430451);
   Graph_Graph_from_mc_statistical_error1480->SetMaximum(2.009273);
   Graph_Graph_from_mc_statistical_error1480->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1480->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1480->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1480);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->SetSelected(H_dR_Bj1_both_all);
}
