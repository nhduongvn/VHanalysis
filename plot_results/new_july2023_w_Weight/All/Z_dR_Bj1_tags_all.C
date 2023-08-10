void Z_dR_Bj1_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_all/Z_dR_Bj1_tags_all
//=========  (Thu Aug 10 10:41:09 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_all = new TCanvas("Z_dR_Bj1_tags_all", "Z_dR_Bj1_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_all->SetHighLightColor(2);
   Z_dR_Bj1_tags_all->Range(0,0,1,1);
   Z_dR_Bj1_tags_all->SetFillColor(0);
   Z_dR_Bj1_tags_all->SetFillStyle(4000);
   Z_dR_Bj1_tags_all->SetBorderMode(0);
   Z_dR_Bj1_tags_all->SetBorderSize(2);
   Z_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.367109,6.314516,12.94656);
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
   st->SetMaximum(9.91236e+10);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",30,0,6);
   st_stack_56->SetMinimum(0.0443818);
   st_stack_56->SetMaximum(3.274857e+11);
   st_stack_56->SetDirectory(0);
   st_stack_56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_56->SetLineColor(ci);
   st_stack_56->GetXaxis()->SetRange(1,30);
   st_stack_56->GetXaxis()->SetLabelFont(42);
   st_stack_56->GetXaxis()->SetLabelSize(0.035);
   st_stack_56->GetXaxis()->SetTitleSize(0.035);
   st_stack_56->GetXaxis()->SetTitleFont(42);
   st_stack_56->GetYaxis()->SetTitle("Events/0.2");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetLabelSize(0.05);
   st_stack_56->GetYaxis()->SetTitleSize(0.057);
   st_stack_56->GetYaxis()->SetTitleOffset(1.2);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetLabelSize(0.035);
   st_stack_56->GetZaxis()->SetTitleSize(0.035);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(1,15187.87);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(2,72957.01);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(3,80073.79);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(4,61215.88);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(5,43531.91);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(6,41851.74);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(7,31854.59);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(8,28555.76);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(9,23061.6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(10,38686.33);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(11,24920.94);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(12,17373.81);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(13,31123.78);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(14,18341.26);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(15,12905.31);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(16,9016.161);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(17,7114.847);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(18,6259.413);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(19,5974.265);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(20,5989.829);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(21,3804.178);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(22,5312.935);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(23,3057.831);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(24,1258.675);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(25,2225.55);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(26,1392.366);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(27,436.8179);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(28,1023.333);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(29,158.7702);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(30,102.7489);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(31,176.232);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(1,1143.472);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(2,3593.878);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(3,4369.049);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(4,3611.66);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(5,3008.102);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(6,3903.482);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(7,2940.307);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(8,2629.099);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(9,1987.765);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(10,15070.62);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(11,2539.318);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(12,2157.772);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(13,14972.15);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(14,2262.994);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(15,1534.808);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(16,1200.335);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(17,969.4953);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(18,991.9059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(19,951.4348);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(20,1622.39);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(21,819.506);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(22,1894.42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(23,767.5091);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(24,303.1895);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(25,709.0738);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(26,476.4414);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(27,96.14082);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(28,467.6095);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(29,43.8832);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(30,47.53782);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(31,66.21093);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetEntries(29294);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(1,73.54229);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(2,313.2859);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(3,367.5979);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(4,324.9828);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(5,273.6193);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(6,241.6492);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(7,194.1615);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(8,152.7767);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(9,149.54);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(10,128.9575);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(11,112.9525);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(12,100.2351);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(13,93.56807);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(14,83.25671);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(15,70.64414);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(16,61.88615);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(17,53.90576);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(18,38.32381);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(19,32.46271);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(20,28.07044);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(21,19.36978);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(22,19.45161);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(23,16.24485);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(24,12.89091);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(25,8.016762);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(26,4.858645);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(27,4.259805);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(28,2.282751);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(29,1.913523);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(30,1.089476);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(31,1.573413);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(1,3.628707);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(2,7.064817);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(3,7.678666);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(4,7.063672);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(5,6.531104);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(6,6.256584);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(7,5.524025);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(8,4.836097);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(9,4.885561);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(10,4.516552);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(11,4.223325);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(12,3.936932);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(13,3.851612);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(14,3.673566);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(15,3.321652);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(16,3.196333);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(17,2.938278);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(18,2.482495);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(19,2.251822);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(20,2.151472);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(21,1.778412);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(22,1.8055);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(23,1.626361);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(24,1.533421);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(25,1.183722);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(26,0.8846446);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(27,0.8224093);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(28,0.6426191);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(29,0.5747743);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(30,0.4740685);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(31,0.49982);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetEntries(34591);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(1,938.7202);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(2,5076.369);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(3,6987.896);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(4,6763.35);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(5,5824.824);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(6,4742.978);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(7,3858.791);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(8,3278.4);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(9,2812.089);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(10,2491.541);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(11,2264.878);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(12,2072.156);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(13,1850.174);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(14,1634.26);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(15,1407.805);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(16,1206.52);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(17,959.9959);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(18,794.5404);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(19,647.4554);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(20,526.807);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(21,411.7255);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(22,316.5165);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(23,243.6417);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(24,187.8007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(25,139.8153);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(26,99.3388);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(27,67.42962);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(28,38.17298);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(29,30.62373);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(30,16.50261);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(31,32.99885);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(1,7.954074);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(2,18.47828);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(3,21.73121);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(4,21.37966);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(5,19.84614);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(6,17.90774);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(7,16.14749);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(8,14.88096);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(9,13.79467);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(10,12.99482);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(11,12.39008);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(12,11.85624);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(13,11.20354);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(14,10.52641);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(15,9.7779);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(16,9.047635);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(17,8.059138);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(18,7.335417);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(19,6.618263);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(20,5.968464);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(21,5.272552);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(22,4.629735);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(23,4.054949);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(24,3.546324);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(25,3.064989);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(26,2.582922);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(27,2.12951);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(28,1.591014);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(29,1.432831);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(30,1.057989);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(31,1.492316);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetEntries(880955);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(1,249.896);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(2,996.1616);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(3,1165.513);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(4,898.9266);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(5,674.9917);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(6,529.3281);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(7,418.224);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(8,365.1253);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(9,334.7221);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(10,285.9849);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(11,269.7579);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(12,248.4722);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(13,205.2158);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(14,188.5579);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(15,164.8231);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(16,129.3901);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(17,107.2584);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(18,99.61192);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(19,75.05739);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(20,70.05948);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(21,52.60846);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(22,41.35539);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(23,32.98184);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(24,21.53929);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(25,19.55772);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(26,16.29993);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(27,11.91735);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(28,6.053308);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(29,3.593195);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(30,1.866315);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(31,3.032877);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(1,5.611337);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(2,19.59707);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(3,23.17122);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(4,21.8641);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(5,20.53063);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(6,17.54984);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(7,14.57805);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(8,13.92389);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(9,14.77229);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(10,11.72548);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(11,13.23685);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(12,12.67309);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(13,8.954329);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(14,9.662263);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(15,8.920399);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(16,9.055761);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(17,6.221605);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(18,8.372873);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(19,6.591106);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(20,6.634047);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(21,4.643209);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(22,4.192638);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(23,5.388551);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(24,2.203736);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(25,3.01971);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(26,2.986577);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(27,2.811809);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(28,1.062151);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(29,0.8986582);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(30,0.6949694);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(31,0.8544856);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetEntries(50972);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(1,50.16104);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(2,143.1435);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(3,123.7339);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(4,78.61026);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(5,61.72323);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(6,44.00512);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(7,30.37547);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(8,29.16514);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(9,22.8222);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(10,29.27994);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(11,19.10314);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(12,21.23015);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(13,13.52229);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(14,16.34391);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(15,10.57893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(16,8.874402);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(17,13.85257);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(18,7.599889);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(19,8.807536);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(20,7.234804);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(21,3.779178);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(22,2.831064);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(23,6.199097);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(24,3.682365);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(25,1.739586);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(26,1.287722);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(27,0.8922139);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(28,0.7343065);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(29,1.156672);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(31,0.3365157);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(1,3.758155);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(2,10.30831);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(3,13.26782);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(4,11.2018);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(5,6.037146);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(6,3.902928);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(7,3.988239);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(8,3.991022);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(9,3.189005);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(10,4.573762);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(11,2.554651);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(12,3.749342);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(13,1.770307);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(14,3.46381);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(15,2.555476);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(16,1.590381);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(17,6.477874);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(18,2.263649);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(19,2.335283);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(20,2.466441);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(21,0.7379334);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(22,0.7167815);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(23,2.441468);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(24,1.380758);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(25,0.4856475);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(26,0.4868577);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(27,0.4431972);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(28,0.328897);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(29,0.578937);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(31,0.2716157);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetEntries(7669);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(3,0.7207813);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(4,0.7184138);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(6,0.7207813);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(7,0.7649811);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(8,0.586412);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(15,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(3,0.4903599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(4,0.3918968);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(5,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(6,0.4903599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(7,0.4657153);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(8,0.4715906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(15,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(1,0.5449062);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(2,1.296137);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(3,1.323893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(4,1.078175);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(5,0.3269437);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(6,0.5610239);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(7,0.8485743);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(8,0.5610239);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(9,0.2179625);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(10,0.4242871);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(11,0.3269437);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(12,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(15,0.6700051);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(17,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(24,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(1,0.2436895);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(2,0.4542136);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(3,0.547136);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(4,0.4272659);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(5,0.188761);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(6,0.4649941);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(7,0.4717938);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(8,0.4649941);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(9,0.1541227);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(10,0.3336086);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(11,0.188761);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(12,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(14,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(15,0.4775944);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(17,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(24,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(1,4.421894);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(2,19.24929);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(3,19.07305);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(4,19.22561);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(5,17.16337);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(6,9.306299);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(7,7.209661);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(8,8.224849);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(9,7.334453);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(10,6.035984);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(11,3.139596);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(12,5.694174);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(13,4.671253);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(14,4.733649);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(15,3.931613);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(16,3.656065);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(17,2.090486);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(18,1.561713);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(19,1.831109);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(20,0.7858656);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(22,0.53264);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(1,1.074195);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(2,2.24126);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(3,2.236746);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(4,2.254033);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(5,2.1167);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(6,1.554082);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(7,1.364654);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(8,1.456642);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(9,1.388534);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(10,1.260737);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(11,0.9079118);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(12,1.215942);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(13,1.103199);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(14,1.117998);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(15,1.017165);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(16,0.9785315);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(17,0.74087);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(18,0.6384858);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(19,0.6933707);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(20,0.4542233);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(22,0.3770883);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(24,0.3439469);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(25,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(1,3.932355);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(2,18.40287);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(3,22.28432);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(4,18.6158);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(5,14.02534);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(6,10.21202);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(7,7.7523);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(8,6.552697);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(9,6.251285);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(10,6.154056);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(11,5.998869);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(12,5.929761);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(13,5.055343);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(14,4.220553);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(15,3.291419);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(16,2.46026);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(17,1.874178);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(18,1.285869);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(19,0.9114858);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(20,0.6401186);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(21,0.5485543);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(22,0.4198434);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(23,0.4145629);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(24,0.2746703);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(25,0.2032162);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.1493077);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.08722185);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.05198667);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.01968876);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.005338921);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.005338921);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(1,0.0857805);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(2,0.1854867);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(3,0.2031403);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(4,0.1850293);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(5,0.1606434);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1373427);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(7,0.1194509);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1100561);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(9,0.1075761);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(10,0.1068855);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(11,0.105672);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(12,0.1052647);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(13,0.09680839);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(14,0.08876972);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(15,0.07803297);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(16,0.06743817);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(17,0.05933712);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(18,0.04864771);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(19,0.04136333);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(20,0.03492245);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(21,0.03158475);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(22,0.02781443);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(23,0.02781387);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(24,0.0229962);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(25,0.01922441);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(26,0.01689101);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(27,0.01286105);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(28,0.01020426);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(29,0.006076302);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(30,0.0031504);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(31,0.0031504);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetEntries(83441);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(1,1.669857);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(2,8.039189);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(3,10.70108);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(4,9.049062);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(5,6.826244);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(6,4.932733);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(7,3.589438);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(8,3.039222);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(9,2.762056);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(10,2.5041);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(11,2.403936);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(12,2.111676);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(13,1.863325);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(14,1.68495);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(15,1.370737);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(16,0.9865467);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(17,0.87815);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(18,0.6325425);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(19,0.5323785);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(20,0.375958);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(21,0.3402831);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(22,0.2689335);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(23,0.2113049);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.1577926);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.09879188);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.0864429);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.03704696);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.01783742);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.009604766);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.005488438);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.002744219);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(1,0.0283123);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(2,0.06212145);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(3,0.07167197);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(4,0.06590787);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(5,0.05724353);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(6,0.04866081);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(7,0.04150962);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(8,0.0381959);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(9,0.0364126);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(10,0.03467059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(11,0.03397011);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(12,0.03183825);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(13,0.02990747);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(14,0.02843996);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(15,0.02565149);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(16,0.02176177);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(17,0.02053146);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(18,0.0174253);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(19,0.01598622);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(20,0.01343399);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(21,0.01278073);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(22,0.01136208);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(23,0.01007141);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(24,0.008703196);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(25,0.006886461);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(26,0.006441695);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(27,0.004217079);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(28,0.002926183);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(29,0.002147232);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(30,0.001623154);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(31,0.001147744);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetEntries(146904);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(1,0.03766131);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(2,0.09480045);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(3,0.07271271);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.06481483);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.02178735);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.01851963);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.0138861);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.01629945);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.01273134);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.01209141);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.007883368);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.004315259);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(16,0.005255579);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.002627789);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(26,0.004315259);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(27,0.002627789);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(1,0.009394578);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(2,0.01458772);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(3,0.01270358);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(4,0.01239681);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(5,0.006800841);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(6,0.006378249);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(7,0.005810807);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(8,0.006286555);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(9,0.005364923);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(10,0.005488014);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(11,0.004551465);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(14,0.003158712);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(16,0.003716255);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(17,0.002627789);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(26,0.003158712);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(27,0.002627789);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetEntries(187);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(1,0.009326045);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(2,0.04125772);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(3,0.04286129);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(4,0.0282295);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(5,0.01331397);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(6,0.006940066);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(7,0.005395112);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(8,0.006951341);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(9,0.005844092);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(10,0.004323314);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(11,0.002559479);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(12,0.005752378);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(13,0.002893242);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(14,0.002501534);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(15,0.003043238);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(16,0.001106576);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(17,0.0009565794);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(18,0.001463842);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(19,0.002420421);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(20,0.001371791);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(21,0.0005072625);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(23,0.0005648715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(24,0.0008645283);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(25,0.0005648715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(1,0.001641095);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(2,0.003416256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(3,0.003449417);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(4,0.002891233);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(5,0.001956509);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(6,0.001398104);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(7,0.001235725);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(8,0.00139088);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(9,0.001334403);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(10,0.001069626);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(11,0.0008327465);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(12,0.001286334);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(13,0.0009334847);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(14,0.0008572663);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(15,0.0009362955);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(16,0.0005590015);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(17,0.0005542809);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(18,0.0006634166);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(19,0.0008644934);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(20,0.000627238);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(21,0.0003645467);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(23,0.0004132058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(24,0.0005104245);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(25,0.0004132058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all__153 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all__153","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(1,15873);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(2,64628);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(3,63350);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(4,50735);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(5,41653);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(6,33167);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(7,27315);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(8,23272);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(9,20134);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(10,17877);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(11,16449);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(12,15127);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(13,13527);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(14,12003);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(15,10722);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(16,9229);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(17,7681);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(18,6544);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(19,5342);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(20,4514);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(21,3664);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(22,2980);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(23,2454);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(24,1929);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(25,1384);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(26,1054);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(27,739);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(28,456);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(29,314);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(30,161);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(31,296);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetEntries(474602);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all__153->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fx1111[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fy1111[30] = {
   16510.8,
   79533.41,
   88772.75,
   69330.53,
   50405.58,
   47435.46,
   36376.32,
   32400.21,
   26397.36,
   41637.54,
   27599.51,
   19829.76,
   33297.85,
   20274.57,
   14568.88,
   10429.94,
   8254.815,
   7202.971,
   6741.327,
   6623.804,
   4292.804,
   5694.311,
   3357.804,
   1485.62,
   2395.228,
   1514.392,
   521.4441,
   1070.926,
   196.0866,
   122.2181};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fex1111[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fey1111[30] = {
   1143.526,
   3594.001,
   4369.192,
   3611.814,
   3008.252,
   3903.57,
   2940.395,
   2629.186,
   1987.877,
   15070.63,
   2539.388,
   2157.849,
   14972.16,
   2263.045,
   1534.871,
   1200.409,
   969.5751,
   991.9743,
   951.4864,
   1622.418,
   819.5384,
   1894.431,
   767.5444,
   303.2255,
   709.0881,
   476.4588,
   96.21004,
   467.614,
   43.92336,
   47.55704};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fx1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fy1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fex1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fey1111);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetMinimum(67.195);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetMaximum(102448.7);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__154 = new TH1D("data_mc_ratio__154","",30,0,6);
   data_mc_ratio__154->SetBinContent(1,0.9613706);
   data_mc_ratio__154->SetBinContent(2,0.8125894);
   data_mc_ratio__154->SetBinContent(3,0.7136199);
   data_mc_ratio__154->SetBinContent(4,0.7317844);
   data_mc_ratio__154->SetBinContent(5,0.8263569);
   data_mc_ratio__154->SetBinContent(6,0.6992027);
   data_mc_ratio__154->SetBinContent(7,0.7509005);
   data_mc_ratio__154->SetBinContent(8,0.7182669);
   data_mc_ratio__154->SetBinContent(9,0.7627278);
   data_mc_ratio__154->SetBinContent(10,0.4293481);
   data_mc_ratio__154->SetBinContent(11,0.5959889);
   data_mc_ratio__154->SetBinContent(12,0.7628434);
   data_mc_ratio__154->SetBinContent(13,0.4062424);
   data_mc_ratio__154->SetBinContent(14,0.5920225);
   data_mc_ratio__154->SetBinContent(15,0.7359521);
   data_mc_ratio__154->SetBinContent(16,0.8848564);
   data_mc_ratio__154->SetBinContent(17,0.9304872);
   data_mc_ratio__154->SetBinContent(18,0.908514);
   data_mc_ratio__154->SetBinContent(19,0.7924256);
   data_mc_ratio__154->SetBinContent(20,0.6814816);
   data_mc_ratio__154->SetBinContent(21,0.8535214);
   data_mc_ratio__154->SetBinContent(22,0.5233293);
   data_mc_ratio__154->SetBinContent(23,0.7308347);
   data_mc_ratio__154->SetBinContent(24,1.298448);
   data_mc_ratio__154->SetBinContent(25,0.5778156);
   data_mc_ratio__154->SetBinContent(26,0.6959891);
   data_mc_ratio__154->SetBinContent(27,1.417218);
   data_mc_ratio__154->SetBinContent(28,0.4257998);
   data_mc_ratio__154->SetBinContent(29,1.601333);
   data_mc_ratio__154->SetBinContent(30,1.317317);
   data_mc_ratio__154->SetBinContent(31,1.382004);
   data_mc_ratio__154->SetBinError(1,0.007630646);
   data_mc_ratio__154->SetBinError(2,0.003196397);
   data_mc_ratio__154->SetBinError(3,0.002835265);
   data_mc_ratio__154->SetBinError(4,0.003248847);
   data_mc_ratio__154->SetBinError(5,0.004048969);
   data_mc_ratio__154->SetBinError(6,0.003839282);
   data_mc_ratio__154->SetBinError(7,0.004543409);
   data_mc_ratio__154->SetBinError(8,0.004708353);
   data_mc_ratio__154->SetBinError(9,0.005375322);
   data_mc_ratio__154->SetBinError(10,0.003211162);
   data_mc_ratio__154->SetBinError(11,0.004646954);
   data_mc_ratio__154->SetBinError(12,0.006202389);
   data_mc_ratio__154->SetBinError(13,0.003492887);
   data_mc_ratio__154->SetBinError(14,0.005403726);
   data_mc_ratio__154->SetBinError(15,0.007107414);
   data_mc_ratio__154->SetBinError(16,0.00921076);
   data_mc_ratio__154->SetBinError(17,0.01061699);
   data_mc_ratio__154->SetBinError(18,0.01123078);
   data_mc_ratio__154->SetBinError(19,0.01084193);
   data_mc_ratio__154->SetBinError(20,0.01014316);
   data_mc_ratio__154->SetBinError(21,0.01410057);
   data_mc_ratio__154->SetBinError(22,0.009586651);
   data_mc_ratio__154->SetBinError(23,0.01475305);
   data_mc_ratio__154->SetBinError(24,0.02956367);
   data_mc_ratio__154->SetBinError(25,0.01553178);
   data_mc_ratio__154->SetBinError(26,0.02143789);
   data_mc_ratio__154->SetBinError(27,0.05213321);
   data_mc_ratio__154->SetBinError(28,0.0199399);
   data_mc_ratio__154->SetBinError(29,0.09036845);
   data_mc_ratio__154->SetBinError(30,0.1038191);
   data_mc_ratio__154->SetBinError(31,0.4348678);
   data_mc_ratio__154->SetMinimum(0.4);
   data_mc_ratio__154->SetMaximum(1.6);
   data_mc_ratio__154->SetEntries(624.956);
   data_mc_ratio__154->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__154->SetLineColor(ci);
   data_mc_ratio__154->SetLineWidth(2);
   data_mc_ratio__154->SetMarkerStyle(20);
   data_mc_ratio__154->SetMarkerSize(1.2);
   data_mc_ratio__154->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__154->GetXaxis()->SetRange(1,30);
   data_mc_ratio__154->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__154->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__154->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__154->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__154->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__154->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__154->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__154->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__154->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__154->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__154->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__154->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__154->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__154->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__154->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__154->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__154->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1112[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1112[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1112[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1112[30] = {
   0.06925928,
   0.04518858,
   0.04921772,
   0.05209558,
   0.05968092,
   0.08229224,
   0.08083267,
   0.08114719,
   0.07530588,
   0.3619482,
   0.09200843,
   0.1088187,
   0.4496434,
   0.1116199,
   0.1053527,
   0.1150926,
   0.1174557,
   0.1377174,
   0.1411423,
   0.2449375,
   0.1909098,
   0.3326884,
   0.2285852,
   0.204107,
   0.296042,
   0.3146206,
   0.1845069,
   0.4366446,
   0.2239997,
   0.389116};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1112,Graph_from_mc_statistical_error_fy1112,Graph_from_mc_statistical_error_fex1112,Graph_from_mc_statistical_error_fey1112);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1112 = new TH1F("Graph_Graph_from_mc_statistical_error1112","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1112->SetMinimum(0.4604279);
   Graph_Graph_from_mc_statistical_error1112->SetMaximum(1.539572);
   Graph_Graph_from_mc_statistical_error1112->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1112->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1112->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1112);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_all->cd();
   Z_dR_Bj1_tags_all->Modified();
   Z_dR_Bj1_tags_all->cd();
   Z_dR_Bj1_tags_all->SetSelected(Z_dR_Bj1_tags_all);
}
