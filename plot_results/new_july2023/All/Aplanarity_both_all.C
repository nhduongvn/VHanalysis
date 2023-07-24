void Aplanarity_both_all()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Mon Jul 24 10:12:23 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(0,0,1,1);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-13371.3,1.052419,1.335823e+07);
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
   st->SetMaximum(1.144864e+07);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(0.3);
   st_stack_256->SetMaximum(1.202107e+07);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetLabelSize(0.035);
   st_stack_256->GetXaxis()->SetTitleSize(0.035);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Events/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetLabelSize(0.05);
   st_stack_256->GetYaxis()->SetTitleSize(0.057);
   st_stack_256->GetYaxis()->SetTitleOffset(1.2);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetLabelSize(0.035);
   st_stack_256->GetZaxis()->SetTitleSize(0.035);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,4284122);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,1036064);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,422555.4);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,213829.9);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,131130.8);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,69772.38);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,52816.68);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,30141.8);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,21080.53);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,14134.22);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,8614.434);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,8075.829);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,5872.794);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,3407.581);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,2197.347);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,1411.768);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,1084.559);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,416.5711);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,275.7663);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(20,25.6144);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(21,29.26744);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,47673.77);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,34839.12);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,10792.63);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,7562.007);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,5982.124);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,3312.938);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,3841.885);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,3127.551);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,2135.45);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,1560.975);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,1191.827);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,1308.474);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,1134.562);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,777.0455);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,700.1341);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,569.7292);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,431.9696);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,202.1562);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,189.4224);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(20,25.6144);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(21,15.80076);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(513857);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,44362.37);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,11656.76);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,5185.996);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,2727.697);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,1624.593);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,1023.044);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,656.54);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,424.449);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,285.8013);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,197.6774);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,134.8876);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,90.67237);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,67.44421);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,39.10582);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,25.00157);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,12.60513);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,10.71322);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,5.700999);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,3.264846);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,2.255765);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,0.9941979);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(22,0.3787693);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(23,0.04716519);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,94.62328);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,49.94991);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,32.50417);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,23.72174);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,18.7127);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,15.82772);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,12.03866);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,9.659556);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,7.879531);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,7.029045);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,5.52567);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,4.575258);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,4.025903);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,2.779759);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,2.228013);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,1.575916);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,1.507815);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,1.076884);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,0.795615);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,0.7056226);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,0.4758969);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(22,0.2729693);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(23,0.04716519);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(853526);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_3 = new TH1D("VbbHcc_both_Aplanarity_all_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(1,769034.4);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(2,225735.8);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(3,102112.3);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(4,55025.75);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(5,32535.55);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(6,20325.53);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(7,13224.12);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(8,8786.703);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(9,5887.806);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(10,4041.984);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(11,2721.141);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(12,1832.447);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(13,1207.392);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(14,812.3738);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(15,524.651);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(16,333.3971);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(17,204.571);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(18,120.2284);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(19,63.77112);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(20,34.07758);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(21,12.88656);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(22,4.575532);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(23,1.048267);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(24,0.04295345);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(1,240.5012);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(2,130.7697);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(3,87.90086);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(4,64.37437);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(5,49.86389);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(6,39.05697);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(7,31.92006);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(8,25.8405);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(9,21.37742);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(10,17.57058);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(11,14.79661);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(12,12.52466);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(13,9.492609);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(14,7.755157);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(15,6.287797);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(16,4.963679);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(17,4.110321);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(18,3.23225);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(19,2.163233);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(20,1.564091);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(21,0.9670866);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(22,0.5751546);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(23,0.2718579);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(24,0.04295345);
   VbbHcc_both_Aplanarity_all_stack_3->SetEntries(1.887335e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_4 = new TH1D("VbbHcc_both_Aplanarity_all_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(1,34171.74);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(2,8309.391);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(3,3665.664);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(4,1990.499);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(5,1162.905);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(6,700.0237);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(7,449.8669);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(8,312.7461);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(9,216.6504);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(10,155.7848);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(11,98.42712);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(12,68.06003);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(13,52.28115);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(14,32.06814);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(15,22.13059);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(16,14.50397);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(17,8.485869);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(18,2.479039);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(19,1.974703);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(20,0.9327686);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(21,0.2855178);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(22,0.1897758);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(23,0.0855621);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(24,0.08144662);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(1,128.9864);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(2,70.51417);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(3,48.75815);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(4,37.02921);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(5,30.73654);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(6,22.53659);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(7,17.18433);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(8,15.2879);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(9,13.02432);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(10,11.99126);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(11,8.439931);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(12,7.39369);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(13,8.14132);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(14,5.49292);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(15,5.567526);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(16,4.022456);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(17,3.112155);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(18,0.7960722);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(19,0.6956674);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(20,0.3054956);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(21,0.1713374);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(22,0.1346818);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(23,0.0855621);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(24,0.08144662);
   VbbHcc_both_Aplanarity_all_stack_4->SetEntries(365766);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_5 = new TH1D("VbbHcc_both_Aplanarity_all_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(1,19367.99);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(2,4415.758);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(3,1873.874);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(4,921.6964);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(5,517.5982);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(6,353.7472);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(7,208.2696);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(8,138.4938);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(9,106.4745);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(10,51.70566);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(11,37.89534);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(12,45.91565);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(13,12.98177);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(14,9.892471);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(15,4.718175);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(16,4.040369);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(17,6.989867);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(18,0.7132312);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(19,1.468405);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(22,0.1018803);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(1,161.5145);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(2,84.48248);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(3,56.07253);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(4,39.37783);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(5,26.72486);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(6,23.92468);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(7,15.45313);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(8,14.41451);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(9,15.39151);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(10,6.585173);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(11,8.095239);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(12,13.75462);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(13,2.318136);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(14,1.995032);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(15,0.9102603);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(16,1.26713);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(17,6.54939);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(18,0.3845623);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(19,1.133483);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(22,0.1018803);
   VbbHcc_both_Aplanarity_all_stack_5->SetEntries(204720);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_6 = new TH1D("VbbHcc_both_Aplanarity_all_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(1,105.188);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(2,28.31605);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(3,9.193815);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(4,4.888573);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(5,4.288021);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(6,2.648597);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(7,2.668531);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(8,0.8253043);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(9,0.8117456);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(10,0.3443782);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(11,0.3114526);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(12,0.3004029);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(15,0.09139225);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(17,0.1037721);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(1,4.566628);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(2,2.311794);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(3,1.270897);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(4,0.9150421);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(5,0.8584847);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(6,0.8293893);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(7,0.80276);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(8,0.4427283);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(9,0.4391238);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(10,0.2039704);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(11,0.3114526);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(12,0.228324);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(15,0.09139225);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(17,0.1037721);
   VbbHcc_both_Aplanarity_all_stack_6->SetEntries(1131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_7 = new TH1D("VbbHcc_both_Aplanarity_all_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(1,174.5162);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(2,41.97751);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(3,16.35419);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(4,9.745069);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(5,5.781609);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(6,4.246214);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(7,4.220593);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(8,1.148644);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(9,1.319428);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(10,0.6435144);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(11,0.3784182);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(12,0.4049986);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(13,0.3239962);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(14,0.2128015);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(16,0.06696561);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(17,0.06369501);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(1,4.956855);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(2,2.440063);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(3,1.412627);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(4,1.063094);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(5,0.8874163);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(6,0.8793141);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(7,0.8610239);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(8,0.4584115);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(9,0.4712193);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(10,0.2400994);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(11,0.3185704);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(12,0.2380751);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(13,0.1450008);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(14,0.1229839);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(16,0.06696561);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(17,0.06369501);
   VbbHcc_both_Aplanarity_all_stack_7->SetEntries(2911);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_8 = new TH1D("VbbHcc_both_Aplanarity_all_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(1,250.8315);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(2,65.01188);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(3,31.54687);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(4,17.02285);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(5,9.125339);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(6,5.949428);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(7,2.25129);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(8,3.025319);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(9,1.482735);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(10,1.189001);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(11,1.398106);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(12,0.1881822);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(13,0.9287884);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(1,7.364649);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(2,3.737342);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(3,2.62514);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(4,1.909243);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(5,1.382287);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(6,1.127495);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(7,0.7087507);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(8,0.8152509);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(9,0.6081443);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(10,0.4883861);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(11,0.5343857);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(12,0.1881822);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(13,0.4759332);
   VbbHcc_both_Aplanarity_all_stack_8->SetEntries(1897);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_9 = new TH1D("VbbHcc_both_Aplanarity_all_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(1,167.8703);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(2,46.73375);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(3,21.33332);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(4,11.63019);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(5,6.930966);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(6,4.420344);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(7,2.903943);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(8,1.841721);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(9,1.191355);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(10,0.810033);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(11,0.6041643);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(12,0.4147151);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(13,0.2321682);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(14,0.1355707);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(15,0.1166278);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(16,0.07505875);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(17,0.03677969);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(18,0.03053413);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(19,0.0157851);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(20,0.006320264);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(21,0.004484496);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(1,0.6098305);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(2,0.3343648);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(3,0.2108571);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(4,0.1670414);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(5,0.1202355);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(6,0.09381342);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(7,0.07627766);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(8,0.06123787);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(9,0.05008343);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(10,0.04475653);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(11,0.05200474);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(12,0.02903283);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(13,0.0215137);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(14,0.01670093);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(15,0.01499231);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(16,0.01277478);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(17,0.00922726);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(18,0.007855715);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(19,0.005842296);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(20,0.003675552);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(21,0.003182236);
   VbbHcc_both_Aplanarity_all_stack_9->SetEntries(149443);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_10 = new TH1D("VbbHcc_both_Aplanarity_all_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(1,123.5308);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(2,33.83334);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(3,15.5975);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(4,8.832737);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(5,5.249377);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(6,3.257984);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(7,2.207424);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(8,1.472888);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(9,0.9806517);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(10,0.6033379);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(11,0.4542916);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(12,0.3059318);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(13,0.2079908);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(14,0.1069867);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(15,0.08149715);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(16,0.04359838);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(17,0.03719628);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(18,0.01530987);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(19,0.004079259);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(20,0.001350741);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(1,0.2510208);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(2,0.131735);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(3,0.08950862);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(4,0.06730823);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(5,0.0519967);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(6,0.04090004);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(7,0.03372396);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(8,0.02751117);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(9,0.02251865);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(10,0.01755786);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(11,0.01528948);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(12,0.01258186);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(13,0.01026997);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(14,0.007406929);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(15,0.006503611);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(16,0.004798634);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(17,0.004411609);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(18,0.002765149);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(19,0.001415235);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(20,0.0007989384);
   VbbHcc_both_Aplanarity_all_stack_10->SetEntries(411525);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_11 = new TH1D("VbbHcc_both_Aplanarity_all_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(1,4.213204);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(2,1.156807);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(3,0.6333512);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(4,0.318179);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(5,0.1717008);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(6,0.1405697);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(7,0.07348319);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(8,0.06128497);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(9,0.01450385);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(10,0.0113733);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(11,0.03720663);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(12,0.01310863);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(13,0.009246623);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(15,0.002305427);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(17,0.003671054);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(18,0.001842579);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(20,0.001441091);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(1,0.1075533);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(2,0.05512382);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(3,0.04012522);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(4,0.02932642);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(5,0.02143366);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(6,0.01928083);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(7,0.013989);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(8,0.01254279);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(9,0.005692106);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(10,0.005110277);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(11,0.02161435);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(12,0.00547539);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(13,0.005339603);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(15,0.002305427);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(17,0.002750111);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(18,0.001842579);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(20,0.001441091);
   VbbHcc_both_Aplanarity_all_stack_11->SetEntries(2972);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_12 = new TH1D("VbbHcc_both_Aplanarity_all_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(1,1.952814);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(2,0.5887108);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(3,0.2921068);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(4,0.1716315);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(5,0.1104228);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(6,0.0575004);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(7,0.04744238);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(8,0.03319192);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(9,0.02063301);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(10,0.01391319);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(11,0.008933126);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(12,0.008594596);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(13,0.004681194);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(14,0.002795584);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(15,0.001120421);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(19,0.0002420281);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(1,0.02547037);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(2,0.0143503);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(3,0.009786966);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(4,0.007500988);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(5,0.006235187);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(6,0.004347215);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(7,0.003938182);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(8,0.003339005);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(9,0.002554012);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(10,0.002114112);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(11,0.001798087);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(12,0.001715961);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(13,0.001288582);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(14,0.0008947786);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(15,0.0005765847);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(19,0.0002420281);
   VbbHcc_both_Aplanarity_all_stack_12->SetEntries(10870);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity_all__511 = new TH1D("VbbHcc_both_Aplanarity_all__511","",50,0,1);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(1,3622380);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(2,845870);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(3,359398);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(4,188283);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(5,108241);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(6,66255);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(7,42565);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(8,27828);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(9,18550);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(10,12642);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(11,8463);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(12,5669);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(13,3773);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(14,2401);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(15,1556);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(16,999);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(17,616);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(18,356);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(19,194);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(20,95);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(21,39);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(22,12);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(23,6);
   VbbHcc_both_Aplanarity_all__511->SetBinContent(24,1);
   VbbHcc_both_Aplanarity_all__511->SetEntries(5316241);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all__511->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all__511->SetLineWidth(2);
   VbbHcc_both_Aplanarity_all__511->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity_all__511->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity_all__511->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all__511->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__511->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__511->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__511->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__511->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__511->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__511->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__511->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all__511->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__511->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__511->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__511->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__511->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__511->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fx1511[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fy1511[50] = {
   5151886,
   1286399,
   535488.2,
   274548.1,
   167003.1,
   92195.45,
   67369.85,
   39812.6,
   27583.09,
   18584.98,
   11609.98,
   10114.56,
   7214.6,
   4301.479,
   2774.142,
   1776.501,
   1315.564,
   545.7404,
   346.2655,
   62.88963,
   43.43821,
   5.245958,
   1.180994,
   0.1244001,
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fex1511[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fey1511[50] = {
   47674.92,
   34839.57,
   10793.29,
   7562.512,
   5982.5,
   3313.37,
   3842.106,
   3127.743,
   2135.667,
   1561.15,
   1191.989,
   1308.635,
   1134.64,
   777.1111,
   700.1886,
   569.7686,
   432.0526,
   202.1868,
   189.4411,
   25.67362,
   15.83841,
   0.6586607,
   0.2888809,
   0.09207904,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_all_fx1511,Graph_from_VbbHcc_both_Aplanarity_all_fy1511,Graph_from_VbbHcc_both_Aplanarity_all_fex1511,Graph_from_VbbHcc_both_Aplanarity_all_fey1511);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity_all1511 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity_all1511","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetMaximum(5719518);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity_all1511);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity_all","MC unc. (stat.)","fl");

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
   Aplanarity_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__512 = new TH1D("data_mc_ratio__512","",50,0,1);
   data_mc_ratio__512->SetBinContent(1,0.7031172);
   data_mc_ratio__512->SetBinContent(2,0.6575485);
   data_mc_ratio__512->SetBinContent(3,0.6711595);
   data_mc_ratio__512->SetBinContent(4,0.6857924);
   data_mc_ratio__512->SetBinContent(5,0.6481375);
   data_mc_ratio__512->SetBinContent(6,0.7186363);
   data_mc_ratio__512->SetBinContent(7,0.6318108);
   data_mc_ratio__512->SetBinContent(8,0.6989747);
   data_mc_ratio__512->SetBinContent(9,0.6725136);
   data_mc_ratio__512->SetBinContent(10,0.6802266);
   data_mc_ratio__512->SetBinContent(11,0.728942);
   data_mc_ratio__512->SetBinContent(12,0.5604791);
   data_mc_ratio__512->SetBinContent(13,0.5229673);
   data_mc_ratio__512->SetBinContent(14,0.5581801);
   data_mc_ratio__512->SetBinContent(15,0.5608942);
   data_mc_ratio__512->SetBinContent(16,0.5623415);
   data_mc_ratio__512->SetBinContent(17,0.4682404);
   data_mc_ratio__512->SetBinContent(18,0.6523248);
   data_mc_ratio__512->SetBinContent(19,0.5602637);
   data_mc_ratio__512->SetBinContent(20,1.510583);
   data_mc_ratio__512->SetBinContent(21,0.8978271);
   data_mc_ratio__512->SetBinContent(22,2.287476);
   data_mc_ratio__512->SetBinContent(23,5.080465);
   data_mc_ratio__512->SetBinContent(24,8.038581);
   data_mc_ratio__512->SetBinError(1,0.0003694288);
   data_mc_ratio__512->SetBinError(2,0.0007149505);
   data_mc_ratio__512->SetBinError(3,0.001119536);
   data_mc_ratio__512->SetBinError(4,0.001580473);
   data_mc_ratio__512->SetBinError(5,0.001970023);
   data_mc_ratio__512->SetBinError(6,0.0027919);
   data_mc_ratio__512->SetBinError(7,0.003062392);
   data_mc_ratio__512->SetBinError(8,0.004190062);
   data_mc_ratio__512->SetBinError(9,0.00493775);
   data_mc_ratio__512->SetBinError(10,0.006049865);
   data_mc_ratio__512->SetBinError(11,0.007923751);
   data_mc_ratio__512->SetBinError(12,0.007443997);
   data_mc_ratio__512->SetBinError(13,0.008513951);
   data_mc_ratio__512->SetBinError(14,0.01139143);
   data_mc_ratio__512->SetBinError(15,0.01421923);
   data_mc_ratio__512->SetBinError(16,0.0177917);
   data_mc_ratio__512->SetBinError(17,0.01886594);
   data_mc_ratio__512->SetBinError(18,0.03457314);
   data_mc_ratio__512->SetBinError(19,0.04022459);
   data_mc_ratio__512->SetBinError(20,0.1549825);
   data_mc_ratio__512->SetBinError(21,0.1437674);
   data_mc_ratio__512->SetBinError(22,0.6603373);
   data_mc_ratio__512->SetBinError(23,2.074091);
   data_mc_ratio__512->SetBinError(24,8.038581);
   data_mc_ratio__512->SetMinimum(0.4);
   data_mc_ratio__512->SetMaximum(1.6);
   data_mc_ratio__512->SetEntries(8.26099);
   data_mc_ratio__512->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__512->SetLineColor(ci);
   data_mc_ratio__512->SetLineWidth(2);
   data_mc_ratio__512->SetMarkerStyle(20);
   data_mc_ratio__512->SetMarkerSize(1.2);
   data_mc_ratio__512->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__512->GetXaxis()->SetRange(1,50);
   data_mc_ratio__512->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__512->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__512->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__512->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__512->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__512->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__512->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__512->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__512->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__512->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__512->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__512->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__512->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__512->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__512->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__512->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__512->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1512[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1512[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1512[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1512[50] = {
   0.009253876,
   0.02708301,
   0.02015598,
   0.02754531,
   0.03582268,
   0.03593854,
   0.05703005,
   0.07856165,
   0.0774267,
   0.08400061,
   0.1026694,
   0.1293813,
   0.15727,
   0.1806614,
   0.2523983,
   0.3207252,
   0.3284164,
   0.3704816,
   0.5470979,
   0.4082331,
   0.3646193,
   0.1255558,
   0.2446082,
   0.7401848,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1512,Graph_from_mc_statistical_error_fy1512,Graph_from_mc_statistical_error_fex1512,Graph_from_mc_statistical_error_fey1512);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1512 = new TH1F("Graph_Graph_from_mc_statistical_error1512","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1512->SetMinimum(0.1117782);
   Graph_Graph_from_mc_statistical_error1512->SetMaximum(1.888222);
   Graph_Graph_from_mc_statistical_error1512->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1512->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1512->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1512);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
