void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Mon Jul 24 10:12:23 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(0,0,1,1);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-5603.486,1.052419,5597893);
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
   st->SetMaximum(4797660);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(0.01);
   st_stack_255->SetMaximum(5037543);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetLabelSize(0.035);
   st_stack_255->GetXaxis()->SetTitleSize(0.035);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Events/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetLabelSize(0.05);
   st_stack_255->GetYaxis()->SetTitleSize(0.057);
   st_stack_255->GetYaxis()->SetTitleOffset(1.2);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetLabelSize(0.035);
   st_stack_255->GetZaxis()->SetTitleSize(0.035);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,1311208);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,272260.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,118044.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,64944.58);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,31917.76);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,18864.67);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,15373.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,10117.48);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,5928.335);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,3750.271);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,2578.72);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,2230.778);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,2055.734);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,365.8334);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,260.0617);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,168.1519);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,377.5076);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,64.57108);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,30.59722);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,12.45721);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,15292.65);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,7307.401);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,5715.783);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,4466.783);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,2219.527);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,1582.15);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,1619.626);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,2188.095);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,1131.933);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,685.9865);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,687.3263);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,695.7002);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,714.4043);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,70.37106);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,79.19339);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,55.48343);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,307.5802);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,25.02865);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,18.21023);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,11.45526);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(164216);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,14428.84);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,3622.036);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,1593.155);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,833.917);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,504.5101);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,310.9511);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,191.2315);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,130.6781);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,79.69296);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,58.45818);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,37.29078);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,28.74789);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,21.74948);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,12.96914);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,6.03026);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,4.348562);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,2.668062);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,1.467962);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.3835239);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.4454874);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.09892921);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,0.3787693);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,58.89615);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,31.4324);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,19.14675);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,13.71026);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,11.09687);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,10.10052);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,6.788401);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,5.647592);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,4.260881);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,4.453731);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,3.136091);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,2.716913);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,2.543135);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,1.67103);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,1.116445);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.9840576);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.7564579);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.436896);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.1594697);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.3777307);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.07024327);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,0.2729693);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(233695);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,258231.6);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,73436.48);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,32929.12);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,17611.33);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,10325.51);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,6463.219);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,4154.41);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,2732.413);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,1835.063);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,1236.086);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,834.6254);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,565.1315);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,362.0647);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,243.936);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,156.9013);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,102.8474);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,63.86788);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,35.775);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,20.26028);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,9.360385);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,3.746693);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,1.280725);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.3312321);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,147.0196);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,79.00168);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,52.73847);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,38.24046);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,29.91073);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,23.04357);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,19.18887);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,15.25476);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,12.90094);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,10.36247);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,9.126497);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,8.107483);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,5.40364);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,4.393219);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,3.59262);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,2.840457);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,2.6024);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,2.085618);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,1.243335);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.8353851);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.5299789);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.3113399);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.150416);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(6104032);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,11220.05);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,2589.887);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,1123.036);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,592.069);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,345.0069);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,202.136);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,134.4009);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,92.24761);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,60.98896);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,44.59731);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,26.45063);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,25.72464);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,9.892874);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,5.997942);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,7.996691);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,2.399706);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,1.7333);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,1.176776);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(19,0.4489535);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(20,0.2867358);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(21,0.1331329);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(22,0.1897758);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,74.49924);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,38.09127);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,25.3289);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,19.12454);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,15.07289);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,10.65693);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,8.830428);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,8.050258);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,6.08307);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,5.960088);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,2.835037);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,5.17666);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.763575);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,1.132443);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,4.298474);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.8594119);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.8019124);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.6826375);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(19,0.2625566);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(20,0.2036688);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(21,0.1331329);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(22,0.1346818);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(94684);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,5829.501);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,1286.839);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,544.3957);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,214.6493);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,149.2154);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,104.6745);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,52.26693);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,28.78138);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,19.81307);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,13.80722);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,6.688093);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,23.37202);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,2.38637);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,2.633302);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,1.507682);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(16,0.5601744);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(18,0.5540687);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(19,0.1097513);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,95.99615);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,46.0444);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,31.54134);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,16.16267);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,12.64821);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,15.08406);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,6.455948);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,5.197508);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,4.531468);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,4.544887);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,1.171888);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,12.11284);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.7456841);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.8151928);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.5340252);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(16,0.2405617);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(18,0.3500792);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(19,0.1097513);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(40778);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_6 = new TH1D("VbbHcc_both_Aplanarity_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,32.7471);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(2,6.973763);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(3,2.136909);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(4,0.6229052);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(5,1.321542);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(6,1.170923);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(7,0.3906457);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(8,0.3757414);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(9,0.3114526);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(11,0.3114526);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,3.225812);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(2,1.5552);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(3,0.7979781);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(4,0.4404605);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(5,0.5983068);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(6,0.6769966);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(7,0.3906457);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(8,0.3757414);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(9,0.3114526);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(11,0.3114526);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(150);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,87.78593);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,15.50164);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,9.116704);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,3.129187);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,1.506575);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(6,0.6805145);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(7,0.8032689);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(8,1.673544);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(9,0.5110414);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(10,0.3011335);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(11,0.2234008);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,4.626524);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,1.99538);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,1.489705);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.8437371);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.5880612);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(6,0.3933582);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(7,0.6189852);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(8,0.7150847);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(9,0.3647381);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(10,0.3011335);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(11,0.2234008);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(523);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,81.28218);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,21.3009);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,11.26223);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,5.234137);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,1.84058);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,1.756291);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,1.108914);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(9,0.5102026);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(10,0.4398666);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(11,0.367177);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(13,0.7379795);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,4.497359);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,2.251238);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.653926);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,1.116591);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.6680092);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.6684142);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.4976457);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(9,0.3639013);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(10,0.3111635);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(11,0.2659641);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(13,0.4360097);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(548);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,60.87041);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,16.09392);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,7.169452);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,3.981338);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,2.330188);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.399552);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.939723);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.5940329);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.4134564);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.2668949);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.21743);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.1316963);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.072188);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.051173);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.03227633);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.03217562);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.01245491);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.005561097);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.00588055);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(20,0.00246295);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(21,0.002431021);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.4406011);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.246323);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1442756);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.1225707);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.08224599);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.06143249);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.05061805);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.04116593);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.0342743);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.033045);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.04548108);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01914615);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.01395072);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.01179619);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.009383561);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.009441797);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.006278353);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.004005594);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.004195895);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(20,0.00246295);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(21,0.002431021);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(37266);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,53.79994);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,14.73504);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,6.792996);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,3.846819);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,2.2862);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,1.418912);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.9613737);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.6414695);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.4270918);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.2627647);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.1978523);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.1332389);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.09058383);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.04659469);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.0354935);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.01898789);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.01619966);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.006667729);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001776592);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(20,0.0005882727);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.1848311);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.09699885);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.06590679);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.04956025);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.0382861);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.03011543);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.02483155);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.02025697);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.01658088);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.01292817);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.01125791);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.00926425);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.007561961);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.005453854);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.004788725);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.00353332);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.003248346);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.002036029);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.001042063);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(20,0.0005882727);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,1.418926);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.4163656);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.2545131);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.08919992);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.04623723);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.0403027);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(7,0.01335259);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(8,0.02710487);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(9,0.003707245);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.00498436);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(11,0.02321309);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(12,0.003322577);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(15,0.002305427);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(17,0.002477707);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.06806867);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.0340874);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.02607429);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.01654534);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.01119493);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.01111998);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(7,0.005526082);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(8,0.008296971);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(9,0.002754691);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.003524929);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(11,0.02079142);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(12,0.003322577);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(15,0.002305427);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(17,0.002477707);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(939);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.7013751);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.2080036);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.0925585);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.05463712);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.04060081);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.02177079);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.01285997);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.01225488);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.007535235);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.005116842);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.002614604);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(12,0.00133933);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(13,0.002634167);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(14,0.0006503366);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(15,0.0006276519);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.01588766);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.009217838);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.005693714);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.004359425);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.004105928);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.002752586);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.002133164);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.002053019);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.001645114);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.001261598);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.001018517);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(12,0.0006712644);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(13,0.0009564403);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(14,0.00045986);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(15,0.0004440542);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(3484);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity__509 = new TH1D("VbbHcc_both_Aplanarity__509","",50,0,1);
   VbbHcc_both_Aplanarity__509->SetBinContent(1,2158947);
   VbbHcc_both_Aplanarity__509->SetBinContent(2,504144);
   VbbHcc_both_Aplanarity__509->SetBinContent(3,211603);
   VbbHcc_both_Aplanarity__509->SetBinContent(4,109762);
   VbbHcc_both_Aplanarity__509->SetBinContent(5,62561);
   VbbHcc_both_Aplanarity__509->SetBinContent(6,38282);
   VbbHcc_both_Aplanarity__509->SetBinContent(7,24459);
   VbbHcc_both_Aplanarity__509->SetBinContent(8,15911);
   VbbHcc_both_Aplanarity__509->SetBinContent(9,10620);
   VbbHcc_both_Aplanarity__509->SetBinContent(10,7224);
   VbbHcc_both_Aplanarity__509->SetBinContent(11,4735);
   VbbHcc_both_Aplanarity__509->SetBinContent(12,3195);
   VbbHcc_both_Aplanarity__509->SetBinContent(13,2188);
   VbbHcc_both_Aplanarity__509->SetBinContent(14,1322);
   VbbHcc_both_Aplanarity__509->SetBinContent(15,888);
   VbbHcc_both_Aplanarity__509->SetBinContent(16,582);
   VbbHcc_both_Aplanarity__509->SetBinContent(17,353);
   VbbHcc_both_Aplanarity__509->SetBinContent(18,196);
   VbbHcc_both_Aplanarity__509->SetBinContent(19,120);
   VbbHcc_both_Aplanarity__509->SetBinContent(20,55);
   VbbHcc_both_Aplanarity__509->SetBinContent(21,22);
   VbbHcc_both_Aplanarity__509->SetBinContent(22,2);
   VbbHcc_both_Aplanarity__509->SetBinContent(23,2);
   VbbHcc_both_Aplanarity__509->SetBinContent(24,1);
   VbbHcc_both_Aplanarity__509->SetEntries(3157223);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__509->SetLineColor(ci);
   VbbHcc_both_Aplanarity__509->SetLineWidth(2);
   VbbHcc_both_Aplanarity__509->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__509->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__509->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__509->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__509->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__509->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__509->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__509->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__509->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__509->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__509->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__509->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__509->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__509->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__509->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__509->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__509->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1509[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1509[50] = {
   1601236,
   353271,
   154271.3,
   84213.5,
   43251.38,
   25952.14,
   19910.04,
   13104.92,
   7926.077,
   5104.5,
   3485.118,
   2874.024,
   2452.731,
   631.4682,
   432.5684,
   278.359,
   445.8079,
   103.5571,
   51.80738,
   10.09566,
   16.4384,
   1.84927,
   0.3312321,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1509[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1509[50] = {
   15293.96,
   7308.14,
   5716.202,
   4467.038,
   2219.844,
   1582.458,
   1619.791,
   2188.177,
   1132.04,
   686.1203,
   687.401,
   695.8775,
   714.4319,
   70.54166,
   79.40094,
   55.57197,
   307.5932,
   25.13091,
   18.25554,
   0.9391677,
   11.4685,
   0.4354124,
   0.150416,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1509,Graph_from_VbbHcc_both_Aplanarity_fy1509,Graph_from_VbbHcc_both_Aplanarity_fex1509,Graph_from_VbbHcc_both_Aplanarity_fey1509);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1509 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1509","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetMaximum(1778183);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1509);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_both_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__510 = new TH1D("data_mc_ratio__510","",50,0,1);
   data_mc_ratio__510->SetBinContent(1,1.3483);
   data_mc_ratio__510->SetBinContent(2,1.427075);
   data_mc_ratio__510->SetBinContent(3,1.371629);
   data_mc_ratio__510->SetBinContent(4,1.303378);
   data_mc_ratio__510->SetBinContent(5,1.446451);
   data_mc_ratio__510->SetBinContent(6,1.4751);
   data_mc_ratio__510->SetBinContent(7,1.228476);
   data_mc_ratio__510->SetBinContent(8,1.214124);
   data_mc_ratio__510->SetBinContent(9,1.339881);
   data_mc_ratio__510->SetBinContent(10,1.415222);
   data_mc_ratio__510->SetBinContent(11,1.358634);
   data_mc_ratio__510->SetBinContent(12,1.111682);
   data_mc_ratio__510->SetBinContent(13,0.8920669);
   data_mc_ratio__510->SetBinContent(14,2.093534);
   data_mc_ratio__510->SetBinContent(15,2.052855);
   data_mc_ratio__510->SetBinContent(16,2.090825);
   data_mc_ratio__510->SetBinContent(17,0.7918208);
   data_mc_ratio__510->SetBinContent(18,1.892675);
   data_mc_ratio__510->SetBinContent(19,2.316272);
   data_mc_ratio__510->SetBinContent(20,5.447886);
   data_mc_ratio__510->SetBinContent(21,1.33833);
   data_mc_ratio__510->SetBinContent(22,1.081508);
   data_mc_ratio__510->SetBinContent(23,6.038062);
   data_mc_ratio__510->SetBinError(1,0.0009176257);
   data_mc_ratio__510->SetBinError(2,0.002009876);
   data_mc_ratio__510->SetBinError(3,0.002981781);
   data_mc_ratio__510->SetBinError(4,0.00393409);
   data_mc_ratio__510->SetBinError(5,0.005782982);
   data_mc_ratio__510->SetBinError(6,0.007539181);
   data_mc_ratio__510->SetBinError(7,0.007855018);
   data_mc_ratio__510->SetBinError(8,0.009625302);
   data_mc_ratio__510->SetBinError(9,0.01300182);
   data_mc_ratio__510->SetBinError(10,0.01665082);
   data_mc_ratio__510->SetBinError(11,0.01974433);
   data_mc_ratio__510->SetBinError(12,0.01966731);
   data_mc_ratio__510->SetBinError(13,0.01907101);
   data_mc_ratio__510->SetBinError(14,0.05757902);
   data_mc_ratio__510->SetBinError(15,0.06888929);
   data_mc_ratio__510->SetBinError(16,0.08666749);
   data_mc_ratio__510->SetBinError(17,0.04214437);
   data_mc_ratio__510->SetBinError(18,0.1351911);
   data_mc_ratio__510->SetBinError(19,0.2114457);
   data_mc_ratio__510->SetBinError(20,0.7345928);
   data_mc_ratio__510->SetBinError(21,0.2853329);
   data_mc_ratio__510->SetBinError(22,0.7647415);
   data_mc_ratio__510->SetBinError(23,4.269555);
   data_mc_ratio__510->SetMinimum(0.4);
   data_mc_ratio__510->SetMaximum(1.6);
   data_mc_ratio__510->SetEntries(58.75164);
   data_mc_ratio__510->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__510->SetLineColor(ci);
   data_mc_ratio__510->SetLineWidth(2);
   data_mc_ratio__510->SetMarkerStyle(20);
   data_mc_ratio__510->SetMarkerSize(1.2);
   data_mc_ratio__510->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__510->GetXaxis()->SetRange(1,50);
   data_mc_ratio__510->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__510->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__510->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__510->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__510->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__510->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__510->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__510->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__510->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__510->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__510->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__510->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__510->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__510->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__510->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__510->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__510->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1510[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1510[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1510[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1510[50] = {
   0.009551344,
   0.02068707,
   0.03705291,
   0.05304421,
   0.05132424,
   0.060976,
   0.08135547,
   0.1669737,
   0.1428247,
   0.1344148,
   0.1972389,
   0.2421265,
   0.2912802,
   0.1117106,
   0.183557,
   0.1996414,
   0.689968,
   0.2426768,
   0.3523733,
   0.09302689,
   0.6976654,
   0.235451,
   0.4541105,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1510,Graph_from_mc_statistical_error_fy1510,Graph_from_mc_statistical_error_fex1510,Graph_from_mc_statistical_error_fey1510);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1510 = new TH1F("Graph_Graph_from_mc_statistical_error1510","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1510->SetMinimum(0.1628016);
   Graph_Graph_from_mc_statistical_error1510->SetMaximum(1.837198);
   Graph_Graph_from_mc_statistical_error1510->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1510->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1510->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1510);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
