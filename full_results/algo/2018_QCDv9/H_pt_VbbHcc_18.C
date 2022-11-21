void H_pt_VbbHcc_18()
{
//=========Macro generated from canvas: H_pt_VbbHcc_18/H_pt_VbbHcc_18
//=========  (Mon Nov 21 13:06:13 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_18 = new TCanvas("H_pt_VbbHcc_18", "H_pt_VbbHcc_18",0,0,600,600);
   H_pt_VbbHcc_18->SetHighLightColor(2);
   H_pt_VbbHcc_18->Range(0,0,1,1);
   H_pt_VbbHcc_18->SetFillColor(0);
   H_pt_VbbHcc_18->SetFillStyle(4000);
   H_pt_VbbHcc_18->SetBorderMode(0);
   H_pt_VbbHcc_18->SetBorderSize(2);
   H_pt_VbbHcc_18->SetFrameFillStyle(1000);
   H_pt_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-4971.288,1562.903,4966326);
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
   st->SetMaximum(4256378);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",40,0,2000);
   st_stack_15->SetMinimum(0.01);
   st_stack_15->SetMaximum(4469196);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetRange(7,30);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetLabelSize(0.035);
   st_stack_15->GetXaxis()->SetTitleSize(0.035);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Events/50.0");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetLabelSize(0.05);
   st_stack_15->GetYaxis()->SetTitleSize(0.057);
   st_stack_15->GetYaxis()->SetTitleOffset(1.2);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetLabelSize(0.035);
   st_stack_15->GetZaxis()->SetTitleSize(0.035);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,428280.6);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,1849881);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,1563157);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,137485);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,27435.71);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,58709.24);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,58979.13);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,15270.32);
   VbbHcc_algo_H_pt_stack_1->SetEntries(2374);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,1523.418);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,7270.385);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,7369.269);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,3411.658);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,1579.971);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,819.8384);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,462.4229);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,273.3726);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,178.494);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,101.3837);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,66.46451);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,52.65771);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,29.6763);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(14,22.48785);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(15,14.91331);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(16,13.32726);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(17,6.810416);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(18,4.335036);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(19,6.271929);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(20,2.456031);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(21,1.12951);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(22,0.778213);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(23,0.9560563);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(24,0.6777038);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(25,0.5172916);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(26,1.245505);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(28,0.04435729);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(29,1.267441);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(30,0.05562694);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(31,-0.08011151);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(35,0.3903248);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(37,-0.05673641);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(38,0.3053592);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,15.24607);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,33.86426);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,34.70675);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,24.52136);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,18.9558);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,12.67015);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,9.760032);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,8.347532);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,6.903134);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,4.892599);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,3.984956);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,3.750133);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,2.773488);
   VbbHcc_algo_H_pt_stack_2->SetBinError(14,2.35704);
   VbbHcc_algo_H_pt_stack_2->SetBinError(15,1.98535);
   VbbHcc_algo_H_pt_stack_2->SetBinError(16,3.722789);
   VbbHcc_algo_H_pt_stack_2->SetBinError(17,1.321087);
   VbbHcc_algo_H_pt_stack_2->SetBinError(18,1.146023);
   VbbHcc_algo_H_pt_stack_2->SetBinError(19,1.350022);
   VbbHcc_algo_H_pt_stack_2->SetBinError(20,0.7556658);
   VbbHcc_algo_H_pt_stack_2->SetBinError(21,0.4854381);
   VbbHcc_algo_H_pt_stack_2->SetBinError(22,0.5352532);
   VbbHcc_algo_H_pt_stack_2->SetBinError(23,0.5189201);
   VbbHcc_algo_H_pt_stack_2->SetBinError(24,0.4285261);
   VbbHcc_algo_H_pt_stack_2->SetBinError(25,0.4232043);
   VbbHcc_algo_H_pt_stack_2->SetBinError(26,0.6339567);
   VbbHcc_algo_H_pt_stack_2->SetBinError(28,0.04435729);
   VbbHcc_algo_H_pt_stack_2->SetBinError(29,0.5669307);
   VbbHcc_algo_H_pt_stack_2->SetBinError(30,0.05562694);
   VbbHcc_algo_H_pt_stack_2->SetBinError(31,0.133611);
   VbbHcc_algo_H_pt_stack_2->SetBinError(35,0.3903248);
   VbbHcc_algo_H_pt_stack_2->SetBinError(37,0.05673641);
   VbbHcc_algo_H_pt_stack_2->SetBinError(38,0.3053592);
   VbbHcc_algo_H_pt_stack_2->SetEntries(331043);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_3 = new TH1D("VbbHcc_algo_H_pt_stack_3","",40,0,2000);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(1,9697.544);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(2,54515.17);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(3,72760.73);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(4,32744.19);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(5,13709.8);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(6,6803.671);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(7,3668.877);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(8,2084.25);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(9,1198.208);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(10,750.0736);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(11,492.6979);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(12,326.3085);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(13,221.7475);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(14,155.0182);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(15,101.8083);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(16,74.93992);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(17,52.67607);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(18,36.23752);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(19,28.83477);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(20,19.70603);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(21,13.62383);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(22,10.79623);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(23,8.35318);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(24,7.544413);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(25,4.19341);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(26,3.511756);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(27,2.686694);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(28,1.363548);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(29,2.063448);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(30,1.117736);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(31,0.76014);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(32,0.4164183);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(33,0.4634692);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(34,0.2939782);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(35,0.4603088);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(36,0.1857878);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(37,0.2795607);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(38,0.2488024);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(41,0.07422835);
   VbbHcc_algo_H_pt_stack_3->SetBinError(1,28.20093);
   VbbHcc_algo_H_pt_stack_3->SetBinError(2,65.92942);
   VbbHcc_algo_H_pt_stack_3->SetBinError(3,75.86744);
   VbbHcc_algo_H_pt_stack_3->SetBinError(4,50.4488);
   VbbHcc_algo_H_pt_stack_3->SetBinError(5,32.22969);
   VbbHcc_algo_H_pt_stack_3->SetBinError(6,22.66715);
   VbbHcc_algo_H_pt_stack_3->SetBinError(7,16.5365);
   VbbHcc_algo_H_pt_stack_3->SetBinError(8,13.42611);
   VbbHcc_algo_H_pt_stack_3->SetBinError(9,9.885863);
   VbbHcc_algo_H_pt_stack_3->SetBinError(10,7.487571);
   VbbHcc_algo_H_pt_stack_3->SetBinError(11,6.385429);
   VbbHcc_algo_H_pt_stack_3->SetBinError(12,5.144554);
   VbbHcc_algo_H_pt_stack_3->SetBinError(13,4.250596);
   VbbHcc_algo_H_pt_stack_3->SetBinError(14,3.660188);
   VbbHcc_algo_H_pt_stack_3->SetBinError(15,3.117592);
   VbbHcc_algo_H_pt_stack_3->SetBinError(16,2.516392);
   VbbHcc_algo_H_pt_stack_3->SetBinError(17,2.002612);
   VbbHcc_algo_H_pt_stack_3->SetBinError(18,1.684841);
   VbbHcc_algo_H_pt_stack_3->SetBinError(19,1.494283);
   VbbHcc_algo_H_pt_stack_3->SetBinError(20,1.218783);
   VbbHcc_algo_H_pt_stack_3->SetBinError(21,1.003176);
   VbbHcc_algo_H_pt_stack_3->SetBinError(22,0.8928512);
   VbbHcc_algo_H_pt_stack_3->SetBinError(23,0.7958516);
   VbbHcc_algo_H_pt_stack_3->SetBinError(24,1.403685);
   VbbHcc_algo_H_pt_stack_3->SetBinError(25,0.5533516);
   VbbHcc_algo_H_pt_stack_3->SetBinError(26,0.5217329);
   VbbHcc_algo_H_pt_stack_3->SetBinError(27,0.4463805);
   VbbHcc_algo_H_pt_stack_3->SetBinError(28,0.3279644);
   VbbHcc_algo_H_pt_stack_3->SetBinError(29,0.4077655);
   VbbHcc_algo_H_pt_stack_3->SetBinError(30,0.3054956);
   VbbHcc_algo_H_pt_stack_3->SetBinError(31,0.2447698);
   VbbHcc_algo_H_pt_stack_3->SetBinError(32,0.1725603);
   VbbHcc_algo_H_pt_stack_3->SetBinError(33,0.1937423);
   VbbHcc_algo_H_pt_stack_3->SetBinError(34,0.1505558);
   VbbHcc_algo_H_pt_stack_3->SetBinError(35,0.1911794);
   VbbHcc_algo_H_pt_stack_3->SetBinError(36,0.1317679);
   VbbHcc_algo_H_pt_stack_3->SetBinError(37,0.1472039);
   VbbHcc_algo_H_pt_stack_3->SetBinError(38,0.1449505);
   VbbHcc_algo_H_pt_stack_3->SetBinError(41,0.07422835);
   VbbHcc_algo_H_pt_stack_3->SetEntries(3142446);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_3,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_4 = new TH1D("VbbHcc_algo_H_pt_stack_4","",40,0,2000);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(1,96.30384);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(2,520.1944);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(3,1521.206);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(4,2505.394);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(5,1824.75);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(6,567.0134);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(7,58.78325);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(8,1.309504);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(9,0.5205971);
   VbbHcc_algo_H_pt_stack_4->SetBinError(1,7.444816);
   VbbHcc_algo_H_pt_stack_4->SetBinError(2,17.43995);
   VbbHcc_algo_H_pt_stack_4->SetBinError(3,29.9329);
   VbbHcc_algo_H_pt_stack_4->SetBinError(4,40.12727);
   VbbHcc_algo_H_pt_stack_4->SetBinError(5,33.55812);
   VbbHcc_algo_H_pt_stack_4->SetBinError(6,18.18075);
   VbbHcc_algo_H_pt_stack_4->SetBinError(7,5.71167);
   VbbHcc_algo_H_pt_stack_4->SetBinError(8,0.8259662);
   VbbHcc_algo_H_pt_stack_4->SetBinError(9,0.5205971);
   VbbHcc_algo_H_pt_stack_4->SetEntries(12998);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_4,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_5 = new TH1D("VbbHcc_algo_H_pt_stack_5","",40,0,2000);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(1,60.09069);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(2,236.0707);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(3,616.2578);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(4,1101.975);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(5,800.2286);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(6,328.2027);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(7,39.68249);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(9,2.819805);
   VbbHcc_algo_H_pt_stack_5->SetBinError(1,11.76189);
   VbbHcc_algo_H_pt_stack_5->SetBinError(2,24.12545);
   VbbHcc_algo_H_pt_stack_5->SetBinError(3,39.34001);
   VbbHcc_algo_H_pt_stack_5->SetBinError(4,56.53677);
   VbbHcc_algo_H_pt_stack_5->SetBinError(5,45.72262);
   VbbHcc_algo_H_pt_stack_5->SetBinError(6,29.38711);
   VbbHcc_algo_H_pt_stack_5->SetBinError(7,10.01492);
   VbbHcc_algo_H_pt_stack_5->SetBinError(9,2.819805);
   VbbHcc_algo_H_pt_stack_5->SetEntries(1311);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_5,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_6 = new TH1D("VbbHcc_algo_H_pt_stack_6","",40,0,2000);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(1,11.33785);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(2,41.88753);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(3,28.19453);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(4,11.98817);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(5,3.686166);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(6,3.93264);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(7,1.964719);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(8,0.6951743);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(9,1.120489);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(11,1.030567);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(20,0.3664998);
   VbbHcc_algo_H_pt_stack_6->SetBinError(1,2.046182);
   VbbHcc_algo_H_pt_stack_6->SetBinError(2,4.312697);
   VbbHcc_algo_H_pt_stack_6->SetBinError(3,3.367291);
   VbbHcc_algo_H_pt_stack_6->SetBinError(4,2.164407);
   VbbHcc_algo_H_pt_stack_6->SetBinError(5,1.232274);
   VbbHcc_algo_H_pt_stack_6->SetBinError(6,1.211076);
   VbbHcc_algo_H_pt_stack_6->SetBinError(7,0.8926074);
   VbbHcc_algo_H_pt_stack_6->SetBinError(8,0.4916425);
   VbbHcc_algo_H_pt_stack_6->SetBinError(9,0.6525206);
   VbbHcc_algo_H_pt_stack_6->SetBinError(11,0.60177);
   VbbHcc_algo_H_pt_stack_6->SetBinError(20,0.3664998);
   VbbHcc_algo_H_pt_stack_6->SetEntries(289);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_6,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_7 = new TH1D("VbbHcc_algo_H_pt_stack_7","",40,0,2000);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(1,32.15016);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(2,104.0488);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(3,103.5309);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(4,52.64126);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(5,34.11192);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(6,20.85235);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(7,12.84398);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(8,8.749691);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(9,3.576857);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(10,2.399821);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(11,0.4043701);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(12,0.2148387);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(13,0.3872397);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(15,0.3036839);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(17,0.2276773);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(21,0.2183893);
   VbbHcc_algo_H_pt_stack_7->SetBinError(1,2.78151);
   VbbHcc_algo_H_pt_stack_7->SetBinError(2,4.991088);
   VbbHcc_algo_H_pt_stack_7->SetBinError(3,5.006123);
   VbbHcc_algo_H_pt_stack_7->SetBinError(4,3.520984);
   VbbHcc_algo_H_pt_stack_7->SetBinError(5,2.897621);
   VbbHcc_algo_H_pt_stack_7->SetBinError(6,2.267533);
   VbbHcc_algo_H_pt_stack_7->SetBinError(7,1.765724);
   VbbHcc_algo_H_pt_stack_7->SetBinError(8,1.455575);
   VbbHcc_algo_H_pt_stack_7->SetBinError(9,0.955074);
   VbbHcc_algo_H_pt_stack_7->SetBinError(10,0.7779188);
   VbbHcc_algo_H_pt_stack_7->SetBinError(11,0.2861482);
   VbbHcc_algo_H_pt_stack_7->SetBinError(12,0.2148387);
   VbbHcc_algo_H_pt_stack_7->SetBinError(13,0.2741607);
   VbbHcc_algo_H_pt_stack_7->SetBinError(15,0.3036839);
   VbbHcc_algo_H_pt_stack_7->SetBinError(17,0.2276773);
   VbbHcc_algo_H_pt_stack_7->SetBinError(21,0.2183893);
   VbbHcc_algo_H_pt_stack_7->SetEntries(1657);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_7,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_8 = new TH1D("VbbHcc_algo_H_pt_stack_8","",40,0,2000);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(1,41.36648);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(2,130.4935);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(3,97.64106);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(4,51.27707);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(5,33.06912);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(6,17.3436);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(7,8.598701);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(8,4.978042);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(9,1.757764);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(10,0.2679008);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(11,0.6413361);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(12,0.2572648);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(23,0.2263142);
   VbbHcc_algo_H_pt_stack_8->SetBinError(1,3.188293);
   VbbHcc_algo_H_pt_stack_8->SetBinError(2,5.657053);
   VbbHcc_algo_H_pt_stack_8->SetBinError(3,4.841262);
   VbbHcc_algo_H_pt_stack_8->SetBinError(4,3.514535);
   VbbHcc_algo_H_pt_stack_8->SetBinError(5,3.679055);
   VbbHcc_algo_H_pt_stack_8->SetBinError(6,2.009905);
   VbbHcc_algo_H_pt_stack_8->SetBinError(7,1.45474);
   VbbHcc_algo_H_pt_stack_8->SetBinError(8,1.071938);
   VbbHcc_algo_H_pt_stack_8->SetBinError(9,0.6419909);
   VbbHcc_algo_H_pt_stack_8->SetBinError(10,0.2679008);
   VbbHcc_algo_H_pt_stack_8->SetBinError(11,0.3875234);
   VbbHcc_algo_H_pt_stack_8->SetBinError(12,0.2572648);
   VbbHcc_algo_H_pt_stack_8->SetBinError(23,0.2263142);
   VbbHcc_algo_H_pt_stack_8->SetEntries(1688);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_8,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_9 = new TH1D("VbbHcc_algo_H_pt_stack_9","",40,0,2000);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(1,5.320482);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(2,24.99126);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(3,25.40169);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(4,17.869);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(5,11.10522);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(6,6.807223);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(7,4.500451);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(8,2.73433);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(9,1.601918);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(10,0.8642859);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(11,0.5485457);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(12,0.2493882);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(13,0.1124323);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(14,0.07535554);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(15,0.02115426);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(16,0.01337125);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(17,0.0241428);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(18,0.009827649);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(21,0.003287269);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(22,0.004871309);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(23,0.00490817);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(25,0.00320311);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(26,0.002472148);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(33,0.002028083);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(35,0.002142527);
   VbbHcc_algo_H_pt_stack_9->SetBinError(1,0.1265851);
   VbbHcc_algo_H_pt_stack_9->SetBinError(2,0.2942651);
   VbbHcc_algo_H_pt_stack_9->SetBinError(3,0.2972961);
   VbbHcc_algo_H_pt_stack_9->SetBinError(4,0.2327205);
   VbbHcc_algo_H_pt_stack_9->SetBinError(5,0.185093);
   VbbHcc_algo_H_pt_stack_9->SetBinError(6,0.176838);
   VbbHcc_algo_H_pt_stack_9->SetBinError(7,0.1133897);
   VbbHcc_algo_H_pt_stack_9->SetBinError(8,0.08856977);
   VbbHcc_algo_H_pt_stack_9->SetBinError(9,0.07143403);
   VbbHcc_algo_H_pt_stack_9->SetBinError(10,0.05760146);
   VbbHcc_algo_H_pt_stack_9->SetBinError(11,0.1141608);
   VbbHcc_algo_H_pt_stack_9->SetBinError(12,0.02554686);
   VbbHcc_algo_H_pt_stack_9->SetBinError(13,0.01712547);
   VbbHcc_algo_H_pt_stack_9->SetBinError(14,0.01516824);
   VbbHcc_algo_H_pt_stack_9->SetBinError(15,0.007558111);
   VbbHcc_algo_H_pt_stack_9->SetBinError(16,0.006121417);
   VbbHcc_algo_H_pt_stack_9->SetBinError(17,0.007803984);
   VbbHcc_algo_H_pt_stack_9->SetBinError(18,0.005358169);
   VbbHcc_algo_H_pt_stack_9->SetBinError(21,0.003287269);
   VbbHcc_algo_H_pt_stack_9->SetBinError(22,0.002890807);
   VbbHcc_algo_H_pt_stack_9->SetBinError(23,0.003470623);
   VbbHcc_algo_H_pt_stack_9->SetBinError(25,0.00320311);
   VbbHcc_algo_H_pt_stack_9->SetBinError(26,0.002472148);
   VbbHcc_algo_H_pt_stack_9->SetBinError(33,0.002028083);
   VbbHcc_algo_H_pt_stack_9->SetBinError(35,0.002142527);
   VbbHcc_algo_H_pt_stack_9->SetEntries(40744);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_9,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_10 = new TH1D("VbbHcc_algo_H_pt_stack_10","",40,0,2000);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(1,0.5807608);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(2,3.008237);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(3,6.154198);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(4,5.807111);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(5,3.559892);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(6,2.142857);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(7,1.199792);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(8,0.7510234);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(9,0.4653822);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(10,0.2933122);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(11,0.181036);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(12,0.1359966);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(13,0.07936826);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(14,0.06031771);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(15,0.04809449);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(16,0.03070623);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(17,0.02619707);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(18,0.0155685);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(19,0.01513207);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(20,0.01403445);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(21,0.003899298);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(22,0.009998665);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(23,0.00373967);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(24,0.002711611);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(25,0.001436379);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(26,0.001879384);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(27,0.003700129);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(28,0.001367735);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(29,0.002570831);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(30,0.0006265514);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(31,0.001272785);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(32,0.0006468577);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(34,0.001277247);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(35,0.000646865);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(41,0.0006263911);
   VbbHcc_algo_H_pt_stack_10->SetBinError(1,0.01928101);
   VbbHcc_algo_H_pt_stack_10->SetBinError(2,0.04390528);
   VbbHcc_algo_H_pt_stack_10->SetBinError(3,0.06273676);
   VbbHcc_algo_H_pt_stack_10->SetBinError(4,0.06095286);
   VbbHcc_algo_H_pt_stack_10->SetBinError(5,0.04763615);
   VbbHcc_algo_H_pt_stack_10->SetBinError(6,0.0368902);
   VbbHcc_algo_H_pt_stack_10->SetBinError(7,0.02760252);
   VbbHcc_algo_H_pt_stack_10->SetBinError(8,0.02181954);
   VbbHcc_algo_H_pt_stack_10->SetBinError(9,0.01714731);
   VbbHcc_algo_H_pt_stack_10->SetBinError(10,0.01365392);
   VbbHcc_algo_H_pt_stack_10->SetBinError(11,0.01071609);
   VbbHcc_algo_H_pt_stack_10->SetBinError(12,0.009343824);
   VbbHcc_algo_H_pt_stack_10->SetBinError(13,0.007122162);
   VbbHcc_algo_H_pt_stack_10->SetBinError(14,0.006199132);
   VbbHcc_algo_H_pt_stack_10->SetBinError(15,0.005525348);
   VbbHcc_algo_H_pt_stack_10->SetBinError(16,0.004414705);
   VbbHcc_algo_H_pt_stack_10->SetBinError(17,0.004066412);
   VbbHcc_algo_H_pt_stack_10->SetBinError(18,0.003122095);
   VbbHcc_algo_H_pt_stack_10->SetBinError(19,0.003087115);
   VbbHcc_algo_H_pt_stack_10->SetBinError(20,0.0030676);
   VbbHcc_algo_H_pt_stack_10->SetBinError(21,0.00159489);
   VbbHcc_algo_H_pt_stack_10->SetBinError(22,0.002518924);
   VbbHcc_algo_H_pt_stack_10->SetBinError(23,0.001527628);
   VbbHcc_algo_H_pt_stack_10->SetBinError(24,0.001312091);
   VbbHcc_algo_H_pt_stack_10->SetBinError(25,0.001015677);
   VbbHcc_algo_H_pt_stack_10->SetBinError(26,0.001090559);
   VbbHcc_algo_H_pt_stack_10->SetBinError(27,0.001519893);
   VbbHcc_algo_H_pt_stack_10->SetBinError(28,0.000968132);
   VbbHcc_algo_H_pt_stack_10->SetBinError(29,0.001287969);
   VbbHcc_algo_H_pt_stack_10->SetBinError(30,0.0006265514);
   VbbHcc_algo_H_pt_stack_10->SetBinError(31,0.0009000215);
   VbbHcc_algo_H_pt_stack_10->SetBinError(32,0.0006468577);
   VbbHcc_algo_H_pt_stack_10->SetBinError(34,0.0009033746);
   VbbHcc_algo_H_pt_stack_10->SetBinError(35,0.000646865);
   VbbHcc_algo_H_pt_stack_10->SetBinError(41,0.0006263911);
   VbbHcc_algo_H_pt_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_10,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_11 = new TH1D("VbbHcc_algo_H_pt_stack_11","",40,0,2000);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(1,0.1826857);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(2,1.085982);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(3,0.986348);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(4,0.5403672);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(5,0.2000022);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(6,0.09095006);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(7,0.08737905);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(8,0.05328706);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(9,0.01626735);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(10,0.006505989);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(11,0.01278577);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(12,0.00248549);
   VbbHcc_algo_H_pt_stack_11->SetBinError(1,0.0216811);
   VbbHcc_algo_H_pt_stack_11->SetBinError(2,0.05418631);
   VbbHcc_algo_H_pt_stack_11->SetBinError(3,0.05215072);
   VbbHcc_algo_H_pt_stack_11->SetBinError(4,0.03841753);
   VbbHcc_algo_H_pt_stack_11->SetBinError(5,0.0225238);
   VbbHcc_algo_H_pt_stack_11->SetBinError(6,0.01569023);
   VbbHcc_algo_H_pt_stack_11->SetBinError(7,0.01534111);
   VbbHcc_algo_H_pt_stack_11->SetBinError(8,0.01188228);
   VbbHcc_algo_H_pt_stack_11->SetBinError(9,0.006169837);
   VbbHcc_algo_H_pt_stack_11->SetBinError(10,0.004259161);
   VbbHcc_algo_H_pt_stack_11->SetBinError(11,0.005744547);
   VbbHcc_algo_H_pt_stack_11->SetBinError(12,0.00248549);
   VbbHcc_algo_H_pt_stack_11->SetEntries(1458);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_11,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_12 = new TH1D("VbbHcc_algo_H_pt_stack_12","",40,0,2000);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(1,397.1244);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(2,2641.725);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(3,6284.408);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(4,4795.69);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(5,2072.007);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(6,971.9002);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(7,502.755);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(8,274.9227);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(9,101.3733);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(10,40.53799);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(11,66.50507);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(12,50.49436);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(13,29.44388);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(14,19.72412);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(15,12.71471);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(16,18.82062);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(17,4.382724);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(18,3.933459);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(19,8.548381);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(21,9.226369);
   VbbHcc_algo_H_pt_stack_12->SetBinError(1,53.15339);
   VbbHcc_algo_H_pt_stack_12->SetBinError(2,135.9278);
   VbbHcc_algo_H_pt_stack_12->SetBinError(3,214.578);
   VbbHcc_algo_H_pt_stack_12->SetBinError(4,182.2346);
   VbbHcc_algo_H_pt_stack_12->SetBinError(5,120.7578);
   VbbHcc_algo_H_pt_stack_12->SetBinError(6,82.81961);
   VbbHcc_algo_H_pt_stack_12->SetBinError(7,60.16948);
   VbbHcc_algo_H_pt_stack_12->SetBinError(8,44.15958);
   VbbHcc_algo_H_pt_stack_12->SetBinError(9,27.04616);
   VbbHcc_algo_H_pt_stack_12->SetBinError(10,17.15269);
   VbbHcc_algo_H_pt_stack_12->SetBinError(11,20.86459);
   VbbHcc_algo_H_pt_stack_12->SetBinError(12,18.61982);
   VbbHcc_algo_H_pt_stack_12->SetBinError(13,13.37421);
   VbbHcc_algo_H_pt_stack_12->SetBinError(14,13.00846);
   VbbHcc_algo_H_pt_stack_12->SetBinError(15,9.863792);
   VbbHcc_algo_H_pt_stack_12->SetBinError(16,13.82349);
   VbbHcc_algo_H_pt_stack_12->SetBinError(17,4.382724);
   VbbHcc_algo_H_pt_stack_12->SetBinError(18,3.933459);
   VbbHcc_algo_H_pt_stack_12->SetBinError(19,8.548381);
   VbbHcc_algo_H_pt_stack_12->SetBinError(21,9.226369);
   VbbHcc_algo_H_pt_stack_12->SetEntries(2917);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_pt__29 = new TH1D("VbbHcc_algo_H_pt__29","",40,0,2000);
   VbbHcc_algo_H_pt__29->SetBinContent(1,13531);
   VbbHcc_algo_H_pt__29->SetBinContent(2,60195);
   VbbHcc_algo_H_pt__29->SetBinContent(3,128434);
   VbbHcc_algo_H_pt__29->SetBinContent(4,173213);
   VbbHcc_algo_H_pt__29->SetBinContent(5,155484);
   VbbHcc_algo_H_pt__29->SetBinContent(6,103567);
   VbbHcc_algo_H_pt__29->SetBinContent(7,68638);
   VbbHcc_algo_H_pt__29->SetBinContent(8,49106);
   VbbHcc_algo_H_pt__29->SetBinContent(9,31649);
   VbbHcc_algo_H_pt__29->SetBinContent(10,19237);
   VbbHcc_algo_H_pt__29->SetBinContent(11,11864);
   VbbHcc_algo_H_pt__29->SetBinContent(12,7351);
   VbbHcc_algo_H_pt__29->SetBinContent(13,4450);
   VbbHcc_algo_H_pt__29->SetBinContent(14,2874);
   VbbHcc_algo_H_pt__29->SetBinContent(15,1920);
   VbbHcc_algo_H_pt__29->SetBinContent(16,1319);
   VbbHcc_algo_H_pt__29->SetBinContent(17,869);
   VbbHcc_algo_H_pt__29->SetBinContent(18,621);
   VbbHcc_algo_H_pt__29->SetBinContent(19,406);
   VbbHcc_algo_H_pt__29->SetBinContent(20,283);
   VbbHcc_algo_H_pt__29->SetBinContent(21,203);
   VbbHcc_algo_H_pt__29->SetBinContent(22,138);
   VbbHcc_algo_H_pt__29->SetBinContent(23,112);
   VbbHcc_algo_H_pt__29->SetBinContent(24,77);
   VbbHcc_algo_H_pt__29->SetBinContent(25,46);
   VbbHcc_algo_H_pt__29->SetBinContent(26,41);
   VbbHcc_algo_H_pt__29->SetBinContent(27,41);
   VbbHcc_algo_H_pt__29->SetBinContent(28,23);
   VbbHcc_algo_H_pt__29->SetBinContent(29,14);
   VbbHcc_algo_H_pt__29->SetBinContent(30,11);
   VbbHcc_algo_H_pt__29->SetBinContent(31,12);
   VbbHcc_algo_H_pt__29->SetBinContent(32,5);
   VbbHcc_algo_H_pt__29->SetBinContent(33,8);
   VbbHcc_algo_H_pt__29->SetBinContent(34,1);
   VbbHcc_algo_H_pt__29->SetBinContent(35,3);
   VbbHcc_algo_H_pt__29->SetBinContent(36,3);
   VbbHcc_algo_H_pt__29->SetBinContent(37,1);
   VbbHcc_algo_H_pt__29->SetBinContent(38,3);
   VbbHcc_algo_H_pt__29->SetBinContent(39,2);
   VbbHcc_algo_H_pt__29->SetBinContent(40,1);
   VbbHcc_algo_H_pt__29->SetBinContent(41,5);
   VbbHcc_algo_H_pt__29->SetEntries(835761);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt__29->SetLineColor(ci);
   VbbHcc_algo_H_pt__29->SetLineWidth(2);
   VbbHcc_algo_H_pt__29->SetMarkerStyle(20);
   VbbHcc_algo_H_pt__29->SetMarkerSize(1.2);
   VbbHcc_algo_H_pt__29->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt__29->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt__29->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt__29->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt__29->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt__29->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt__29->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt__29->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt__29->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt__29->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt__29->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt__29->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt__29->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt__29->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt__29->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_pt_fx1029[40] = {
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
   Double_t Graph_from_VbbHcc_algo_H_pt_fy1029[40] = {
   440146,
   1915370,
   1651971,
   182184,
   20072.49,
   9541.795,
   4761.715,
   2651.817,
   1489.954,
   895.8271,
   628.4861,
   430.3205,
   281.4467,
   197.3659,
   129.8092,
   107.1319,
   64.14723,
   44.53142,
   43.67021,
   22.54259,
   24.20529,
   11.58931,
   9.544198,
   8.224828,
   4.715341,
   4.761613,
   2.690394,
   1.409273,
   3.33346,
   1.173989,
   0.6813013,
   0.4170652,
   0.4654973,
   0.2952555,
   0.853423,
   0.1857878,
   0.2228243,
   0.5541615,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_H_pt_fex1029[40] = {
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
   Double_t Graph_from_VbbHcc_algo_H_pt_fey1029[40] = {
   27435.78,
   58709.46,
   58979.6,
   15271.67,
   138.6388,
   93.47857,
   64.24988,
   46.94902,
   29.78013,
   19.36224,
   22.19442,
   19.68097,
   14.30751,
   13.71761,
   10.53792,
   14.53548,
   5.00159,
   4.42992,
   8.782384,
   1.480133,
   9.295999,
   1.041006,
   0.9766731,
   1.46764,
   0.6966428,
   0.8210442,
   0.446383,
   0.3309519,
   0.6983443,
   0.3105195,
   0.2788637,
   0.1725615,
   0.193753,
   0.1505585,
   0.4346355,
   0.1317679,
   0.1577594,
   0.3380161,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_H_pt_fx1029,Graph_from_VbbHcc_algo_H_pt_fy1029,Graph_from_VbbHcc_algo_H_pt_fex1029,Graph_from_VbbHcc_algo_H_pt_fey1029);
   gre->SetName("Graph_from_VbbHcc_algo_H_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_pt1029 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_pt1029","",100,0,2200);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->SetMaximum(2171487);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_pt1029->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_pt1029);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_pt","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_pt_VbbHcc_18->cd();
  
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
   
   TH1D *data_mc_ratio__30 = new TH1D("data_mc_ratio__30","",40,0,2000);
   data_mc_ratio__30->SetBinContent(1,0.03074207);
   data_mc_ratio__30->SetBinContent(2,0.03142735);
   data_mc_ratio__30->SetBinContent(3,0.07774594);
   data_mc_ratio__30->SetBinContent(4,0.9507586);
   data_mc_ratio__30->SetBinContent(5,7.746124);
   data_mc_ratio__30->SetBinContent(6,10.85404);
   data_mc_ratio__30->SetBinContent(7,14.41455);
   data_mc_ratio__30->SetBinContent(8,18.51787);
   data_mc_ratio__30->SetBinContent(9,21.24159);
   data_mc_ratio__30->SetBinContent(10,21.47401);
   data_mc_ratio__30->SetBinContent(11,18.87711);
   data_mc_ratio__30->SetBinContent(12,17.08261);
   data_mc_ratio__30->SetBinContent(13,15.81116);
   data_mc_ratio__30->SetBinContent(14,14.56179);
   data_mc_ratio__30->SetBinContent(15,14.79094);
   data_mc_ratio__30->SetBinContent(16,12.31193);
   data_mc_ratio__30->SetBinContent(17,13.54696);
   data_mc_ratio__30->SetBinContent(18,13.94521);
   data_mc_ratio__30->SetBinContent(19,9.296955);
   data_mc_ratio__30->SetBinContent(20,12.55401);
   data_mc_ratio__30->SetBinContent(21,8.386597);
   data_mc_ratio__30->SetBinContent(22,11.90752);
   data_mc_ratio__30->SetBinContent(23,11.73488);
   data_mc_ratio__30->SetBinContent(24,9.361898);
   data_mc_ratio__30->SetBinContent(25,9.755392);
   data_mc_ratio__30->SetBinContent(26,8.610528);
   data_mc_ratio__30->SetBinContent(27,15.2394);
   data_mc_ratio__30->SetBinContent(28,16.32047);
   data_mc_ratio__30->SetBinContent(29,4.199841);
   data_mc_ratio__30->SetBinContent(30,9.369764);
   data_mc_ratio__30->SetBinContent(31,17.61335);
   data_mc_ratio__30->SetBinContent(32,11.98853);
   data_mc_ratio__30->SetBinContent(33,17.18592);
   data_mc_ratio__30->SetBinContent(34,3.386898);
   data_mc_ratio__30->SetBinContent(35,3.515256);
   data_mc_ratio__30->SetBinContent(36,16.14746);
   data_mc_ratio__30->SetBinContent(37,4.48784);
   data_mc_ratio__30->SetBinContent(38,5.413584);
   data_mc_ratio__30->SetBinContent(41,66.79604);
   data_mc_ratio__30->SetBinError(1,0.0002642824);
   data_mc_ratio__30->SetBinError(2,0.0001280936);
   data_mc_ratio__30->SetBinError(3,0.000216939);
   data_mc_ratio__30->SetBinError(4,0.002284441);
   data_mc_ratio__30->SetBinError(5,0.01964453);
   data_mc_ratio__30->SetBinError(6,0.03372723);
   data_mc_ratio__30->SetBinError(7,0.05501978);
   data_mc_ratio__30->SetBinError(8,0.08356488);
   data_mc_ratio__30->SetBinError(9,0.1194007);
   data_mc_ratio__30->SetBinError(10,0.1548262);
   data_mc_ratio__30->SetBinError(11,0.1733085);
   data_mc_ratio__30->SetBinError(12,0.1992421);
   data_mc_ratio__30->SetBinError(13,0.2370193);
   data_mc_ratio__30->SetBinError(14,0.271626);
   data_mc_ratio__30->SetBinError(15,0.3375555);
   data_mc_ratio__30->SetBinError(16,0.3390031);
   data_mc_ratio__30->SetBinError(17,0.4595492);
   data_mc_ratio__30->SetBinError(18,0.5596021);
   data_mc_ratio__30->SetBinError(19,0.4614001);
   data_mc_ratio__30->SetBinError(20,0.7462586);
   data_mc_ratio__30->SetBinError(21,0.5886237);
   data_mc_ratio__30->SetBinError(22,1.013636);
   data_mc_ratio__30->SetBinError(23,1.108842);
   data_mc_ratio__30->SetBinError(24,1.066887);
   data_mc_ratio__30->SetBinError(25,1.438354);
   data_mc_ratio__30->SetBinError(26,1.344739);
   data_mc_ratio__30->SetBinError(27,2.379995);
   data_mc_ratio__30->SetBinError(28,3.403053);
   data_mc_ratio__30->SetBinError(29,1.122455);
   data_mc_ratio__30->SetBinError(30,2.82509);
   data_mc_ratio__30->SetBinError(31,5.084537);
   data_mc_ratio__30->SetBinError(32,5.361435);
   data_mc_ratio__30->SetBinError(33,6.076141);
   data_mc_ratio__30->SetBinError(34,3.386898);
   data_mc_ratio__30->SetBinError(35,2.029534);
   data_mc_ratio__30->SetBinError(36,9.322738);
   data_mc_ratio__30->SetBinError(37,4.48784);
   data_mc_ratio__30->SetBinError(38,3.125534);
   data_mc_ratio__30->SetBinError(41,72.66364);
   data_mc_ratio__30->SetMinimum(0.4);
   data_mc_ratio__30->SetMaximum(1.6);
   data_mc_ratio__30->SetEntries(293.6118);
   data_mc_ratio__30->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__30->SetLineColor(ci);
   data_mc_ratio__30->SetLineWidth(2);
   data_mc_ratio__30->SetMarkerStyle(20);
   data_mc_ratio__30->SetMarkerSize(1.2);
   data_mc_ratio__30->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__30->GetXaxis()->SetRange(7,30);
   data_mc_ratio__30->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__30->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__30->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__30->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__30->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__30->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__30->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__30->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__30->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__30->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__30->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__30->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__30->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__30->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1030[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1030[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1030[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1030[40] = {
   0.06233337,
   0.03065176,
   0.03570257,
   0.08382552,
   0.006906905,
   0.009796749,
   0.01349301,
   0.01770448,
   0.01998728,
   0.02161382,
   0.03531409,
   0.04573561,
   0.05083557,
   0.06950344,
   0.08118005,
   0.1356784,
   0.07797048,
   0.09947855,
   0.201107,
   0.0656594,
   0.3840483,
   0.08982467,
   0.1023316,
   0.1784403,
   0.1477396,
   0.1724299,
   0.1659174,
   0.2348387,
   0.2094954,
   0.2644994,
   0.4093104,
   0.4137519,
   0.4162279,
   0.5099261,
   0.5092849,
   0.7092386,
   0.7079989,
   0.6099595,
   0,
   0};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1030,Graph_from_mc_statistical_error_fy1030,Graph_from_mc_statistical_error_fex1030,Graph_from_mc_statistical_error_fey1030);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1030 = new TH1F("Graph_Graph_from_mc_statistical_error1030","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1030->SetMinimum(0.1489137);
   Graph_Graph_from_mc_statistical_error1030->SetMaximum(1.851086);
   Graph_Graph_from_mc_statistical_error1030->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1030->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1030);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_18->cd();
   H_pt_VbbHcc_18->Modified();
   H_pt_VbbHcc_18->cd();
   H_pt_VbbHcc_18->SetSelected(H_pt_VbbHcc_18);
}
