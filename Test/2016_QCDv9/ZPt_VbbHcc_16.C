void ZPt_VbbHcc_16()
{
//=========Macro generated from canvas: ZPt_VbbHcc_16/ZPt_VbbHcc_16
//=========  (Tue Sep 20 13:13:09 2022) by ROOT version 6.14/09
   TCanvas *ZPt_VbbHcc_16 = new TCanvas("ZPt_VbbHcc_16", "ZPt_VbbHcc_16",0,0,600,600);
   ZPt_VbbHcc_16->SetHighLightColor(2);
   ZPt_VbbHcc_16->Range(0,0,1,1);
   ZPt_VbbHcc_16->SetFillColor(0);
   ZPt_VbbHcc_16->SetFillStyle(4000);
   ZPt_VbbHcc_16->SetBorderMode(0);
   ZPt_VbbHcc_16->SetBorderSize(2);
   ZPt_VbbHcc_16->SetFrameFillStyle(1000);
   ZPt_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-523.7327,1562.903,523218.9);
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
   st->SetMinimum(0.01);
   st->SetMaximum(448423.5);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",40,0,2000);
   st_stack_9->SetMinimum(0.01);
   st_stack_9->SetMaximum(470844.6);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetRange(7,30);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetLabelSize(0.035);
   st_stack_9->GetXaxis()->SetTitleSize(0.035);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/50.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetLabelSize(0.05);
   st_stack_9->GetYaxis()->SetTitleSize(0.057);
   st_stack_9->GetYaxis()->SetTitleOffset(1.2);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetLabelSize(0.035);
   st_stack_9->GetZaxis()->SetTitleSize(0.035);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_ZPt_stack_1 = new TH1D("VbbHcc_ZPt_stack_1","",40,0,2000);
   VbbHcc_ZPt_stack_1->SetBinContent(2,149009.1);
   VbbHcc_ZPt_stack_1->SetBinContent(3,176138.9);
   VbbHcc_ZPt_stack_1->SetBinContent(4,120948.7);
   VbbHcc_ZPt_stack_1->SetBinContent(5,43136.02);
   VbbHcc_ZPt_stack_1->SetBinContent(6,17216.26);
   VbbHcc_ZPt_stack_1->SetBinContent(7,8362.805);
   VbbHcc_ZPt_stack_1->SetBinContent(8,4060.128);
   VbbHcc_ZPt_stack_1->SetBinContent(9,2015.499);
   VbbHcc_ZPt_stack_1->SetBinContent(10,1169.49);
   VbbHcc_ZPt_stack_1->SetBinContent(11,551.8305);
   VbbHcc_ZPt_stack_1->SetBinContent(12,336.9747);
   VbbHcc_ZPt_stack_1->SetBinContent(13,263.7955);
   VbbHcc_ZPt_stack_1->SetBinContent(14,146.1102);
   VbbHcc_ZPt_stack_1->SetBinContent(15,79.53436);
   VbbHcc_ZPt_stack_1->SetBinContent(16,59.4006);
   VbbHcc_ZPt_stack_1->SetBinContent(17,43.89633);
   VbbHcc_ZPt_stack_1->SetBinContent(18,23.50247);
   VbbHcc_ZPt_stack_1->SetBinContent(19,25.47414);
   VbbHcc_ZPt_stack_1->SetBinContent(20,10.32282);
   VbbHcc_ZPt_stack_1->SetBinContent(21,8.84387);
   VbbHcc_ZPt_stack_1->SetBinContent(22,5.832146);
   VbbHcc_ZPt_stack_1->SetBinContent(23,5.002729);
   VbbHcc_ZPt_stack_1->SetBinContent(24,2.457977);
   VbbHcc_ZPt_stack_1->SetBinContent(25,2.570805);
   VbbHcc_ZPt_stack_1->SetBinContent(26,1.626237);
   VbbHcc_ZPt_stack_1->SetBinContent(27,0.6725028);
   VbbHcc_ZPt_stack_1->SetBinContent(28,0.6976215);
   VbbHcc_ZPt_stack_1->SetBinContent(29,1.052389);
   VbbHcc_ZPt_stack_1->SetBinContent(30,0.8272454);
   VbbHcc_ZPt_stack_1->SetBinContent(32,0.4015297);
   VbbHcc_ZPt_stack_1->SetBinContent(33,0.2567959);
   VbbHcc_ZPt_stack_1->SetBinContent(37,0.2212758);
   VbbHcc_ZPt_stack_1->SetBinError(2,6208.578);
   VbbHcc_ZPt_stack_1->SetBinError(3,6653.598);
   VbbHcc_ZPt_stack_1->SetBinError(4,5230.214);
   VbbHcc_ZPt_stack_1->SetBinError(5,2323.762);
   VbbHcc_ZPt_stack_1->SetBinError(6,779.9649);
   VbbHcc_ZPt_stack_1->SetBinError(7,324.9748);
   VbbHcc_ZPt_stack_1->SetBinError(8,164.2025);
   VbbHcc_ZPt_stack_1->SetBinError(9,103.6872);
   VbbHcc_ZPt_stack_1->SetBinError(10,73.09179);
   VbbHcc_ZPt_stack_1->SetBinError(11,41.55469);
   VbbHcc_ZPt_stack_1->SetBinError(12,30.26492);
   VbbHcc_ZPt_stack_1->SetBinError(13,25.00862);
   VbbHcc_ZPt_stack_1->SetBinError(14,16.32334);
   VbbHcc_ZPt_stack_1->SetBinError(15,8.737329);
   VbbHcc_ZPt_stack_1->SetBinError(16,5.681175);
   VbbHcc_ZPt_stack_1->SetBinError(17,6.133236);
   VbbHcc_ZPt_stack_1->SetBinError(18,3.018207);
   VbbHcc_ZPt_stack_1->SetBinError(19,2.986811);
   VbbHcc_ZPt_stack_1->SetBinError(20,1.621424);
   VbbHcc_ZPt_stack_1->SetBinError(21,1.379913);
   VbbHcc_ZPt_stack_1->SetBinError(22,1.084329);
   VbbHcc_ZPt_stack_1->SetBinError(23,1.003784);
   VbbHcc_ZPt_stack_1->SetBinError(24,0.6911355);
   VbbHcc_ZPt_stack_1->SetBinError(25,0.7140827);
   VbbHcc_ZPt_stack_1->SetBinError(26,0.561687);
   VbbHcc_ZPt_stack_1->SetBinError(27,0.3473418);
   VbbHcc_ZPt_stack_1->SetBinError(28,0.3654602);
   VbbHcc_ZPt_stack_1->SetBinError(29,0.4712049);
   VbbHcc_ZPt_stack_1->SetBinError(30,0.4141872);
   VbbHcc_ZPt_stack_1->SetBinError(32,0.2840282);
   VbbHcc_ZPt_stack_1->SetBinError(33,0.2073514);
   VbbHcc_ZPt_stack_1->SetBinError(37,0.2212758);
   VbbHcc_ZPt_stack_1->SetEntries(15068);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_ZPt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_1->SetLineColor(ci);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_1,"");
   
   TH1D *VbbHcc_ZPt_stack_2 = new TH1D("VbbHcc_ZPt_stack_2","",40,0,2000);
   VbbHcc_ZPt_stack_2->SetBinContent(2,1413.095);
   VbbHcc_ZPt_stack_2->SetBinContent(3,1201.145);
   VbbHcc_ZPt_stack_2->SetBinContent(4,613.2833);
   VbbHcc_ZPt_stack_2->SetBinContent(5,312.9709);
   VbbHcc_ZPt_stack_2->SetBinContent(6,185.3188);
   VbbHcc_ZPt_stack_2->SetBinContent(7,104.033);
   VbbHcc_ZPt_stack_2->SetBinContent(8,64.29484);
   VbbHcc_ZPt_stack_2->SetBinContent(9,35.26128);
   VbbHcc_ZPt_stack_2->SetBinContent(10,19.45642);
   VbbHcc_ZPt_stack_2->SetBinContent(11,14.24563);
   VbbHcc_ZPt_stack_2->SetBinContent(12,8.403976);
   VbbHcc_ZPt_stack_2->SetBinContent(13,8.004426);
   VbbHcc_ZPt_stack_2->SetBinContent(14,3.551584);
   VbbHcc_ZPt_stack_2->SetBinContent(15,3.542404);
   VbbHcc_ZPt_stack_2->SetBinContent(16,2.113123);
   VbbHcc_ZPt_stack_2->SetBinContent(17,1.285493);
   VbbHcc_ZPt_stack_2->SetBinContent(18,0.1334914);
   VbbHcc_ZPt_stack_2->SetBinContent(19,0.6156535);
   VbbHcc_ZPt_stack_2->SetBinContent(20,0.612913);
   VbbHcc_ZPt_stack_2->SetBinContent(21,0.5224816);
   VbbHcc_ZPt_stack_2->SetBinContent(22,0.2775882);
   VbbHcc_ZPt_stack_2->SetBinContent(23,0.598142);
   VbbHcc_ZPt_stack_2->SetBinError(2,15.06601);
   VbbHcc_ZPt_stack_2->SetBinError(3,14.53572);
   VbbHcc_ZPt_stack_2->SetBinError(4,10.7003);
   VbbHcc_ZPt_stack_2->SetBinError(5,7.935197);
   VbbHcc_ZPt_stack_2->SetBinError(6,6.267091);
   VbbHcc_ZPt_stack_2->SetBinError(7,4.70405);
   VbbHcc_ZPt_stack_2->SetBinError(8,3.760679);
   VbbHcc_ZPt_stack_2->SetBinError(9,2.88808);
   VbbHcc_ZPt_stack_2->SetBinError(10,2.120918);
   VbbHcc_ZPt_stack_2->SetBinError(11,1.833718);
   VbbHcc_ZPt_stack_2->SetBinError(12,1.385125);
   VbbHcc_ZPt_stack_2->SetBinError(13,1.435672);
   VbbHcc_ZPt_stack_2->SetBinError(14,0.9331939);
   VbbHcc_ZPt_stack_2->SetBinError(15,0.9680314);
   VbbHcc_ZPt_stack_2->SetBinError(16,0.6644444);
   VbbHcc_ZPt_stack_2->SetBinError(17,0.6195443);
   VbbHcc_ZPt_stack_2->SetBinError(18,0.3971782);
   VbbHcc_ZPt_stack_2->SetBinError(19,0.4099866);
   VbbHcc_ZPt_stack_2->SetBinError(20,0.4020199);
   VbbHcc_ZPt_stack_2->SetBinError(21,0.3696193);
   VbbHcc_ZPt_stack_2->SetBinError(22,0.2775882);
   VbbHcc_ZPt_stack_2->SetBinError(23,0.4577213);
   VbbHcc_ZPt_stack_2->SetEntries(54400);

   ci = TColor::GetColor("#660066");
   VbbHcc_ZPt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_2->SetLineColor(ci);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_2,"");
   
   TH1D *VbbHcc_ZPt_stack_3 = new TH1D("VbbHcc_ZPt_stack_3","",40,0,2000);
   VbbHcc_ZPt_stack_3->SetBinContent(2,27805.7);
   VbbHcc_ZPt_stack_3->SetBinContent(3,23217.79);
   VbbHcc_ZPt_stack_3->SetBinContent(4,8516.474);
   VbbHcc_ZPt_stack_3->SetBinContent(5,3474.627);
   VbbHcc_ZPt_stack_3->SetBinContent(6,1632.823);
   VbbHcc_ZPt_stack_3->SetBinContent(7,852.3503);
   VbbHcc_ZPt_stack_3->SetBinContent(8,473.4662);
   VbbHcc_ZPt_stack_3->SetBinContent(9,271.8343);
   VbbHcc_ZPt_stack_3->SetBinContent(10,168.834);
   VbbHcc_ZPt_stack_3->SetBinContent(11,108.333);
   VbbHcc_ZPt_stack_3->SetBinContent(12,72.65161);
   VbbHcc_ZPt_stack_3->SetBinContent(13,44.71163);
   VbbHcc_ZPt_stack_3->SetBinContent(14,29.70074);
   VbbHcc_ZPt_stack_3->SetBinContent(15,19.81961);
   VbbHcc_ZPt_stack_3->SetBinContent(16,11.63653);
   VbbHcc_ZPt_stack_3->SetBinContent(17,9.712683);
   VbbHcc_ZPt_stack_3->SetBinContent(18,4.375706);
   VbbHcc_ZPt_stack_3->SetBinContent(19,3.213038);
   VbbHcc_ZPt_stack_3->SetBinContent(20,2.667285);
   VbbHcc_ZPt_stack_3->SetBinContent(21,2.04067);
   VbbHcc_ZPt_stack_3->SetBinContent(22,1.557969);
   VbbHcc_ZPt_stack_3->SetBinContent(23,0.6204415);
   VbbHcc_ZPt_stack_3->SetBinContent(24,0.8076881);
   VbbHcc_ZPt_stack_3->SetBinContent(25,0.369412);
   VbbHcc_ZPt_stack_3->SetBinContent(26,0.2207845);
   VbbHcc_ZPt_stack_3->SetBinContent(27,0.1926303);
   VbbHcc_ZPt_stack_3->SetBinContent(29,0.1825585);
   VbbHcc_ZPt_stack_3->SetBinContent(30,0.0704653);
   VbbHcc_ZPt_stack_3->SetBinContent(32,0.0783976);
   VbbHcc_ZPt_stack_3->SetBinContent(33,0.07048946);
   VbbHcc_ZPt_stack_3->SetBinContent(34,0.07831331);
   VbbHcc_ZPt_stack_3->SetBinContent(36,0.07108777);
   VbbHcc_ZPt_stack_3->SetBinError(2,43.38413);
   VbbHcc_ZPt_stack_3->SetBinError(3,39.57082);
   VbbHcc_ZPt_stack_3->SetBinError(4,23.80777);
   VbbHcc_ZPt_stack_3->SetBinError(5,15.17916);
   VbbHcc_ZPt_stack_3->SetBinError(6,10.41308);
   VbbHcc_ZPt_stack_3->SetBinError(7,7.536204);
   VbbHcc_ZPt_stack_3->SetBinError(8,5.633641);
   VbbHcc_ZPt_stack_3->SetBinError(9,4.28193);
   VbbHcc_ZPt_stack_3->SetBinError(10,3.380173);
   VbbHcc_ZPt_stack_3->SetBinError(11,2.735899);
   VbbHcc_ZPt_stack_3->SetBinError(12,2.255124);
   VbbHcc_ZPt_stack_3->SetBinError(13,1.754577);
   VbbHcc_ZPt_stack_3->SetBinError(14,1.447914);
   VbbHcc_ZPt_stack_3->SetBinError(15,1.169838);
   VbbHcc_ZPt_stack_3->SetBinError(16,0.9018226);
   VbbHcc_ZPt_stack_3->SetBinError(17,0.8176139);
   VbbHcc_ZPt_stack_3->SetBinError(18,0.5531438);
   VbbHcc_ZPt_stack_3->SetBinError(19,0.472428);
   VbbHcc_ZPt_stack_3->SetBinError(20,0.4451929);
   VbbHcc_ZPt_stack_3->SetBinError(21,0.3891589);
   VbbHcc_ZPt_stack_3->SetBinError(22,0.3234016);
   VbbHcc_ZPt_stack_3->SetBinError(23,0.1995169);
   VbbHcc_ZPt_stack_3->SetBinError(24,0.2443412);
   VbbHcc_ZPt_stack_3->SetBinError(25,0.1555976);
   VbbHcc_ZPt_stack_3->SetBinError(26,0.1276633);
   VbbHcc_ZPt_stack_3->SetBinError(27,0.1125671);
   VbbHcc_ZPt_stack_3->SetBinError(29,0.1069475);
   VbbHcc_ZPt_stack_3->SetBinError(30,0.0704653);
   VbbHcc_ZPt_stack_3->SetBinError(32,0.0783976);
   VbbHcc_ZPt_stack_3->SetBinError(33,0.07048946);
   VbbHcc_ZPt_stack_3->SetBinError(34,0.07831331);
   VbbHcc_ZPt_stack_3->SetBinError(36,0.07108777);
   VbbHcc_ZPt_stack_3->SetEntries(1044436);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_ZPt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_3->SetLineColor(ci);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_3,"");
   
   TH1D *VbbHcc_ZPt_stack_4 = new TH1D("VbbHcc_ZPt_stack_4","",40,0,2000);
   VbbHcc_ZPt_stack_4->SetBinContent(2,722.9777);
   VbbHcc_ZPt_stack_4->SetBinContent(3,977.8915);
   VbbHcc_ZPt_stack_4->SetBinContent(4,832.051);
   VbbHcc_ZPt_stack_4->SetBinContent(5,498.5525);
   VbbHcc_ZPt_stack_4->SetBinContent(6,253.3034);
   VbbHcc_ZPt_stack_4->SetBinContent(7,147.5909);
   VbbHcc_ZPt_stack_4->SetBinContent(8,83.63283);
   VbbHcc_ZPt_stack_4->SetBinContent(9,46.943);
   VbbHcc_ZPt_stack_4->SetBinContent(10,27.56868);
   VbbHcc_ZPt_stack_4->SetBinContent(11,14.80291);
   VbbHcc_ZPt_stack_4->SetBinContent(12,9.300956);
   VbbHcc_ZPt_stack_4->SetBinContent(13,6.723416);
   VbbHcc_ZPt_stack_4->SetBinContent(14,3.300776);
   VbbHcc_ZPt_stack_4->SetBinContent(15,3.383678);
   VbbHcc_ZPt_stack_4->SetBinContent(16,1.843471);
   VbbHcc_ZPt_stack_4->SetBinContent(17,1.357516);
   VbbHcc_ZPt_stack_4->SetBinContent(18,1.143159);
   VbbHcc_ZPt_stack_4->SetBinContent(19,0.5984602);
   VbbHcc_ZPt_stack_4->SetBinContent(20,0.6951706);
   VbbHcc_ZPt_stack_4->SetBinContent(21,0.3414097);
   VbbHcc_ZPt_stack_4->SetBinContent(22,0.343112);
   VbbHcc_ZPt_stack_4->SetBinContent(23,0.2231072);
   VbbHcc_ZPt_stack_4->SetBinContent(24,0.07382862);
   VbbHcc_ZPt_stack_4->SetBinContent(25,0.07132427);
   VbbHcc_ZPt_stack_4->SetBinContent(32,0.07124748);
   VbbHcc_ZPt_stack_4->SetBinError(2,13.6588);
   VbbHcc_ZPt_stack_4->SetBinError(3,15.75292);
   VbbHcc_ZPt_stack_4->SetBinError(4,14.01045);
   VbbHcc_ZPt_stack_4->SetBinError(5,9.784354);
   VbbHcc_ZPt_stack_4->SetBinError(6,5.578885);
   VbbHcc_ZPt_stack_4->SetBinError(7,3.583405);
   VbbHcc_ZPt_stack_4->SetBinError(8,2.498148);
   VbbHcc_ZPt_stack_4->SetBinError(9,1.832408);
   VbbHcc_ZPt_stack_4->SetBinError(10,1.403575);
   VbbHcc_ZPt_stack_4->SetBinError(11,1.028502);
   VbbHcc_ZPt_stack_4->SetBinError(12,0.8091182);
   VbbHcc_ZPt_stack_4->SetBinError(13,0.6967939);
   VbbHcc_ZPt_stack_4->SetBinError(14,0.487407);
   VbbHcc_ZPt_stack_4->SetBinError(15,0.4946413);
   VbbHcc_ZPt_stack_4->SetBinError(16,0.3639027);
   VbbHcc_ZPt_stack_4->SetBinError(17,0.3082893);
   VbbHcc_ZPt_stack_4->SetBinError(18,0.2862407);
   VbbHcc_ZPt_stack_4->SetBinError(19,0.2119165);
   VbbHcc_ZPt_stack_4->SetBinError(20,0.2200636);
   VbbHcc_ZPt_stack_4->SetBinError(21,0.1527155);
   VbbHcc_ZPt_stack_4->SetBinError(22,0.1554774);
   VbbHcc_ZPt_stack_4->SetBinError(23,0.1289429);
   VbbHcc_ZPt_stack_4->SetBinError(24,0.07382862);
   VbbHcc_ZPt_stack_4->SetBinError(25,0.07132427);
   VbbHcc_ZPt_stack_4->SetBinError(32,0.07124748);
   VbbHcc_ZPt_stack_4->SetEntries(25079);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_ZPt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_4->SetLineColor(ci);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_4,"");
   
   TH1D *VbbHcc_ZPt_stack_5 = new TH1D("VbbHcc_ZPt_stack_5","",40,0,2000);
   VbbHcc_ZPt_stack_5->SetBinContent(2,131.0809);
   VbbHcc_ZPt_stack_5->SetBinContent(3,178.9091);
   VbbHcc_ZPt_stack_5->SetBinContent(4,180.6068);
   VbbHcc_ZPt_stack_5->SetBinContent(5,127.594);
   VbbHcc_ZPt_stack_5->SetBinContent(6,81.48207);
   VbbHcc_ZPt_stack_5->SetBinContent(7,45.43755);
   VbbHcc_ZPt_stack_5->SetBinContent(8,34.60579);
   VbbHcc_ZPt_stack_5->SetBinContent(9,18.70491);
   VbbHcc_ZPt_stack_5->SetBinContent(10,11.68573);
   VbbHcc_ZPt_stack_5->SetBinContent(11,8.030461);
   VbbHcc_ZPt_stack_5->SetBinContent(12,5.636936);
   VbbHcc_ZPt_stack_5->SetBinContent(13,4.33084);
   VbbHcc_ZPt_stack_5->SetBinContent(14,2.655078);
   VbbHcc_ZPt_stack_5->SetBinContent(15,1.896831);
   VbbHcc_ZPt_stack_5->SetBinContent(16,1.076154);
   VbbHcc_ZPt_stack_5->SetBinContent(17,0.6578009);
   VbbHcc_ZPt_stack_5->SetBinContent(18,0.4288789);
   VbbHcc_ZPt_stack_5->SetBinContent(19,0.4930578);
   VbbHcc_ZPt_stack_5->SetBinContent(20,0.3747303);
   VbbHcc_ZPt_stack_5->SetBinContent(21,0.4323956);
   VbbHcc_ZPt_stack_5->SetBinContent(22,0.2400653);
   VbbHcc_ZPt_stack_5->SetBinContent(23,0.002154169);
   VbbHcc_ZPt_stack_5->SetBinContent(24,0.01046605);
   VbbHcc_ZPt_stack_5->SetBinContent(25,0.002349128);
   VbbHcc_ZPt_stack_5->SetBinContent(26,0.01081229);
   VbbHcc_ZPt_stack_5->SetBinContent(27,0.07647017);
   VbbHcc_ZPt_stack_5->SetBinContent(28,0.001385031);
   VbbHcc_ZPt_stack_5->SetBinContent(29,0.07936559);
   VbbHcc_ZPt_stack_5->SetBinContent(30,0.07353698);
   VbbHcc_ZPt_stack_5->SetBinContent(31,0.000513045);
   VbbHcc_ZPt_stack_5->SetBinContent(32,0.0002936857);
   VbbHcc_ZPt_stack_5->SetBinContent(33,0.0003192392);
   VbbHcc_ZPt_stack_5->SetBinContent(34,0.0002744139);
   VbbHcc_ZPt_stack_5->SetBinContent(35,0.0002250668);
   VbbHcc_ZPt_stack_5->SetBinContent(36,0.07098479);
   VbbHcc_ZPt_stack_5->SetBinContent(37,6.696294e-05);
   VbbHcc_ZPt_stack_5->SetBinContent(38,0.0001410359);
   VbbHcc_ZPt_stack_5->SetBinContent(40,0.0001292354);
   VbbHcc_ZPt_stack_5->SetBinContent(41,0.0002172904);
   VbbHcc_ZPt_stack_5->SetBinError(2,10.06364);
   VbbHcc_ZPt_stack_5->SetBinError(3,11.52372);
   VbbHcc_ZPt_stack_5->SetBinError(4,11.78081);
   VbbHcc_ZPt_stack_5->SetBinError(5,8.445925);
   VbbHcc_ZPt_stack_5->SetBinError(6,5.012514);
   VbbHcc_ZPt_stack_5->SetBinError(7,2.162611);
   VbbHcc_ZPt_stack_5->SetBinError(8,1.826527);
   VbbHcc_ZPt_stack_5->SetBinError(9,1.186149);
   VbbHcc_ZPt_stack_5->SetBinError(10,0.8992726);
   VbbHcc_ZPt_stack_5->SetBinError(11,0.7496246);
   VbbHcc_ZPt_stack_5->SetBinError(12,0.6162398);
   VbbHcc_ZPt_stack_5->SetBinError(13,0.5413149);
   VbbHcc_ZPt_stack_5->SetBinError(14,0.4201001);
   VbbHcc_ZPt_stack_5->SetBinError(15,0.362603);
   VbbHcc_ZPt_stack_5->SetBinError(16,0.2639262);
   VbbHcc_ZPt_stack_5->SetBinError(17,0.1900528);
   VbbHcc_ZPt_stack_5->SetBinError(18,0.1576448);
   VbbHcc_ZPt_stack_5->SetBinError(19,0.1604833);
   VbbHcc_ZPt_stack_5->SetBinError(20,0.1531124);
   VbbHcc_ZPt_stack_5->SetBinError(21,0.1715623);
   VbbHcc_ZPt_stack_5->SetBinError(22,0.1331192);
   VbbHcc_ZPt_stack_5->SetBinError(23,0.0003773832);
   VbbHcc_ZPt_stack_5->SetBinError(24,0.008065197);
   VbbHcc_ZPt_stack_5->SetBinError(25,0.0003976829);
   VbbHcc_ZPt_stack_5->SetBinError(26,0.008181655);
   VbbHcc_ZPt_stack_5->SetBinError(27,0.07518201);
   VbbHcc_ZPt_stack_5->SetBinError(28,0.0003035397);
   VbbHcc_ZPt_stack_5->SetBinError(29,0.07869986);
   VbbHcc_ZPt_stack_5->SetBinError(30,0.07309188);
   VbbHcc_ZPt_stack_5->SetBinError(31,0.0001821175);
   VbbHcc_ZPt_stack_5->SetBinError(32,0.0001391898);
   VbbHcc_ZPt_stack_5->SetBinError(33,0.0001429573);
   VbbHcc_ZPt_stack_5->SetBinError(34,0.0001373586);
   VbbHcc_ZPt_stack_5->SetBinError(35,0.0001186238);
   VbbHcc_ZPt_stack_5->SetBinError(36,0.07091053);
   VbbHcc_ZPt_stack_5->SetBinError(37,6.696294e-05);
   VbbHcc_ZPt_stack_5->SetBinError(38,9.984086e-05);
   VbbHcc_ZPt_stack_5->SetBinError(40,9.139632e-05);
   VbbHcc_ZPt_stack_5->SetBinError(41,0.0001255323);
   VbbHcc_ZPt_stack_5->SetEntries(6309);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_ZPt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_5->SetLineColor(ci);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_5,"");
   
   TH1D *VbbHcc_ZPt_stack_6 = new TH1D("VbbHcc_ZPt_stack_6","",40,0,2000);
   VbbHcc_ZPt_stack_6->SetBinContent(2,3.648601);
   VbbHcc_ZPt_stack_6->SetBinContent(3,2.183655);
   VbbHcc_ZPt_stack_6->SetBinContent(4,2.223415);
   VbbHcc_ZPt_stack_6->SetBinContent(5,0.7435788);
   VbbHcc_ZPt_stack_6->SetBinContent(6,0.3649094);
   VbbHcc_ZPt_stack_6->SetBinContent(7,0.4746466);
   VbbHcc_ZPt_stack_6->SetBinContent(8,0.08737425);
   VbbHcc_ZPt_stack_6->SetBinContent(9,0.1796589);
   VbbHcc_ZPt_stack_6->SetBinContent(11,0.09409418);
   VbbHcc_ZPt_stack_6->SetBinContent(13,0.1032462);
   VbbHcc_ZPt_stack_6->SetBinError(2,0.5877278);
   VbbHcc_ZPt_stack_6->SetBinError(3,0.4504255);
   VbbHcc_ZPt_stack_6->SetBinError(4,0.454403);
   VbbHcc_ZPt_stack_6->SetBinError(5,0.2646915);
   VbbHcc_ZPt_stack_6->SetBinError(6,0.183866);
   VbbHcc_ZPt_stack_6->SetBinError(7,0.2125217);
   VbbHcc_ZPt_stack_6->SetBinError(8,0.08737425);
   VbbHcc_ZPt_stack_6->SetBinError(9,0.1270477);
   VbbHcc_ZPt_stack_6->SetBinError(11,0.09409418);
   VbbHcc_ZPt_stack_6->SetBinError(13,0.1032462);
   VbbHcc_ZPt_stack_6->SetEntries(110);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_ZPt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_6->SetLineColor(ci);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_6,"");
   
   TH1D *VbbHcc_ZPt_stack_7 = new TH1D("VbbHcc_ZPt_stack_7","",40,0,2000);
   VbbHcc_ZPt_stack_7->SetBinContent(2,10.48876);
   VbbHcc_ZPt_stack_7->SetBinContent(3,7.542249);
   VbbHcc_ZPt_stack_7->SetBinContent(4,4.937653);
   VbbHcc_ZPt_stack_7->SetBinContent(5,2.396394);
   VbbHcc_ZPt_stack_7->SetBinContent(6,1.379092);
   VbbHcc_ZPt_stack_7->SetBinContent(7,0.9674281);
   VbbHcc_ZPt_stack_7->SetBinContent(8,0.6219418);
   VbbHcc_ZPt_stack_7->SetBinContent(9,0.2596664);
   VbbHcc_ZPt_stack_7->SetBinContent(10,0.07695288);
   VbbHcc_ZPt_stack_7->SetBinContent(11,0.06205532);
   VbbHcc_ZPt_stack_7->SetBinContent(16,0.06777254);
   VbbHcc_ZPt_stack_7->SetBinError(2,0.8498587);
   VbbHcc_ZPt_stack_7->SetBinError(3,0.7218697);
   VbbHcc_ZPt_stack_7->SetBinError(4,0.5805966);
   VbbHcc_ZPt_stack_7->SetBinError(5,0.4011895);
   VbbHcc_ZPt_stack_7->SetBinError(6,0.3046203);
   VbbHcc_ZPt_stack_7->SetBinError(7,0.2592508);
   VbbHcc_ZPt_stack_7->SetBinError(8,0.2082899);
   VbbHcc_ZPt_stack_7->SetBinError(9,0.129947);
   VbbHcc_ZPt_stack_7->SetBinError(10,0.07695288);
   VbbHcc_ZPt_stack_7->SetBinError(11,0.06205532);
   VbbHcc_ZPt_stack_7->SetBinError(16,0.06777254);
   VbbHcc_ZPt_stack_7->SetEntries(424);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_ZPt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_7->SetLineColor(ci);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_7,"");
   
   TH1D *VbbHcc_ZPt_stack_8 = new TH1D("VbbHcc_ZPt_stack_8","",40,0,2000);
   VbbHcc_ZPt_stack_8->SetBinContent(2,77.03739);
   VbbHcc_ZPt_stack_8->SetBinContent(3,31.61335);
   VbbHcc_ZPt_stack_8->SetBinContent(4,15.25854);
   VbbHcc_ZPt_stack_8->SetBinContent(5,5.909724);
   VbbHcc_ZPt_stack_8->SetBinContent(6,2.749815);
   VbbHcc_ZPt_stack_8->SetBinContent(7,2.989902);
   VbbHcc_ZPt_stack_8->SetBinContent(8,0.4900471);
   VbbHcc_ZPt_stack_8->SetBinContent(9,0.3806315);
   VbbHcc_ZPt_stack_8->SetBinContent(10,0.5550379);
   VbbHcc_ZPt_stack_8->SetBinContent(13,0.2155566);
   VbbHcc_ZPt_stack_8->SetBinError(2,3.872284);
   VbbHcc_ZPt_stack_8->SetBinError(3,2.475438);
   VbbHcc_ZPt_stack_8->SetBinError(4,1.723222);
   VbbHcc_ZPt_stack_8->SetBinError(5,1.080865);
   VbbHcc_ZPt_stack_8->SetBinError(6,0.7388419);
   VbbHcc_ZPt_stack_8->SetBinError(7,0.7740567);
   VbbHcc_ZPt_stack_8->SetBinError(8,0.290508);
   VbbHcc_ZPt_stack_8->SetBinError(9,0.2691872);
   VbbHcc_ZPt_stack_8->SetBinError(10,0.3213999);
   VbbHcc_ZPt_stack_8->SetBinError(13,0.2155566);
   VbbHcc_ZPt_stack_8->SetEntries(712);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_ZPt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_8->SetLineColor(ci);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_8,"");
   
   TH1D *VbbHcc_ZPt_stack_9 = new TH1D("VbbHcc_ZPt_stack_9","",40,0,2000);
   VbbHcc_ZPt_stack_9->SetBinContent(2,44.95237);
   VbbHcc_ZPt_stack_9->SetBinContent(3,24.51412);
   VbbHcc_ZPt_stack_9->SetBinContent(4,11.49687);
   VbbHcc_ZPt_stack_9->SetBinContent(5,6.407299);
   VbbHcc_ZPt_stack_9->SetBinContent(6,3.430957);
   VbbHcc_ZPt_stack_9->SetBinContent(7,1.976123);
   VbbHcc_ZPt_stack_9->SetBinContent(8,1.062593);
   VbbHcc_ZPt_stack_9->SetBinContent(9,0.5158773);
   VbbHcc_ZPt_stack_9->SetBinContent(10,0.2340419);
   VbbHcc_ZPt_stack_9->SetBinContent(11,0.07942768);
   VbbHcc_ZPt_stack_9->SetBinContent(12,0.05181325);
   VbbHcc_ZPt_stack_9->SetBinContent(13,0.01958387);
   VbbHcc_ZPt_stack_9->SetBinContent(14,0.01730564);
   VbbHcc_ZPt_stack_9->SetBinContent(15,0.001441374);
   VbbHcc_ZPt_stack_9->SetBinContent(16,0.004575943);
   VbbHcc_ZPt_stack_9->SetBinContent(17,0.005901482);
   VbbHcc_ZPt_stack_9->SetBinContent(18,0.001531435);
   VbbHcc_ZPt_stack_9->SetBinContent(19,0.001468094);
   VbbHcc_ZPt_stack_9->SetBinError(2,0.2649394);
   VbbHcc_ZPt_stack_9->SetBinError(3,0.1948082);
   VbbHcc_ZPt_stack_9->SetBinError(4,0.1334057);
   VbbHcc_ZPt_stack_9->SetBinError(5,0.09953272);
   VbbHcc_ZPt_stack_9->SetBinError(6,0.07282568);
   VbbHcc_ZPt_stack_9->SetBinError(7,0.05522054);
   VbbHcc_ZPt_stack_9->SetBinError(8,0.04023911);
   VbbHcc_ZPt_stack_9->SetBinError(9,0.02834886);
   VbbHcc_ZPt_stack_9->SetBinError(10,0.01858464);
   VbbHcc_ZPt_stack_9->SetBinError(11,0.01084946);
   VbbHcc_ZPt_stack_9->SetBinError(12,0.008841599);
   VbbHcc_ZPt_stack_9->SetBinError(13,0.005301594);
   VbbHcc_ZPt_stack_9->SetBinError(14,0.005048068);
   VbbHcc_ZPt_stack_9->SetBinError(15,0.001441374);
   VbbHcc_ZPt_stack_9->SetBinError(16,0.002646781);
   VbbHcc_ZPt_stack_9->SetBinError(17,0.002952785);
   VbbHcc_ZPt_stack_9->SetBinError(18,0.001531435);
   VbbHcc_ZPt_stack_9->SetBinError(19,0.001468094);
   VbbHcc_ZPt_stack_9->SetEntries(66921);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_ZPt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_9->SetLineColor(ci);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_9,"");
   
   TH1D *VbbHcc_ZPt_stack_10 = new TH1D("VbbHcc_ZPt_stack_10","",40,0,2000);
   VbbHcc_ZPt_stack_10->SetBinContent(2,9.24499);
   VbbHcc_ZPt_stack_10->SetBinContent(3,8.270188);
   VbbHcc_ZPt_stack_10->SetBinContent(4,5.01348);
   VbbHcc_ZPt_stack_10->SetBinContent(5,2.634589);
   VbbHcc_ZPt_stack_10->SetBinContent(6,1.325471);
   VbbHcc_ZPt_stack_10->SetBinContent(7,0.6532846);
   VbbHcc_ZPt_stack_10->SetBinContent(8,0.35634);
   VbbHcc_ZPt_stack_10->SetBinContent(9,0.1757589);
   VbbHcc_ZPt_stack_10->SetBinContent(10,0.09099883);
   VbbHcc_ZPt_stack_10->SetBinContent(11,0.06152303);
   VbbHcc_ZPt_stack_10->SetBinContent(12,0.03178268);
   VbbHcc_ZPt_stack_10->SetBinContent(13,0.02596268);
   VbbHcc_ZPt_stack_10->SetBinContent(14,0.01429393);
   VbbHcc_ZPt_stack_10->SetBinContent(15,0.009971117);
   VbbHcc_ZPt_stack_10->SetBinContent(16,0.004572303);
   VbbHcc_ZPt_stack_10->SetBinContent(17,0.001911084);
   VbbHcc_ZPt_stack_10->SetBinContent(18,0.002758774);
   VbbHcc_ZPt_stack_10->SetBinContent(19,0.002752983);
   VbbHcc_ZPt_stack_10->SetBinContent(20,0.001172161);
   VbbHcc_ZPt_stack_10->SetBinContent(21,0.001190976);
   VbbHcc_ZPt_stack_10->SetBinContent(22,0.001208092);
   VbbHcc_ZPt_stack_10->SetBinContent(23,0.001968452);
   VbbHcc_ZPt_stack_10->SetBinContent(24,0.001189529);
   VbbHcc_ZPt_stack_10->SetBinContent(25,0.0003884346);
   VbbHcc_ZPt_stack_10->SetBinContent(26,0.000375936);
   VbbHcc_ZPt_stack_10->SetBinContent(27,0.0003916);
   VbbHcc_ZPt_stack_10->SetBinError(2,0.05995311);
   VbbHcc_ZPt_stack_10->SetBinError(3,0.05668325);
   VbbHcc_ZPt_stack_10->SetBinError(4,0.04407902);
   VbbHcc_ZPt_stack_10->SetBinError(5,0.03191793);
   VbbHcc_ZPt_stack_10->SetBinError(6,0.02263389);
   VbbHcc_ZPt_stack_10->SetBinError(7,0.01587693);
   VbbHcc_ZPt_stack_10->SetBinError(8,0.01171493);
   VbbHcc_ZPt_stack_10->SetBinError(9,0.008191725);
   VbbHcc_ZPt_stack_10->SetBinError(10,0.005896454);
   VbbHcc_ZPt_stack_10->SetBinError(11,0.004875371);
   VbbHcc_ZPt_stack_10->SetBinError(12,0.003504563);
   VbbHcc_ZPt_stack_10->SetBinError(13,0.003178911);
   VbbHcc_ZPt_stack_10->SetBinError(14,0.002353608);
   VbbHcc_ZPt_stack_10->SetBinError(15,0.001959962);
   VbbHcc_ZPt_stack_10->SetBinError(16,0.001298555);
   VbbHcc_ZPt_stack_10->SetBinError(17,0.0008559877);
   VbbHcc_ZPt_stack_10->SetBinError(18,0.00104385);
   VbbHcc_ZPt_stack_10->SetBinError(19,0.00104273);
   VbbHcc_ZPt_stack_10->SetBinError(20,0.0006767549);
   VbbHcc_ZPt_stack_10->SetBinError(21,0.0006887836);
   VbbHcc_ZPt_stack_10->SetBinError(22,0.0006983316);
   VbbHcc_ZPt_stack_10->SetBinError(23,0.0008817047);
   VbbHcc_ZPt_stack_10->SetBinError(24,0.0006879549);
   VbbHcc_ZPt_stack_10->SetBinError(25,0.0003884346);
   VbbHcc_ZPt_stack_10->SetBinError(26,0.000375936);
   VbbHcc_ZPt_stack_10->SetBinError(27,0.0003916);
   VbbHcc_ZPt_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_ZPt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_10->SetLineColor(ci);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_10,"");
   
   TH1D *VbbHcc_ZPt_stack_11 = new TH1D("VbbHcc_ZPt_stack_11","",40,0,2000);
   VbbHcc_ZPt_stack_11->SetBinContent(2,1.694649);
   VbbHcc_ZPt_stack_11->SetBinContent(3,1.369573);
   VbbHcc_ZPt_stack_11->SetBinContent(4,0.7363393);
   VbbHcc_ZPt_stack_11->SetBinContent(5,0.3658695);
   VbbHcc_ZPt_stack_11->SetBinContent(6,0.1975347);
   VbbHcc_ZPt_stack_11->SetBinContent(7,0.1475815);
   VbbHcc_ZPt_stack_11->SetBinContent(8,0.0774748);
   VbbHcc_ZPt_stack_11->SetBinContent(9,0.04153753);
   VbbHcc_ZPt_stack_11->SetBinContent(10,0.02010655);
   VbbHcc_ZPt_stack_11->SetBinContent(11,0.01557166);
   VbbHcc_ZPt_stack_11->SetBinContent(12,0.00934289);
   VbbHcc_ZPt_stack_11->SetBinContent(13,0.007533674);
   VbbHcc_ZPt_stack_11->SetBinContent(14,0.00262406);
   VbbHcc_ZPt_stack_11->SetBinContent(15,0.0008798715);
   VbbHcc_ZPt_stack_11->SetBinContent(16,0.0001563584);
   VbbHcc_ZPt_stack_11->SetBinContent(17,0.001545187);
   VbbHcc_ZPt_stack_11->SetBinContent(21,0.001514166);
   VbbHcc_ZPt_stack_11->SetBinContent(26,0.003034053);
   VbbHcc_ZPt_stack_11->SetBinContent(30,0.001563217);
   VbbHcc_ZPt_stack_11->SetBinError(2,0.05156065);
   VbbHcc_ZPt_stack_11->SetBinError(3,0.04609579);
   VbbHcc_ZPt_stack_11->SetBinError(4,0.03372367);
   VbbHcc_ZPt_stack_11->SetBinError(5,0.02406343);
   VbbHcc_ZPt_stack_11->SetBinError(6,0.01775442);
   VbbHcc_ZPt_stack_11->SetBinError(7,0.01505302);
   VbbHcc_ZPt_stack_11->SetBinError(8,0.01078298);
   VbbHcc_ZPt_stack_11->SetBinError(9,0.008150949);
   VbbHcc_ZPt_stack_11->SetBinError(10,0.005471798);
   VbbHcc_ZPt_stack_11->SetBinError(11,0.00518505);
   VbbHcc_ZPt_stack_11->SetBinError(12,0.003814795);
   VbbHcc_ZPt_stack_11->SetBinError(13,0.003376823);
   VbbHcc_ZPt_stack_11->SetBinError(14,0.001871922);
   VbbHcc_ZPt_stack_11->SetBinError(15,0.0008798715);
   VbbHcc_ZPt_stack_11->SetBinError(16,0.0001563584);
   VbbHcc_ZPt_stack_11->SetBinError(17,0.001545187);
   VbbHcc_ZPt_stack_11->SetBinError(21,0.001514166);
   VbbHcc_ZPt_stack_11->SetBinError(26,0.002145438);
   VbbHcc_ZPt_stack_11->SetBinError(30,0.001563217);
   VbbHcc_ZPt_stack_11->SetEntries(3413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_ZPt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_11->SetLineColor(ci);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_11,"");
   
   TH1D *VbbHcc_ZPt_stack_12 = new TH1D("VbbHcc_ZPt_stack_12","",40,0,2000);
   VbbHcc_ZPt_stack_12->SetBinContent(2,0.3095105);
   VbbHcc_ZPt_stack_12->SetBinContent(3,0.4345939);
   VbbHcc_ZPt_stack_12->SetBinContent(4,0.335944);
   VbbHcc_ZPt_stack_12->SetBinContent(5,0.2101677);
   VbbHcc_ZPt_stack_12->SetBinContent(6,0.1206073);
   VbbHcc_ZPt_stack_12->SetBinContent(7,0.06492644);
   VbbHcc_ZPt_stack_12->SetBinContent(8,0.03580622);
   VbbHcc_ZPt_stack_12->SetBinContent(9,0.01998789);
   VbbHcc_ZPt_stack_12->SetBinContent(10,0.008988139);
   VbbHcc_ZPt_stack_12->SetBinContent(11,0.006071753);
   VbbHcc_ZPt_stack_12->SetBinContent(12,0.004941576);
   VbbHcc_ZPt_stack_12->SetBinContent(13,0.003733224);
   VbbHcc_ZPt_stack_12->SetBinContent(14,0.003699091);
   VbbHcc_ZPt_stack_12->SetBinContent(15,0.001748612);
   VbbHcc_ZPt_stack_12->SetBinContent(16,0.0008118211);
   VbbHcc_ZPt_stack_12->SetBinContent(17,0.001368491);
   VbbHcc_ZPt_stack_12->SetBinContent(18,0.001134183);
   VbbHcc_ZPt_stack_12->SetBinContent(19,0.000194722);
   VbbHcc_ZPt_stack_12->SetBinContent(20,0.0001892237);
   VbbHcc_ZPt_stack_12->SetBinContent(21,0.0001915038);
   VbbHcc_ZPt_stack_12->SetBinContent(22,0.0003784474);
   VbbHcc_ZPt_stack_12->SetBinContent(23,0.0004378658);
   VbbHcc_ZPt_stack_12->SetBinContent(26,0.0002127011);
   VbbHcc_ZPt_stack_12->SetBinContent(27,0.0002118312);
   VbbHcc_ZPt_stack_12->SetBinContent(34,0.0002057899);
   VbbHcc_ZPt_stack_12->SetBinContent(35,0.0001892188);
   VbbHcc_ZPt_stack_12->SetBinContent(39,0.0001931004);
   VbbHcc_ZPt_stack_12->SetBinError(2,0.007682532);
   VbbHcc_ZPt_stack_12->SetBinError(3,0.009100774);
   VbbHcc_ZPt_stack_12->SetBinError(4,0.008001504);
   VbbHcc_ZPt_stack_12->SetBinError(5,0.006332817);
   VbbHcc_ZPt_stack_12->SetBinError(6,0.004786273);
   VbbHcc_ZPt_stack_12->SetBinError(7,0.003500735);
   VbbHcc_ZPt_stack_12->SetBinError(8,0.002598853);
   VbbHcc_ZPt_stack_12->SetBinError(9,0.001940582);
   VbbHcc_ZPt_stack_12->SetBinError(10,0.001298046);
   VbbHcc_ZPt_stack_12->SetBinError(11,0.001078524);
   VbbHcc_ZPt_stack_12->SetBinError(12,0.0009527183);
   VbbHcc_ZPt_stack_12->SetBinError(13,0.0008447909);
   VbbHcc_ZPt_stack_12->SetBinError(14,0.000856748);
   VbbHcc_ZPt_stack_12->SetBinError(15,0.0005824497);
   VbbHcc_ZPt_stack_12->SetBinError(16,0.000387403);
   VbbHcc_ZPt_stack_12->SetBinError(17,0.0005018732);
   VbbHcc_ZPt_stack_12->SetBinError(18,0.0004651782);
   VbbHcc_ZPt_stack_12->SetBinError(19,0.000194722);
   VbbHcc_ZPt_stack_12->SetBinError(20,0.0001892237);
   VbbHcc_ZPt_stack_12->SetBinError(21,0.0001915038);
   VbbHcc_ZPt_stack_12->SetBinError(22,0.0002676027);
   VbbHcc_ZPt_stack_12->SetBinError(23,0.0002851965);
   VbbHcc_ZPt_stack_12->SetBinError(26,0.0002127011);
   VbbHcc_ZPt_stack_12->SetBinError(27,0.0002118312);
   VbbHcc_ZPt_stack_12->SetBinError(34,0.0002057899);
   VbbHcc_ZPt_stack_12->SetBinError(35,0.0001892188);
   VbbHcc_ZPt_stack_12->SetBinError(39,0.0001931004);
   VbbHcc_ZPt_stack_12->SetEntries(8846);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_ZPt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_12->SetLineColor(ci);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_ZPt__17 = new TH1D("VbbHcc_ZPt__17","",40,0,2000);
   VbbHcc_ZPt__17->SetBinContent(2,41423);
   VbbHcc_ZPt__17->SetBinContent(3,50944);
   VbbHcc_ZPt__17->SetBinContent(4,39317);
   VbbHcc_ZPt__17->SetBinContent(5,24620);
   VbbHcc_ZPt__17->SetBinContent(6,15659);
   VbbHcc_ZPt__17->SetBinContent(7,10402);
   VbbHcc_ZPt__17->SetBinContent(8,6495);
   VbbHcc_ZPt__17->SetBinContent(9,3727);
   VbbHcc_ZPt__17->SetBinContent(10,2230);
   VbbHcc_ZPt__17->SetBinContent(11,1275);
   VbbHcc_ZPt__17->SetBinContent(12,818);
   VbbHcc_ZPt__17->SetBinContent(13,470);
   VbbHcc_ZPt__17->SetBinContent(14,317);
   VbbHcc_ZPt__17->SetBinContent(15,213);
   VbbHcc_ZPt__17->SetBinContent(16,137);
   VbbHcc_ZPt__17->SetBinContent(17,92);
   VbbHcc_ZPt__17->SetBinContent(18,59);
   VbbHcc_ZPt__17->SetBinContent(19,41);
   VbbHcc_ZPt__17->SetBinContent(20,24);
   VbbHcc_ZPt__17->SetBinContent(21,20);
   VbbHcc_ZPt__17->SetBinContent(22,10);
   VbbHcc_ZPt__17->SetBinContent(23,13);
   VbbHcc_ZPt__17->SetBinContent(24,5);
   VbbHcc_ZPt__17->SetBinContent(25,3);
   VbbHcc_ZPt__17->SetBinContent(26,7);
   VbbHcc_ZPt__17->SetBinContent(27,1);
   VbbHcc_ZPt__17->SetBinContent(28,1);
   VbbHcc_ZPt__17->SetBinContent(29,1);
   VbbHcc_ZPt__17->SetEntries(198324);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt__17->SetLineColor(ci);
   VbbHcc_ZPt__17->SetLineWidth(2);
   VbbHcc_ZPt__17->SetMarkerStyle(20);
   VbbHcc_ZPt__17->SetMarkerSize(1.2);
   VbbHcc_ZPt__17->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt__17->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt__17->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt__17->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt__17->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt__17->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt__17->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt__17->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt__17->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt__17->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt__17->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt__17->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt__17->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt__17->GetZaxis()->SetTitleFont(42);
   VbbHcc_ZPt__17->Draw("same E");
   
   Double_t Graph_from_VbbHcc_ZPt_fx1017[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_ZPt_fy1017[40] = {
   0,
   179229.3,
   201790.6,
   131131.1,
   47568.43,
   19378.76,
   9519.49,
   4718.86,
   2389.815,
   1398.021,
   697.5613,
   433.0661,
   327.9414,
   185.3563,
   108.1909,
   76.14777,
   56.92055,
   29.58913,
   30.39877,
   14.67428,
   12.18372,
   8.252467,
   6.44898,
   3.351149,
   3.014279,
   1.861456,
   0.9422067,
   0.6990065,
   1.314313,
   0.9728109,
   0.000513045,
   0.5514685,
   0.3276046,
   0.07879351,
   0.0004142856,
   0.1420726,
   0.2213428,
   0.0001410359,
   0.0001931004,
   0.0001292354};
   Double_t Graph_from_VbbHcc_ZPt_fex1017[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_ZPt_fey1017[40] = {
   0,
   6208.773,
   6653.761,
   5230.311,
   2323.861,
   780.0961,
   325.1242,
   164.3717,
   103.8392,
   73.22037,
   41.70459,
   30.39744,
   25.1278,
   16.42659,
   8.88947,
   5.808374,
   6.228972,
   3.111283,
   3.063166,
   1.749486,
   1.498326,
   1.182923,
   1.128506,
   0.7368087,
   0.7343107,
   0.5760746,
   0.3727871,
   0.3654603,
   0.4895564,
   0.426452,
   0.0001821175,
   0.303141,
   0.2190055,
   0.0783137,
   0.0002233279,
   0.100408,
   0.2212758,
   9.984086e-05,
   0.0001931004,
   9.139632e-05};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_ZPt_fx1017,Graph_from_VbbHcc_ZPt_fy1017,Graph_from_VbbHcc_ZPt_fex1017,Graph_from_VbbHcc_ZPt_fey1017);
   gre->SetName("Graph_from_VbbHcc_ZPt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_ZPt1017 = new TH1F("Graph_Graph_from_VbbHcc_ZPt1017","",100,0,2200);
   Graph_Graph_from_VbbHcc_ZPt1017->SetMinimum(-20844.43);
   Graph_Graph_from_VbbHcc_ZPt1017->SetMaximum(229288.8);
   Graph_Graph_from_VbbHcc_ZPt1017->SetDirectory(0);
   Graph_Graph_from_VbbHcc_ZPt1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_ZPt1017->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_ZPt1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt1017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZPt1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt1017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_ZPt1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZPt1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_ZPt1017);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_ZPt","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_ZPt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_ZPt","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   ZPt_VbbHcc_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__18 = new TH1D("data_mc_ratio__18","",40,0,2000);
   data_mc_ratio__18->SetBinContent(2,0.2311173);
   data_mc_ratio__18->SetBinContent(3,0.2524598);
   data_mc_ratio__18->SetBinContent(4,0.2998297);
   data_mc_ratio__18->SetBinContent(5,0.5175701);
   data_mc_ratio__18->SetBinContent(6,0.8080497);
   data_mc_ratio__18->SetBinContent(7,1.092706);
   data_mc_ratio__18->SetBinContent(8,1.376392);
   data_mc_ratio__18->SetBinContent(9,1.559535);
   data_mc_ratio__18->SetBinContent(10,1.595112);
   data_mc_ratio__18->SetBinContent(11,1.827796);
   data_mc_ratio__18->SetBinContent(12,1.888857);
   data_mc_ratio__18->SetBinContent(13,1.433183);
   data_mc_ratio__18->SetBinContent(14,1.710219);
   data_mc_ratio__18->SetBinContent(15,1.968742);
   data_mc_ratio__18->SetBinContent(16,1.799133);
   data_mc_ratio__18->SetBinContent(17,1.616288);
   data_mc_ratio__18->SetBinContent(18,1.993975);
   data_mc_ratio__18->SetBinContent(19,1.348739);
   data_mc_ratio__18->SetBinContent(20,1.635514);
   data_mc_ratio__18->SetBinContent(21,1.641534);
   data_mc_ratio__18->SetBinContent(22,1.211759);
   data_mc_ratio__18->SetBinContent(23,2.015823);
   data_mc_ratio__18->SetBinContent(24,1.492025);
   data_mc_ratio__18->SetBinContent(25,0.9952629);
   data_mc_ratio__18->SetBinContent(26,3.760496);
   data_mc_ratio__18->SetBinContent(27,1.061338);
   data_mc_ratio__18->SetBinContent(28,1.430602);
   data_mc_ratio__18->SetBinContent(29,0.7608537);
   data_mc_ratio__18->SetBinError(2,0.001135564);
   data_mc_ratio__18->SetBinError(3,0.001118525);
   data_mc_ratio__18->SetBinError(4,0.001512114);
   data_mc_ratio__18->SetBinError(5,0.003298566);
   data_mc_ratio__18->SetBinError(6,0.006457376);
   data_mc_ratio__18->SetBinError(7,0.01071383);
   data_mc_ratio__18->SetBinError(8,0.01707861);
   data_mc_ratio__18->SetBinError(9,0.02554555);
   data_mc_ratio__18->SetBinError(10,0.03377837);
   data_mc_ratio__18->SetBinError(11,0.05118854);
   data_mc_ratio__18->SetBinError(12,0.06604235);
   data_mc_ratio__18->SetBinError(13,0.0661078);
   data_mc_ratio__18->SetBinError(14,0.09605549);
   data_mc_ratio__18->SetBinError(15,0.134896);
   data_mc_ratio__18->SetBinError(16,0.1537103);
   data_mc_ratio__18->SetBinError(17,0.1685097);
   data_mc_ratio__18->SetBinError(18,0.2595935);
   data_mc_ratio__18->SetBinError(19,0.2106376);
   data_mc_ratio__18->SetBinError(20,0.333848);
   data_mc_ratio__18->SetBinError(21,0.3670582);
   data_mc_ratio__18->SetBinError(22,0.3831918);
   data_mc_ratio__18->SetBinError(23,0.5590886);
   data_mc_ratio__18->SetBinError(24,0.6672541);
   data_mc_ratio__18->SetBinError(25,0.5746153);
   data_mc_ratio__18->SetBinError(26,1.421334);
   data_mc_ratio__18->SetBinError(27,1.061338);
   data_mc_ratio__18->SetBinError(28,1.430602);
   data_mc_ratio__18->SetBinError(29,0.7608537);
   data_mc_ratio__18->SetMinimum(0.4);
   data_mc_ratio__18->SetMaximum(1.6);
   data_mc_ratio__18->SetEntries(150.8917);
   data_mc_ratio__18->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__18->SetLineColor(ci);
   data_mc_ratio__18->SetLineWidth(2);
   data_mc_ratio__18->SetMarkerStyle(20);
   data_mc_ratio__18->SetMarkerSize(1.2);
   data_mc_ratio__18->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__18->GetXaxis()->SetRange(7,30);
   data_mc_ratio__18->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__18->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__18->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__18->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__18->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__18->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__18->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__18->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1018[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1018[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1018[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1018[40] = {
   0,
   0.0346415,
   0.0329736,
   0.03988612,
   0.048853,
   0.04025522,
   0.03415353,
   0.03483292,
   0.04345072,
   0.05237429,
   0.05978627,
   0.07019123,
   0.07662285,
   0.08862165,
   0.08216465,
   0.07627767,
   0.1094327,
   0.1051495,
   0.1007661,
   0.1192213,
   0.1229777,
   0.1433418,
   0.1749899,
   0.2198675,
   0.2436107,
   0.3094752,
   0.3956532,
   0.5228283,
   0.3724808,
   0.4383709,
   0.3549739,
   0.5496978,
   0.6685055,
   0.9939105,
   0.5390675,
   0.7067378,
   0.9996975,
   0.7079111,
   1,
   0.7072081};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1018,Graph_from_mc_statistical_error_fy1018,Graph_from_mc_statistical_error_fex1018,Graph_from_mc_statistical_error_fey1018);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1018 = new TH1F("Graph_Graph_from_mc_statistical_error1018","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1018->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1018->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1018->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1018->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1018);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   ZPt_VbbHcc_16->cd();
   ZPt_VbbHcc_16->Modified();
   ZPt_VbbHcc_16->cd();
   ZPt_VbbHcc_16->SetSelected(ZPt_VbbHcc_16);
}
