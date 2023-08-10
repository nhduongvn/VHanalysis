void H_dR_algo_all()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Thu Aug 10 12:24:05 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(0,0,1,1);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-1371.098,6.525,1370027);
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
   st->SetMaximum(1174179);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",30,0,6);
   st_stack_120->SetMinimum(0.3);
   st_stack_120->SetMaximum(1232887);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetRange(1,31);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetLabelSize(0.035);
   st_stack_120->GetXaxis()->SetTitleSize(0.035);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Events/0.2");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetLabelSize(0.05);
   st_stack_120->GetYaxis()->SetTitleSize(0.057);
   st_stack_120->GetYaxis()->SetTitleOffset(1.2);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetLabelSize(0.035);
   st_stack_120->GetZaxis()->SetTitleSize(0.035);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(2,23.99755);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,174996.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,242873.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,210387.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,190856.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,225126);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,233874.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,260893);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,282610.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,325181.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,375749.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,417678.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,484427.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,447354.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,489593.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,423243.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,388251.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,375387.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,354427.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,323476.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,248255.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,181432.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,135953.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(25,108819.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,98368.01);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,65000.46);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(28,45570.98);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(29,40771.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(30,24697.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(31,21455.21);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(2,23.99755);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,6173.556);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,8566.928);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,20028.94);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,7193.694);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,8795.378);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,8317.625);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,8970.826);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,9164.208);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,9790.806);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,23953.49);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,11470.88);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,27465.55);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,11683.56);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,27553.95);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,10593.87);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,9810.444);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,9982.887);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,10435.49);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,28512.54);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,17295.68);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,6931.108);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,6906.962);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(25,5829.889);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,22588.77);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,5036.307);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(28,4193.484);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(29,3572.509);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(30,2962.169);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(31,3131.209);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(355717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,0.2127676);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,893.8568);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,1526.551);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,1679.486);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,1799.949);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,1885.612);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,1933.37);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,2118.223);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,2316.309);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,2503.143);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,2677.68);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,2816.575);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,2808.298);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,2693.953);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,2636.706);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,2426.871);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,2267.89);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,2127.019);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,1951.469);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,1748.26);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,1453.475);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,1149.974);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,950.6824);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(25,756.1068);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(26,593.6997);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(27,449.2822);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(28,336.7317);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(29,255.3213);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(30,157.9766);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(31,125.2799);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.2988094);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,13.49316);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,17.69228);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,18.03955);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,19.03078);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,19.41475);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,19.0612);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,20.57095);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,21.25253);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,25.08536);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,22.40641);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,22.81841);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,22.65871);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,22.10278);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,21.73063);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,20.85444);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,20.44673);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,19.72549);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,18.74074);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,17.82679);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,16.51186);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,14.32774);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,12.9891);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(25,11.74154);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(26,10.57059);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(27,9.091834);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(28,8.093784);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(29,6.799217);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(30,5.404975);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(31,4.712403);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(639487);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(2,9.904265);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(3,25812.74);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(4,52138.91);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(5,62045.11);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(6,63341.48);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(7,58023.58);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(8,50797.8);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(9,44917.12);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(10,41372.83);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(11,40421.81);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(12,40692.71);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(13,40201.95);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(14,37812.69);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(15,34486.36);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(16,31782.82);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(17,29162.15);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(18,27677.57);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(19,27324.18);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(20,26689.09);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(21,24696.79);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(22,21935.45);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(23,19346.78);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(24,17266.14);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(25,15387.26);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(26,13519.39);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(27,11492.6);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(28,9252.032);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(29,6603.589);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(30,3708.874);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(31,2443.326);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(2,0.8632516);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(3,46.26324);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(4,65.04252);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(5,71.21039);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(6,71.23625);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(7,68.05823);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(8,63.4263);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(9,59.28292);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(10,56.84708);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(11,55.53602);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(12,56.09317);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(13,55.74825);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(14,54.52498);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(15,52.17808);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(16,50.35708);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(17,47.74821);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(18,46.44319);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(19,46.53694);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(20,45.86098);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(21,44.14288);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(22,41.16612);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(23,38.88469);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(24,37.04703);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(25,34.9748);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(26,32.8249);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(27,30.06107);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(28,27.40935);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(29,23.36722);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(30,17.03095);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(31,13.69537);
   VbbHcc_algo_H_dR_all_stack_3->SetEntries(1.27678e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(2,0.2540497);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(3,1013.518);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(4,1609.524);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(5,1565.69);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(6,1340.852);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(7,1285.205);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(8,1361.6);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(9,1523.701);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(10,1605.247);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(11,1897.321);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(12,2017.57);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(13,2310.598);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(14,2356.902);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(15,2256.916);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(16,2219.249);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(17,2061.818);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(18,1972.703);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(19,1847.314);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(20,1782.958);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(21,1459.92);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(22,1229.98);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(23,931.0237);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(24,659.225);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(25,514.4053);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(26,403.9909);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(27,354.7905);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(28,272.0396);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(29,223.4105);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(30,132.0415);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(31,90.74671);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(2,0.1478619);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(3,20.3517);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(4,28.49784);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(5,36.05284);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(6,35.73898);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(7,33.53469);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(8,34.52417);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(9,37.81579);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(10,35.13533);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(11,42.29508);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(12,37.52566);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(13,43.89076);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(14,42.08062);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(15,37.60653);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(16,39.11285);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(17,33.68399);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(18,34.46659);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(19,32.56161);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(20,40.09631);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(21,31.18956);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(22,32.32126);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(23,29.81213);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(24,21.49706);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(25,21.35413);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(26,19.06578);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(27,20.82336);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(28,15.37694);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(29,13.36023);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(30,9.721943);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(31,8.419318);
   VbbHcc_algo_H_dR_all_stack_4->SetEntries(204480);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(2,0.2947036);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(3,457.9009);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(4,595.1348);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(5,504.0503);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(6,508.7027);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(7,434.2179);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(8,517.1679);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(9,537.3984);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(10,682.0498);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(11,761.5271);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(12,811.2717);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(13,887.4226);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(14,917.576);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(15,881.5546);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(16,867.7005);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(17,861.5433);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(18,782.8812);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(19,789.0845);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(20,754.2441);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(21,620.9383);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(22,533.7052);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(23,394.401);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(24,291.4131);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(25,218.7949);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(26,161.5612);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(27,141.6141);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(28,76.01604);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(29,90.77426);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(30,57.87186);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(31,45.77529);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(2,0.182849);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(3,20.79041);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(4,32.15825);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(5,33.00806);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(6,35.53016);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(7,27.82589);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(8,35.53943);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(9,32.04132);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(10,40.08525);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(11,41.60707);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(12,40.50278);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(13,39.77976);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(14,47.1382);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(15,36.50834);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(16,32.63299);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(17,36.94876);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(18,31.60699);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(19,36.57197);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(20,40.48426);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(21,36.16985);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(22,37.44036);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(23,27.78188);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(24,22.81674);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(25,20.78869);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(26,15.69601);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(27,19.03645);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(28,9.68046);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(29,17.19447);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(30,11.92926);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(31,10.05048);
   VbbHcc_algo_H_dR_all_stack_5->SetEntries(98236);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(3,5.263035);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(4,8.425688);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(5,8.254542);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(6,7.952273);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(7,4.788598);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(8,4.939057);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(9,5.679996);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(10,6.78144);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(11,4.046602);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(12,9.435344);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(13,8.962957);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(14,7.333244);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(15,8.766749);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(16,7.905548);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(17,9.784556);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(18,6.480098);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(19,7.327893);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(20,5.774227);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(21,5.35827);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(22,2.427259);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(23,3.966617);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(24,3.422872);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(25,1.321871);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(26,1.876345);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(27,1.069514);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(28,1.723698);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(29,1.590684);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(30,0.5124666);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(31,0.5892248);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(3,1.284953);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(4,1.475894);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(5,1.708143);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(6,1.273993);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(7,1.279184);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(8,1.590484);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(9,1.226442);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(10,1.377421);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(11,1.072115);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(12,1.601618);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(13,1.704831);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(14,1.42557);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(15,1.609579);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(16,1.582042);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(17,1.623019);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(18,1.269797);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(19,1.53197);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(20,1.222911);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(21,2.346877);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(22,0.8103175);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(23,0.8524705);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(24,1.235483);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(25,0.5937369);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(26,0.7978174);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(27,0.605022);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(28,0.8339123);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(29,0.8601141);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(30,0.4002262);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(31,0.4837416);
   VbbHcc_algo_H_dR_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(3,11.11529);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(4,16.32737);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(5,13.52736);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(6,9.189497);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(7,7.648587);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(8,6.304142);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(9,6.567399);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(10,7.104311);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(11,4.86634);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(12,8.813796);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(13,12.16181);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(14,9.99239);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(15,9.774233);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(16,11.39147);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(17,9.705225);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(18,10.01454);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(19,10.90551);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(20,7.88781);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(21,5.635603);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(22,3.514514);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(23,3.258433);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(24,5.117495);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(25,2.357097);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(26,2.75444);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(27,2.405098);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(28,3.034918);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(29,2.341339);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(30,0.9969251);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(31,0.8291218);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(3,1.511474);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(4,1.72187);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(5,1.847108);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(6,1.27061);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(7,1.381809);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(8,1.623863);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(9,1.246442);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(10,1.358822);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(11,1.086709);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(12,1.53122);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(13,1.784869);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(14,1.495282);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(15,1.609378);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(16,1.675523);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(17,1.574549);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(18,1.386197);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(19,1.633434);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(20,1.278097);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(21,2.341569);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(22,0.8690418);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(23,0.733681);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(24,1.299423);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(25,0.6763402);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(26,0.845756);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(27,0.7184803);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(28,0.916075);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(29,0.9039921);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(30,0.467879);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(31,0.5127825);
   VbbHcc_algo_H_dR_all_stack_7->SetEntries(1323);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(3,31.03215);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(4,49.91098);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(5,45.77201);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(6,27.54404);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(7,16.14017);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(8,13.13972);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(9,14.86723);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(10,14.5504);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(11,14.44754);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(12,12.57876);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(13,19.50709);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(14,19.92783);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(15,23.02843);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(16,19.82458);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(17,22.64199);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(18,19.72912);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(19,20.49518);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(20,15.17593);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(21,15.03982);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(22,9.779157);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(23,8.407771);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(24,4.212843);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(25,5.228018);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(26,4.665817);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(27,6.13787);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(28,5.983366);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(29,2.492167);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(30,2.055623);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(31,1.26061);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(3,3.009773);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(4,3.871494);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(5,3.700074);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(6,2.809255);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(7,2.174897);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(8,1.977948);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(9,2.055975);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(10,2.079584);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(11,2.049959);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(12,1.88552);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(13,2.375184);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(14,2.409154);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(15,2.682444);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(16,2.37046);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(17,2.605874);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(18,2.405443);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(19,2.449697);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(20,2.070619);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(21,2.088423);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(22,1.66033);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(23,1.575324);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(24,1.10666);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(25,1.215372);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(26,1.143099);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(27,1.31745);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(28,1.349747);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(29,0.8352318);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(30,0.7939549);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(31,0.6377192);
   VbbHcc_algo_H_dR_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(2,0.004086665);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(3,16.9285);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(4,33.38386);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(5,34.59287);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(6,29.21969);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(7,20.62289);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(8,12.61053);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(9,9.386716);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(10,8.310549);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(11,9.632244);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(12,10.94202);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(13,12.47988);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(14,12.67087);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(15,11.28262);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(16,10.14901);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(17,9.646184);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(18,9.640072);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(19,9.642103);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(20,8.445917);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(21,6.829976);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(22,4.993914);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(23,4.174632);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(24,3.662748);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(25,3.771466);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(26,4.137377);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(27,4.267793);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(28,3.998887);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(29,3.078433);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(30,1.796809);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(31,0.9895148);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(2,0.002380541);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(3,0.2014943);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(4,0.2796566);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(5,0.2882581);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(6,0.2616229);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(7,0.2122512);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(8,0.1665743);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(9,0.1385914);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(10,0.1298972);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(11,0.1413677);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(12,0.1589496);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(13,0.1624208);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(14,0.1667096);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(15,0.156121);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(16,0.1487632);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(17,0.1481066);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(18,0.1815071);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(19,0.1535039);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(20,0.1414343);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(21,0.1230966);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(22,0.1009989);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(23,0.09197512);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(24,0.09208217);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(25,0.08870063);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(26,0.09508076);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(27,0.09651925);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(28,0.09415941);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(29,0.08771143);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(30,0.06439355);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(31,0.04669007);
   VbbHcc_algo_H_dR_all_stack_9->SetEntries(167452);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(2,0.001339177);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(3,4.023581);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(4,10.46602);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(5,13.55587);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(6,13.94178);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(7,11.22896);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(8,8.102604);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(9,6.063826);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(10,5.554516);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(11,6.175515);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(12,7.143168);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(13,7.768639);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(14,7.631766);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(15,6.762625);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(16,6.461516);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(17,5.693721);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(18,5.779016);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(19,5.773707);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(20,5.574548);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(21,4.769121);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(22,3.978591);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(23,2.855311);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(24,2.645378);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(25,2.563841);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(26,2.401146);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(27,2.101011);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(28,1.729715);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(29,1.248792);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(30,0.6327718);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(31,0.4106876);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(2,0.0007920981);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(3,0.04535236);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(4,0.07347294);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(5,0.08379562);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(6,0.08504378);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(7,0.07639578);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(8,0.06483163);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(9,0.05604616);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(10,0.05353288);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(11,0.05647765);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(12,0.06075345);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(13,0.06341721);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(14,0.06278328);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(15,0.05904271);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(16,0.05773761);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(17,0.05418938);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(18,0.05458016);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(19,0.05462321);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(20,0.05361207);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(21,0.0495732);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(22,0.04533837);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(23,0.03837752);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(24,0.03697826);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(25,0.03647205);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(26,0.03526325);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(27,0.03294471);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(28,0.02991367);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(29,0.02534195);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(30,0.01801549);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(31,0.01445141);
   VbbHcc_algo_H_dR_all_stack_10->SetEntries(336228);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(3,0.134405);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(4,0.2155592);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(5,0.2259093);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(6,0.2010087);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(7,0.1334356);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(8,0.1422706);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(9,0.07739959);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(10,0.08818785);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(11,0.08896958);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(12,0.09929631);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(13,0.1501202);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(14,0.1205303);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(15,0.1181262);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(16,0.08892606);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(17,0.08680005);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(18,0.108497);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(19,0.1012945);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(20,0.07095375);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(21,0.04830783);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(22,0.03845887);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(23,0.05823944);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(24,0.0321721);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(25,0.01418342);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(26,0.02464598);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(27,0.04147633);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(28,0.05011865);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(29,0.03450884);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(30,0.01194955);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(31,0.01480819);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(3,0.01965673);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(4,0.02416024);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(5,0.02556877);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(6,0.02359048);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(7,0.01946704);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(8,0.01904112);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(9,0.01434253);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(10,0.0153323);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(11,0.01515816);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(12,0.0162495);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(13,0.02031148);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(14,0.01814985);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(15,0.01784381);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(16,0.01607385);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(17,0.01534642);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(18,0.01714898);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(19,0.01653903);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(20,0.01409649);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(21,0.01124388);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(22,0.01006521);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(23,0.01247001);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(24,0.008810363);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(25,0.005961694);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(26,0.007909906);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(27,0.01024307);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(28,0.0129431);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(29,0.009764391);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(30,0.00540531);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(31,0.006760118);
   VbbHcc_algo_H_dR_all_stack_11->SetEntries(1102);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(3,0.03232003);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(4,0.08794239);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(5,0.09476872);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(6,0.0886543);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(7,0.07780536);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(8,0.05192399);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(9,0.03887513);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(10,0.03695464);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(11,0.0467772);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(12,0.062532);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(13,0.06084468);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(14,0.05493282);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(15,0.05888496);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(16,0.05365162);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(17,0.04168204);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(18,0.04149564);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(19,0.04937027);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(20,0.04243848);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(21,0.02904315);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(22,0.02353187);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(23,0.02254303);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(24,0.0172096);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(25,0.01949424);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(26,0.01558411);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(27,0.01528656);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(28,0.01292872);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(29,0.009542652);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(30,0.003846862);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(31,0.003285218);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(3,0.003247973);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(4,0.006423169);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(5,0.005604609);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(6,0.005405321);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(7,0.005307673);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(8,0.004199372);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(9,0.003527767);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(10,0.003454914);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(11,0.003917081);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(12,0.004504317);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(13,0.004446933);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(14,0.00429879);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(15,0.004413687);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(16,0.00549341);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(17,0.003689957);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(18,0.003672054);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(19,0.004109848);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(20,0.003749389);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(21,0.003151456);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(22,0.002747984);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(23,0.002741741);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(24,0.002414597);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(25,0.002617587);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(26,0.002246356);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(27,0.002241379);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(28,0.002125723);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(29,0.001781682);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(30,0.001154116);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(31,0.00106636);
   VbbHcc_algo_H_dR_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_all__329 = new TH1D("VbbHcc_algo_H_dR_all__329","",30,0,6);
   VbbHcc_algo_H_dR_all__329->SetBinContent(2,42);
   VbbHcc_algo_H_dR_all__329->SetBinContent(3,91456);
   VbbHcc_algo_H_dR_all__329->SetBinContent(4,121848);
   VbbHcc_algo_H_dR_all__329->SetBinContent(5,107442);
   VbbHcc_algo_H_dR_all__329->SetBinContent(6,107657);
   VbbHcc_algo_H_dR_all__329->SetBinContent(7,109221);
   VbbHcc_algo_H_dR_all__329->SetBinContent(8,113073);
   VbbHcc_algo_H_dR_all__329->SetBinContent(9,121181);
   VbbHcc_algo_H_dR_all__329->SetBinContent(10,131595);
   VbbHcc_algo_H_dR_all__329->SetBinContent(11,147405);
   VbbHcc_algo_H_dR_all__329->SetBinContent(12,166324);
   VbbHcc_algo_H_dR_all__329->SetBinContent(13,184294);
   VbbHcc_algo_H_dR_all__329->SetBinContent(14,196303);
   VbbHcc_algo_H_dR_all__329->SetBinContent(15,199545);
   VbbHcc_algo_H_dR_all__329->SetBinContent(16,198364);
   VbbHcc_algo_H_dR_all__329->SetBinContent(17,190014);
   VbbHcc_algo_H_dR_all__329->SetBinContent(18,179668);
   VbbHcc_algo_H_dR_all__329->SetBinContent(19,166630);
   VbbHcc_algo_H_dR_all__329->SetBinContent(20,149215);
   VbbHcc_algo_H_dR_all__329->SetBinContent(21,127015);
   VbbHcc_algo_H_dR_all__329->SetBinContent(22,102116);
   VbbHcc_algo_H_dR_all__329->SetBinContent(23,81451);
   VbbHcc_algo_H_dR_all__329->SetBinContent(24,63177);
   VbbHcc_algo_H_dR_all__329->SetBinContent(25,48594);
   VbbHcc_algo_H_dR_all__329->SetBinContent(26,37145);
   VbbHcc_algo_H_dR_all__329->SetBinContent(27,29101);
   VbbHcc_algo_H_dR_all__329->SetBinContent(28,23001);
   VbbHcc_algo_H_dR_all__329->SetBinContent(29,18321);
   VbbHcc_algo_H_dR_all__329->SetBinContent(30,11659);
   VbbHcc_algo_H_dR_all__329->SetBinContent(31,8785);
   VbbHcc_algo_H_dR_all__329->SetEntries(3231671);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all__329->SetLineColor(ci);
   VbbHcc_algo_H_dR_all__329->SetLineWidth(2);
   VbbHcc_algo_H_dR_all__329->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_all__329->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_all__329->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all__329->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__329->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__329->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__329->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all__329->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__329->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__329->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__329->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fx1239[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fy1239[30] = {
   0,
   34.66876,
   203243.3,
   298862.7,
   276298.2,
   257935.4,
   286815.3,
   288529.6,
   310032.1,
   328629.6,
   370804.4,
   421997.6,
   463956.1,
   528380.3,
   487732.8,
   527156.1,
   457813.1,
   421004.4,
   407529.1,
   385647.9,
   352040.1,
   273433.2,
   203277,
   155140.3,
   125711,
   113062.5,
   77454.79,
   55524.34,
   47955.69,
   28760.47};
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fex1239[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fey1239[30] = {
   0,
   24.01608,
   6173.814,
   8567.302,
   20029.14,
   7194.249,
   8795.771,
   8318.037,
   8971.182,
   9164.565,
   9791.175,
   23953.63,
   11471.19,
   27465.68,
   11683.81,
   27554.05,
   10594.12,
   9810.687,
   9983.135,
   10435.76,
   28512.62,
   17295.81,
   6931.352,
   6907.145,
   5830.082,
   22588.81,
   5036.485,
   4193.621,
   3572.659,
   2962.263};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_all_fx1239,Graph_from_VbbHcc_algo_H_dR_all_fy1239,Graph_from_VbbHcc_algo_H_dR_all_fex1239,Graph_from_VbbHcc_algo_H_dR_all_fey1239);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_all1239 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_all1239","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetMaximum(611430.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_all1239);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_all","MC unc. (stat.)","fl");

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
   H_dR_algo_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__330 = new TH1D("data_mc_ratio__330","",30,0,6);
   data_mc_ratio__330->SetBinContent(2,1.211465);
   data_mc_ratio__330->SetBinContent(3,0.4499828);
   data_mc_ratio__330->SetBinContent(4,0.4077056);
   data_mc_ratio__330->SetBinContent(5,0.3888624);
   data_mc_ratio__330->SetBinContent(6,0.4173797);
   data_mc_ratio__330->SetBinContent(7,0.3808061);
   data_mc_ratio__330->SetBinContent(8,0.3918939);
   data_mc_ratio__330->SetBinContent(9,0.3908659);
   data_mc_ratio__330->SetBinContent(10,0.4004356);
   data_mc_ratio__330->SetBinContent(11,0.3975276);
   data_mc_ratio__330->SetBinContent(12,0.3941349);
   data_mc_ratio__330->SetBinContent(13,0.3972229);
   data_mc_ratio__330->SetBinContent(14,0.3715184);
   data_mc_ratio__330->SetBinContent(15,0.4091277);
   data_mc_ratio__330->SetBinContent(16,0.3762908);
   data_mc_ratio__330->SetBinContent(17,0.4150471);
   data_mc_ratio__330->SetBinContent(18,0.4267604);
   data_mc_ratio__330->SetBinContent(19,0.4088787);
   data_mc_ratio__330->SetBinContent(20,0.3869203);
   data_mc_ratio__330->SetBinContent(21,0.3607969);
   data_mc_ratio__330->SetBinContent(22,0.3734586);
   data_mc_ratio__330->SetBinContent(23,0.4006897);
   data_mc_ratio__330->SetBinContent(24,0.407225);
   data_mc_ratio__330->SetBinContent(25,0.3865533);
   data_mc_ratio__330->SetBinContent(26,0.328535);
   data_mc_ratio__330->SetBinContent(27,0.375716);
   data_mc_ratio__330->SetBinContent(28,0.4142508);
   data_mc_ratio__330->SetBinContent(29,0.3820402);
   data_mc_ratio__330->SetBinContent(30,0.4053828);
   data_mc_ratio__330->SetBinContent(31,0.3635508);
   data_mc_ratio__330->SetBinError(2,0.1869331);
   data_mc_ratio__330->SetBinError(3,0.001487955);
   data_mc_ratio__330->SetBinError(4,0.001167985);
   data_mc_ratio__330->SetBinError(5,0.001186339);
   data_mc_ratio__330->SetBinError(6,0.001272067);
   data_mc_ratio__330->SetBinError(7,0.001152261);
   data_mc_ratio__330->SetBinError(8,0.001165438);
   data_mc_ratio__330->SetBinError(9,0.001122821);
   data_mc_ratio__330->SetBinError(10,0.001103857);
   data_mc_ratio__330->SetBinError(11,0.001035407);
   data_mc_ratio__330->SetBinError(12,0.0009664234);
   data_mc_ratio__330->SetBinError(13,0.0009252917);
   data_mc_ratio__330->SetBinError(14,0.0008385266);
   data_mc_ratio__330->SetBinError(15,0.0009158798);
   data_mc_ratio__330->SetBinError(16,0.0008448745);
   data_mc_ratio__330->SetBinError(17,0.0009521482);
   data_mc_ratio__330->SetBinError(18,0.001006813);
   data_mc_ratio__330->SetBinError(19,0.001001654);
   data_mc_ratio__330->SetBinError(20,0.001001648);
   data_mc_ratio__330->SetBinError(21,0.001012361);
   data_mc_ratio__330->SetBinError(22,0.00116868);
   data_mc_ratio__330->SetBinError(23,0.001403977);
   data_mc_ratio__330->SetBinError(24,0.001620149);
   data_mc_ratio__330->SetBinError(25,0.00175355);
   data_mc_ratio__330->SetBinError(26,0.001704635);
   data_mc_ratio__330->SetBinError(27,0.002202448);
   data_mc_ratio__330->SetBinError(28,0.002731429);
   data_mc_ratio__330->SetBinError(29,0.002822503);
   data_mc_ratio__330->SetBinError(30,0.003754349);
   data_mc_ratio__330->SetBinError(31,0.04726896);
   data_mc_ratio__330->SetMinimum(0.4);
   data_mc_ratio__330->SetMaximum(1.6);
   data_mc_ratio__330->SetEntries(199.339);
   data_mc_ratio__330->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__330->SetLineColor(ci);
   data_mc_ratio__330->SetLineWidth(2);
   data_mc_ratio__330->SetMarkerStyle(20);
   data_mc_ratio__330->SetMarkerSize(1.2);
   data_mc_ratio__330->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__330->GetXaxis()->SetRange(1,31);
   data_mc_ratio__330->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__330->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__330->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__330->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__330->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__330->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__330->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__330->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__330->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__330->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__330->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__330->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__330->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__330->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__330->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__330->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__330->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1240[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1240[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1240[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1240[30] = {
   0,
   0.6927298,
   0.03037646,
   0.02866635,
   0.07249102,
   0.02789167,
   0.03066703,
   0.02882905,
   0.0289363,
   0.02788721,
   0.02640523,
   0.05676247,
   0.02472473,
   0.05198089,
   0.02395536,
   0.05226924,
   0.0231407,
   0.02330305,
   0.02449674,
   0.02706034,
   0.08099252,
   0.06325424,
   0.03409806,
   0.04452194,
   0.04637687,
   0.1997904,
   0.06502483,
   0.07552762,
   0.07449917,
   0.1029977};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1240,Graph_from_mc_statistical_error_fy1240,Graph_from_mc_statistical_error_fex1240,Graph_from_mc_statistical_error_fey1240);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1240 = new TH1F("Graph_Graph_from_mc_statistical_error1240","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1240->SetMinimum(0.1687243);
   Graph_Graph_from_mc_statistical_error1240->SetMaximum(1.831276);
   Graph_Graph_from_mc_statistical_error1240->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1240->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1240);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
