void Z_pt_VbbHcc_17()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_17/Z_pt_VbbHcc_17
//=========  (Mon Nov 21 13:06:59 2022) by ROOT version 6.14/09
   TCanvas *Z_pt_VbbHcc_17 = new TCanvas("Z_pt_VbbHcc_17", "Z_pt_VbbHcc_17",0,0,600,600);
   Z_pt_VbbHcc_17->SetHighLightColor(2);
   Z_pt_VbbHcc_17->Range(0,0,1,1);
   Z_pt_VbbHcc_17->SetFillColor(0);
   Z_pt_VbbHcc_17->SetFillStyle(4000);
   Z_pt_VbbHcc_17->SetBorderMode(0);
   Z_pt_VbbHcc_17->SetBorderSize(2);
   Z_pt_VbbHcc_17->SetFrameFillStyle(1000);
   Z_pt_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-32784.86,1562.903,3.275208e+07);
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
   st->SetMaximum(2.807009e+07);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",40,0,2000);
   st_stack_10->SetMinimum(0.01);
   st_stack_10->SetMaximum(2.94736e+07);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetRange(7,30);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetLabelSize(0.035);
   st_stack_10->GetXaxis()->SetTitleSize(0.035);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/50.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetLabelSize(0.05);
   st_stack_10->GetYaxis()->SetTitleSize(0.057);
   st_stack_10->GetYaxis()->SetTitleOffset(1.2);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetLabelSize(0.035);
   st_stack_10->GetZaxis()->SetTitleSize(0.035);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_duong_Z_pt_stack_1 = new TH1D("VbbHcc_duong_Z_pt_stack_1","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(1,6064768);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(2,1.118524e+07);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(3,4262095);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(4,277126.4);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(5,26397.63);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(6,1863.676);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(7,2797.812);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(8,3265.391);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(15,1023.624);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(16,153.2016);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(1,89041.5);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(2,121020.3);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(3,74839.87);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(4,18998.08);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(5,5704.715);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(6,1323.955);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(7,1792.823);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(8,1908.41);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(15,1023.624);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(16,153.2016);
   VbbHcc_duong_Z_pt_stack_1->SetEntries(17541);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_2 = new TH1D("VbbHcc_duong_Z_pt_stack_2","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(1,44669.44);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(2,85583.54);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(3,52599.96);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(4,22296.5);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(5,10002.68);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(6,4957.334);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(7,2649.161);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(8,1489.295);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(9,886.5593);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(10,555.149);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(11,370.8985);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(12,242.4204);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(13,160.1586);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(14,116.3586);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(15,80.11672);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(16,53.05164);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(17,40.70435);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(18,28.22486);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(19,19.73953);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(20,15.00777);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(21,10.85164);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(22,8.310392);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(23,7.732943);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(24,5.259344);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(25,7.314013);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(26,2.327835);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(27,2.40711);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(28,2.486304);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(29,0.5789772);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(30,1.158189);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(31,0.4767477);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(32,0.3312761);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(33,0.9207568);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(34,0.6599603);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(35,0.2917918);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(36,0.3935729);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(39,0.05330684);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(40,0.2403569);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(41,0.04595925);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(1,85.45988);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(2,118.9975);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(3,95.92435);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(4,64.83226);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(5,44.60474);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(6,32.19085);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(7,24.09017);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(8,18.44585);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(9,14.49536);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(10,11.55305);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(11,9.551552);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(12,7.812548);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(13,6.393427);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(14,5.491518);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(15,4.673324);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(16,3.731796);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(17,3.254051);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(18,2.731313);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(19,2.30902);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(20,2.044956);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(21,1.823187);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(22,1.523948);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(23,1.495775);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(24,1.2019);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(25,1.509824);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(26,0.7759754);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(27,0.8680401);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(28,0.8356815);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(29,0.4042088);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(30,0.5834041);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(31,0.3802778);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(32,0.2861043);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(33,0.5127644);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(34,0.430562);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(35,0.2917918);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(36,0.3388402);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(39,0.05330684);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(40,0.2403569);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(41,0.04595925);
   VbbHcc_duong_Z_pt_stack_2->SetEntries(3055962);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_2,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_3 = new TH1D("VbbHcc_duong_Z_pt_stack_3","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(1,696302.9);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(2,1316219);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(3,860351.8);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(4,267854.8);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(5,92660.13);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(6,38906.19);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(7,18703.7);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(8,9793.633);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(9,5619.233);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(10,3432.901);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(11,2148.718);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(12,1414.983);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(13,961.8349);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(14,660.6807);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(15,452.7642);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(16,312.3968);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(17,234.3252);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(18,163.6385);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(19,122.381);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(20,90.61444);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(21,65.88519);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(22,48.34627);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(23,34.98553);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(24,28.37704);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(25,18.84378);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(26,12.98378);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(27,10.94331);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(28,7.540217);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(29,5.353239);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(30,3.957463);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(31,2.803399);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(32,2.305717);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(33,2.068595);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(34,1.860477);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(35,1.030163);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(36,0.5973422);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(37,0.6013498);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(38,0.4434265);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(39,0.2236773);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(40,0.1050595);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(41,0.8624543);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(1,225.7321);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(2,310.0715);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(3,250.3052);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(4,138.9951);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(5,81.6393);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(6,52.96588);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(7,36.82603);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(8,26.71942);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(9,20.32959);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(10,15.94464);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(11,12.66771);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(12,10.2941);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(13,8.526329);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(14,7.086468);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(15,5.872603);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(16,4.880408);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(17,4.212667);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(18,3.535451);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(19,3.064857);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(20,2.649688);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(21,2.271159);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(22,1.90238);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(23,1.634557);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(24,1.460388);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(25,1.19379);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(26,1.011399);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(27,0.912485);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(28,0.7431957);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(29,0.6546922);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(30,0.5334139);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(31,0.4825751);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(32,0.4202987);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(33,0.427424);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(34,0.3802582);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(35,0.2883492);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(36,0.2158085);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(37,0.2120687);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(38,0.1858353);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(39,0.1320073);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(40,0.1050595);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(41,0.2680984);
   VbbHcc_duong_Z_pt_stack_3->SetEntries(5.062272e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_Z_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_3->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_3,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_4 = new TH1D("VbbHcc_duong_Z_pt_stack_4","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(1,6777.066);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(2,15405.8);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(3,16090.7);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(4,11258.57);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(5,4755.371);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(6,1002.109);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(7,76.31155);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(8,5.498827);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(9,1.24426);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(15,0.4299679);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(1,51.38819);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(2,77.57089);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(3,79.30558);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(4,66.38035);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(5,43.23225);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(6,19.83383);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(7,5.523002);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(8,1.484962);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(9,0.7451185);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(15,0.4299679);
   VbbHcc_duong_Z_pt_stack_4->SetEntries(148572);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_Z_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_4->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_4,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_5 = new TH1D("VbbHcc_duong_Z_pt_stack_5","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(1,3930.684);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(2,9324.949);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(3,9477.064);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(4,6739.213);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(5,3076.451);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(6,724.5699);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(7,90.26904);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(8,15.98567);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(9,2.897648);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(1,72.22099);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(2,110.9606);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(3,112.2042);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(4,94.6326);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(5,64.03841);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(6,31.17567);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(7,10.77397);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(8,4.690281);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(9,1.677759);
   VbbHcc_duong_Z_pt_stack_5->SetEntries(26540);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_Z_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_5->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_5,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_6 = new TH1D("VbbHcc_duong_Z_pt_stack_6","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(1,284.0561);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(2,407.9056);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(3,191.7298);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(4,78.81307);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(5,45.08323);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(6,24.71063);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(7,14.86387);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(8,11.48885);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(9,6.787811);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(10,5.318599);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(11,2.749628);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(12,1.929872);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(13,1.588739);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(14,1.861759);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(15,0.6013039);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(16,0.2848627);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(17,0.2532061);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(19,0.1916607);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(25,0.2562129);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(1,8.188017);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(2,9.763858);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(3,6.706876);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(4,4.267149);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(5,3.238573);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(6,2.407463);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(7,1.836134);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(8,1.590027);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(9,1.268489);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(10,1.130959);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(11,0.8029052);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(12,0.6478236);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(13,0.6033372);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(14,0.6494372);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(15,0.3518719);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(16,0.2483733);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(17,0.2532061);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(19,0.1916607);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(25,0.2562129);
   VbbHcc_duong_Z_pt_stack_6->SetEntries(4860);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_Z_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_6->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_6,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_7 = new TH1D("VbbHcc_duong_Z_pt_stack_7","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(1,502.3312);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(2,657.3682);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(3,384.9463);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(4,187.5454);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(5,107.0039);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(6,54.82407);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(7,32.82059);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(8,22.55982);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(9,10.72713);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(10,4.221392);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(11,2.672471);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(12,2.138372);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(13,0.6116261);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(14,0.7028437);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(15,0.3271381);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(17,0.1849707);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(18,0.5236105);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(19,0.1676428);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(21,0.1837929);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(22,0.1236251);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(25,0.1336818);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(1,9.235967);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(2,10.54604);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(3,8.046383);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(4,5.588312);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(5,4.248169);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(6,3.0226);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(7,2.32224);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(8,1.96594);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(9,1.357878);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(10,0.8278451);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(11,0.6580767);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(12,0.6042958);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(13,0.3127807);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(14,0.3524461);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(15,0.2313973);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(17,0.1849707);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(18,0.3029253);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(19,0.1676428);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(21,0.1837929);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(22,0.1236251);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(25,0.1336818);
   VbbHcc_duong_Z_pt_stack_7->SetEntries(12244);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_Z_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_7->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_7,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_8 = new TH1D("VbbHcc_duong_Z_pt_stack_8","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(1,556.4234);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(2,640.0345);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(3,320.9448);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(4,160.5865);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(5,79.81983);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(6,39.3946);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(7,23.70235);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(8,9.642401);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(9,6.314771);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(10,3.968689);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(11,2.460836);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(12,1.578033);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(13,0.7368253);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(14,0.4584697);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(15,0.2177781);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(16,0.2363491);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(17,0.271006);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(1,11.07907);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(2,11.80457);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(3,8.360984);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(4,5.927122);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(5,4.17285);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(6,2.913275);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(7,2.225172);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(8,1.441069);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(9,1.170329);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(10,0.9136455);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(11,0.7490667);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(12,0.5986513);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(13,0.4266737);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(14,0.324197);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(15,0.2177781);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(16,0.2363491);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(17,0.271006);
   VbbHcc_duong_Z_pt_stack_8->SetEntries(8846);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_Z_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_8->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_8,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_9 = new TH1D("VbbHcc_duong_Z_pt_stack_9","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(1,140.7159);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(2,218.9014);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(3,134.941);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(4,68.83816);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(5,35.34266);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(6,19.50775);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(7,11.05372);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(8,6.372943);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(9,3.516607);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(10,1.983961);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(11,1.035409);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(12,0.6396018);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(13,0.3479244);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(14,0.1994705);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(15,0.1367296);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(16,0.09100914);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(17,0.06502589);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(18,0.045936);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(19,0.0254426);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(20,0.03141357);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(21,0.009926486);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(22,0.007458137);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(23,0.01019872);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(24,0.005463356);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(25,0.009939043);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(26,0.003276409);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(27,0.005345617);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(31,0.00202901);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(32,0.001911414);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(38,0.00197611);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(39,0.001772933);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(1,0.5221183);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(2,0.650262);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(3,0.5092659);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(4,0.3633829);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(5,0.2601891);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(6,0.1930937);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(7,0.1455893);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(8,0.1105777);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(9,0.08177933);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(10,0.06175731);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(11,0.04419829);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(12,0.03457982);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(13,0.02560983);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(14,0.01919953);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(15,0.01632533);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(16,0.01314073);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(17,0.01112621);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(18,0.00923487);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(19,0.006912991);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(20,0.007921583);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(21,0.004467416);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(22,0.003782559);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(23,0.004227318);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(24,0.003180457);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(25,0.004447986);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(26,0.002389461);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(27,0.003315153);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(31,0.00202901);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(32,0.001911414);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(38,0.00197611);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(39,0.001772933);
   VbbHcc_duong_Z_pt_stack_9->SetEntries(365953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_Z_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_9->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_9,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_10 = new TH1D("VbbHcc_duong_Z_pt_stack_10","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(1,19.10364);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(2,42.47301);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(3,43.65087);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(4,29.43774);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(5,16.78971);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(6,9.463572);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(7,5.647102);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(8,3.374156);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(9,2.069127);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(10,1.313883);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(11,0.8529531);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(12,0.5582749);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(13,0.3529076);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(14,0.2366464);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(15,0.1648925);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(16,0.127464);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(17,0.08204155);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(18,0.06396957);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(19,0.05083267);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(20,0.0466683);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(21,0.03366246);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(22,0.0191336);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(23,0.01852695);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(24,0.01824632);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(25,0.01298643);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(26,0.008466752);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(27,0.008225018);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(28,0.003189607);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(29,0.005091216);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(30,0.003133573);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(31,0.001142838);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(32,0.002268743);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(33,0.00217029);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(34,0.002903104);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(36,0.000873334);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(37,0.0002089966);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(38,0.0004260947);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(39,0.0008855725);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(41,0.001867851);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(1,0.09212842);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(2,0.1373225);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(3,0.1391981);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(4,0.114212);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(5,0.08611758);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(6,0.06465199);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(7,0.04991261);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(8,0.03855903);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(9,0.03018037);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(10,0.02408652);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(11,0.01938365);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(12,0.01569347);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(13,0.01250717);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(14,0.01021962);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(15,0.008523287);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(16,0.007514304);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(17,0.006028364);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(18,0.005342499);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(19,0.004743033);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(20,0.00455205);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(21,0.003822005);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(22,0.002911631);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(23,0.002858242);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(24,0.002834625);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(25,0.002401733);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(26,0.001935662);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(27,0.001942043);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(28,0.001206848);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(29,0.00147602);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(30,0.001186758);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(31,0.0006800375);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(32,0.0009879412);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(33,0.0009719137);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(34,0.001111227);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(36,0.0006178203);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(37,0.0002089966);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(38,0.0004260947);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(39,0.0006262728);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(41,0.0009357636);
   VbbHcc_duong_Z_pt_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_Z_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_10->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_10,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_11 = new TH1D("VbbHcc_duong_Z_pt_stack_11","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(1,2.326068);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(2,4.009412);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(3,2.396578);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(4,1.085062);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(5,0.5077394);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(6,0.2548066);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(7,0.1328156);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(8,0.07214607);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(9,0.04856512);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(10,0.01536258);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(11,0.01669785);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(12,0.002147124);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(13,0.002998465);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(14,0.002631403);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(18,0.001251058);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(1,0.06517526);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(2,0.08571548);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(3,0.0661242);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(4,0.04429262);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(5,0.03002525);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(6,0.02115699);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(7,0.01625258);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(8,0.01166897);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(9,0.009353434);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(10,0.005219914);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(11,0.005190645);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(12,0.001999674);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(13,0.002147215);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(14,0.001949608);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(18,0.001251058);
   VbbHcc_duong_Z_pt_stack_11->SetEntries(7275);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_Z_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_11->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_11,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_12 = new TH1D("VbbHcc_duong_Z_pt_stack_12","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(1,7247.912);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(2,17797.5);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(3,19126.61);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(4,11694.21);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(5,5176.499);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(6,2511.214);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(7,1262.97);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(8,618.7301);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(9,254.3385);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(10,131.0425);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(11,63.27723);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(12,13.11892);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(13,16.69902);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(14,3.705986);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(15,10.39224);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(16,0.1053137);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(17,3.238899);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(1,193.8459);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(2,304.8864);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(3,316.0135);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(4,246.6928);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(5,163.3356);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(6,114.1658);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(7,81.25753);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(8,56.43207);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(9,36.7338);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(10,25.89433);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(11,18.72215);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(12,6.837517);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(13,7.497294);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(14,3.530154);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(15,7.420049);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(16,0.1053137);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(17,3.238899);
   VbbHcc_duong_Z_pt_stack_12->SetEntries(14601);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_Z_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_12->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_Z_pt__19 = new TH1D("VbbHcc_duong_Z_pt__19","",40,0,2000);
   VbbHcc_duong_Z_pt__19->SetBinContent(1,347660);
   VbbHcc_duong_Z_pt__19->SetBinContent(2,838617);
   VbbHcc_duong_Z_pt__19->SetBinContent(3,899036);
   VbbHcc_duong_Z_pt__19->SetBinContent(4,621841);
   VbbHcc_duong_Z_pt__19->SetBinContent(5,381958);
   VbbHcc_duong_Z_pt__19->SetBinContent(6,243086);
   VbbHcc_duong_Z_pt__19->SetBinContent(7,169755);
   VbbHcc_duong_Z_pt__19->SetBinContent(8,129823);
   VbbHcc_duong_Z_pt__19->SetBinContent(9,96441);
   VbbHcc_duong_Z_pt__19->SetBinContent(10,63528);
   VbbHcc_duong_Z_pt__19->SetBinContent(11,40104);
   VbbHcc_duong_Z_pt__19->SetBinContent(12,25280);
   VbbHcc_duong_Z_pt__19->SetBinContent(13,16047);
   VbbHcc_duong_Z_pt__19->SetBinContent(14,10462);
   VbbHcc_duong_Z_pt__19->SetBinContent(15,6976);
   VbbHcc_duong_Z_pt__19->SetBinContent(16,4671);
   VbbHcc_duong_Z_pt__19->SetBinContent(17,3254);
   VbbHcc_duong_Z_pt__19->SetBinContent(18,2201);
   VbbHcc_duong_Z_pt__19->SetBinContent(19,1515);
   VbbHcc_duong_Z_pt__19->SetBinContent(20,1072);
   VbbHcc_duong_Z_pt__19->SetBinContent(21,811);
   VbbHcc_duong_Z_pt__19->SetBinContent(22,576);
   VbbHcc_duong_Z_pt__19->SetBinContent(23,477);
   VbbHcc_duong_Z_pt__19->SetBinContent(24,312);
   VbbHcc_duong_Z_pt__19->SetBinContent(25,236);
   VbbHcc_duong_Z_pt__19->SetBinContent(26,156);
   VbbHcc_duong_Z_pt__19->SetBinContent(27,132);
   VbbHcc_duong_Z_pt__19->SetBinContent(28,103);
   VbbHcc_duong_Z_pt__19->SetBinContent(29,72);
   VbbHcc_duong_Z_pt__19->SetBinContent(30,57);
   VbbHcc_duong_Z_pt__19->SetBinContent(31,39);
   VbbHcc_duong_Z_pt__19->SetBinContent(32,28);
   VbbHcc_duong_Z_pt__19->SetBinContent(33,17);
   VbbHcc_duong_Z_pt__19->SetBinContent(34,22);
   VbbHcc_duong_Z_pt__19->SetBinContent(35,18);
   VbbHcc_duong_Z_pt__19->SetBinContent(36,11);
   VbbHcc_duong_Z_pt__19->SetBinContent(37,10);
   VbbHcc_duong_Z_pt__19->SetBinContent(38,4);
   VbbHcc_duong_Z_pt__19->SetBinContent(39,6);
   VbbHcc_duong_Z_pt__19->SetBinContent(40,6);
   VbbHcc_duong_Z_pt__19->SetBinContent(41,13);
   VbbHcc_duong_Z_pt__19->SetEntries(3906433);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt__19->SetLineColor(ci);
   VbbHcc_duong_Z_pt__19->SetLineWidth(2);
   VbbHcc_duong_Z_pt__19->SetMarkerStyle(20);
   VbbHcc_duong_Z_pt__19->SetMarkerSize(1.2);
   VbbHcc_duong_Z_pt__19->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt__19->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt__19->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt__19->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt__19->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt__19->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt__19->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt__19->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt__19->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt__19->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt__19->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt__19->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt__19->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt__19->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt__19->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_Z_pt_fx1019[40] = {
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
   Double_t Graph_from_VbbHcc_duong_Z_pt_fy1019[40] = {
   6825201,
   1.263154e+07,
   5220819,
   597496,
   142353.3,
   50113.24,
   25668.45,
   15242.04,
   6793.736,
   4135.915,
   2592.682,
   1677.368,
   1142.334,
   784.207,
   1568.775,
   519.495,
   279.1247,
   192.4981,
   142.5561,
   105.7003,
   76.96421,
   56.80688,
   42.7472,
   33.66009,
   26.57061,
   15.32336,
   13.36399,
   10.02971,
   5.937307,
   5.118785,
   3.283319,
   2.641173,
   2.991522,
   2.52334,
   1.321955,
   0.9917884,
   0.6015588,
   0.4458287,
   0.2796426,
   0.3454164};
   Double_t Graph_from_VbbHcc_duong_Z_pt_fex1019[40] = {
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
   Double_t Graph_from_VbbHcc_duong_Z_pt_fey1019[40] = {
   89042.08,
   121021.2,
   74841.14,
   19000.65,
   5708.337,
   1330.835,
   1795.247,
   1909.529,
   44.5082,
   32.57337,
   24.57362,
   14.65949,
   13.05482,
   9.668938,
   1023.678,
   153.3251,
   6.244823,
   4.477875,
   3.845755,
   3.347055,
   2.918217,
   2.44065,
   2.215659,
   1.891379,
   1.946342,
   1.274784,
   1.259419,
   1.118349,
   0.7694211,
   0.7905012,
   0.6144059,
   0.5084401,
   0.6675474,
   0.5744399,
   0.4102289,
   0.4017292,
   0.2120688,
   0.1858463,
   0.1423765,
   0.2623146};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_duong_Z_pt_fx1019,Graph_from_VbbHcc_duong_Z_pt_fy1019,Graph_from_VbbHcc_duong_Z_pt_fex1019,Graph_from_VbbHcc_duong_Z_pt_fey1019);
   gre->SetName("Graph_from_VbbHcc_duong_Z_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_Z_pt1019 = new TH1F("Graph_Graph_from_VbbHcc_duong_Z_pt1019","",100,0,2200);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->SetMinimum(0.07479164);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->SetMaximum(1.402782e+07);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_Z_pt1019);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_Z_pt","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_Z_pt","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_pt_VbbHcc_17->cd();
  
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
   
   TH1D *data_mc_ratio__20 = new TH1D("data_mc_ratio__20","",40,0,2000);
   data_mc_ratio__20->SetBinContent(1,0.05093769);
   data_mc_ratio__20->SetBinContent(2,0.06639071);
   data_mc_ratio__20->SetBinContent(3,0.1722021);
   data_mc_ratio__20->SetBinContent(4,1.040745);
   data_mc_ratio__20->SetBinContent(5,2.683169);
   data_mc_ratio__20->SetBinContent(6,4.850734);
   data_mc_ratio__20->SetBinContent(7,6.613372);
   data_mc_ratio__20->SetBinContent(8,8.517427);
   data_mc_ratio__20->SetBinContent(9,14.19558);
   data_mc_ratio__20->SetBinContent(10,15.36008);
   data_mc_ratio__20->SetBinContent(11,15.46815);
   data_mc_ratio__20->SetBinContent(12,15.07123);
   data_mc_ratio__20->SetBinContent(13,14.04756);
   data_mc_ratio__20->SetBinContent(14,13.34086);
   data_mc_ratio__20->SetBinContent(15,4.446783);
   data_mc_ratio__20->SetBinContent(16,8.991424);
   data_mc_ratio__20->SetBinContent(17,11.65787);
   data_mc_ratio__20->SetBinContent(18,11.43388);
   data_mc_ratio__20->SetBinContent(19,10.6274);
   data_mc_ratio__20->SetBinContent(20,10.14188);
   data_mc_ratio__20->SetBinContent(21,10.53736);
   data_mc_ratio__20->SetBinContent(22,10.13962);
   data_mc_ratio__20->SetBinContent(23,11.15863);
   data_mc_ratio__20->SetBinContent(24,9.269138);
   data_mc_ratio__20->SetBinContent(25,8.881993);
   data_mc_ratio__20->SetBinContent(26,10.18053);
   data_mc_ratio__20->SetBinContent(27,9.877288);
   data_mc_ratio__20->SetBinContent(28,10.26949);
   data_mc_ratio__20->SetBinContent(29,12.12671);
   data_mc_ratio__20->SetBinContent(30,11.13545);
   data_mc_ratio__20->SetBinContent(31,11.87823);
   data_mc_ratio__20->SetBinContent(32,10.60135);
   data_mc_ratio__20->SetBinContent(33,5.682727);
   data_mc_ratio__20->SetBinContent(34,8.718602);
   data_mc_ratio__20->SetBinContent(35,13.6162);
   data_mc_ratio__20->SetBinContent(36,11.09107);
   data_mc_ratio__20->SetBinContent(37,16.62348);
   data_mc_ratio__20->SetBinContent(38,8.972055);
   data_mc_ratio__20->SetBinContent(39,21.45596);
   data_mc_ratio__20->SetBinContent(40,17.37034);
   data_mc_ratio__20->SetBinContent(41,14.2813);
   data_mc_ratio__20->SetBinError(1,8.638969e-05);
   data_mc_ratio__20->SetBinError(2,7.249791e-05);
   data_mc_ratio__20->SetBinError(3,0.0001816142);
   data_mc_ratio__20->SetBinError(4,0.001319789);
   data_mc_ratio__20->SetBinError(5,0.004341504);
   data_mc_ratio__20->SetBinError(6,0.009838468);
   data_mc_ratio__20->SetBinError(7,0.01605135);
   data_mc_ratio__20->SetBinError(8,0.02363919);
   data_mc_ratio__20->SetBinError(9,0.04571115);
   data_mc_ratio__20->SetBinError(10,0.0609412);
   data_mc_ratio__20->SetBinError(11,0.07724042);
   data_mc_ratio__20->SetBinError(12,0.09478948);
   data_mc_ratio__20->SetBinError(13,0.110893);
   data_mc_ratio__20->SetBinError(14,0.1304297);
   data_mc_ratio__20->SetBinError(15,0.05324057);
   data_mc_ratio__20->SetBinError(16,0.1315599);
   data_mc_ratio__20->SetBinError(17,0.2043669);
   data_mc_ratio__20->SetBinError(18,0.2437158);
   data_mc_ratio__20->SetBinError(19,0.2730364);
   data_mc_ratio__20->SetBinError(20,0.3097571);
   data_mc_ratio__20->SetBinError(21,0.3700169);
   data_mc_ratio__20->SetBinError(22,0.422484);
   data_mc_ratio__20->SetBinError(23,0.5109184);
   data_mc_ratio__20->SetBinError(24,0.5247616);
   data_mc_ratio__20->SetBinError(25,0.5781685);
   data_mc_ratio__20->SetBinError(26,0.815095);
   data_mc_ratio__20->SetBinError(27,0.8597075);
   data_mc_ratio__20->SetBinError(28,1.011883);
   data_mc_ratio__20->SetBinError(29,1.429146);
   data_mc_ratio__20->SetBinError(30,1.474927);
   data_mc_ratio__20->SetBinError(31,1.902038);
   data_mc_ratio__20->SetBinError(32,2.003467);
   data_mc_ratio__20->SetBinError(33,1.378264);
   data_mc_ratio__20->SetBinError(34,1.858812);
   data_mc_ratio__20->SetBinError(35,3.209369);
   data_mc_ratio__20->SetBinError(36,3.344085);
   data_mc_ratio__20->SetBinError(37,5.256806);
   data_mc_ratio__20->SetBinError(38,4.486028);
   data_mc_ratio__20->SetBinError(39,8.759358);
   data_mc_ratio__20->SetBinError(40,7.091411);
   data_mc_ratio__20->SetBinError(41,5.822442);
   data_mc_ratio__20->SetMinimum(0.4);
   data_mc_ratio__20->SetMaximum(1.6);
   data_mc_ratio__20->SetEntries(248.4383);
   data_mc_ratio__20->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__20->SetLineColor(ci);
   data_mc_ratio__20->SetLineWidth(2);
   data_mc_ratio__20->SetMarkerStyle(20);
   data_mc_ratio__20->SetMarkerSize(1.2);
   data_mc_ratio__20->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__20->GetXaxis()->SetRange(7,30);
   data_mc_ratio__20->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__20->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__20->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__20->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__20->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__20->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__20->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__20->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__20->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__20->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__20->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__20->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__20->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__20->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1020[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1020[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1020[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1020[40] = {
   0.01304607,
   0.009580876,
   0.01433513,
   0.03180047,
   0.04009979,
   0.02655655,
   0.06993985,
   0.1252803,
   0.006551358,
   0.007875734,
   0.009478071,
   0.00873958,
   0.0114282,
   0.01232957,
   0.6525337,
   0.2951426,
   0.02237288,
   0.02326192,
   0.02697714,
   0.03166552,
   0.03791654,
   0.04296398,
   0.05183167,
   0.05619056,
   0.07325166,
   0.08319221,
   0.09423975,
   0.1115036,
   0.1295909,
   0.1544314,
   0.1871295,
   0.1925054,
   0.2231464,
   0.2276506,
   0.3103199,
   0.4050554,
   0.3525321,
   0.4168558,
   0.5091374,
   0.7594155};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1020,Graph_from_mc_statistical_error_fy1020,Graph_from_mc_statistical_error_fex1020,Graph_from_mc_statistical_error_fey1020);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1020 = new TH1F("Graph_Graph_from_mc_statistical_error1020","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1020->SetMinimum(0.08870135);
   Graph_Graph_from_mc_statistical_error1020->SetMaximum(1.911299);
   Graph_Graph_from_mc_statistical_error1020->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1020->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1020);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   Z_pt_VbbHcc_17->cd();
   Z_pt_VbbHcc_17->Modified();
   Z_pt_VbbHcc_17->cd();
   Z_pt_VbbHcc_17->SetSelected(Z_pt_VbbHcc_17);
}
