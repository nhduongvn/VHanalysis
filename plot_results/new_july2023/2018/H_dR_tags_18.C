void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Fri Jul 14 13:37:57 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(0,0,1,1);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-496.4787,6.525,495992.2);
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
   st->SetMaximum(425088.9);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(0.01);
   st_stack_23->SetMaximum(446343.3);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetLabelSize(0.035);
   st_stack_23->GetXaxis()->SetTitleSize(0.035);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetLabelSize(0.05);
   st_stack_23->GetYaxis()->SetTitleSize(0.057);
   st_stack_23->GetYaxis()->SetTitleOffset(1.2);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetLabelSize(0.035);
   st_stack_23->GetZaxis()->SetTitleSize(0.035);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,37.56592);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,96163.45);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,87015.84);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,60840.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,54316.93);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,54086.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,59230.79);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,56558.16);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,61865.58);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,70017.66);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,75404.66);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,87663.81);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,98566.85);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,106392.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,113130.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,103550.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,101360.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,88078.72);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,81059.03);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,72434.59);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,55558.62);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,41538.71);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,33624.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,28713.24);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,20524.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,18201.06);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,16107.65);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,13765.71);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,9980.09);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,10241.29);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,22.41448);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,3864.025);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,4357.718);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,3053.995);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,3456.154);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,2747.109);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,3427.171);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,2994.984);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,3433.215);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,3352.758);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,4303.422);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,4835.575);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,4626.263);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,4022.315);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,4601.711);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,4306.753);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,4366.853);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,3777.385);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,4074.673);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,4450.317);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,3325.764);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,2420.48);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,2286.777);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,2699.369);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,1574.479);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,1649.328);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,1643.505);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,1362.628);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,1594.33);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,1819.799);
   VbbHcc_tags_H_dR_stack_1->SetEntries(155876);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,0.6491978);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,883.6704);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,1079.054);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,957.5958);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,822.6783);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,686.145);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,663.9747);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,650.2849);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,711.7021);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,804.006);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,902.0048);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,1014.125);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,1135.929);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,1258.556);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,1324.193);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,1257.993);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,1167.557);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,1037.489);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,902.2817);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,720.2278);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,592.5211);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,478.9077);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,377.8465);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,320.1223);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,256.0352);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,214.8994);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,183.3576);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,147.1403);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,97.21009);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,88.39559);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.4212846);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,15.70286);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,16.5707);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,15.35201);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,14.29355);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,12.32861);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,13.96045);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,12.26438);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,12.80889);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,13.87895);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,14.68653);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,15.39313);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,15.81692);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,16.84102);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,16.89869);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,20.87952);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,15.61494);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,15.24899);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,14.28821);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,12.05567);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,10.97507);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,10.02289);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,8.819414);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,9.076647);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,14.53283);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,8.025231);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,6.509648);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,5.566165);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,4.572675);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,4.253029);
   VbbHcc_tags_H_dR_stack_2->SetEntries(222347);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,9.699282);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,10464.26);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,17123.45);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,18089.19);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,16917.83);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,14527.19);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,13127.16);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,12884.41);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,13772.59);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,15308.06);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,17269.97);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,19607.31);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,22021.63);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,24197.98);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,25480.07);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,24505.33);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,22650.77);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,19913.22);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,16930.31);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,13846.27);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,10977.89);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,8577.705);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,6763.285);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,5399.058);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,4498.792);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,3807.771);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,3156.35);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,2484.224);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,1556.829);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,1338.035);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.9088079);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,29.85213);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,37.30613);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,38.57294);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,37.32826);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,34.70386);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,32.96449);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,32.60011);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,34.89595);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,35.32796);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,37.76103);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,40.27005);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,43.48342);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,44.84556);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,46.4144);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,45.49157);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,44.84384);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,41.11861);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,38.46364);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,34.16477);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,30.28139);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,26.74075);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,24.22939);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,21.32125);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,19.27045);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,17.7632);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,16.17577);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,14.36344);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,11.80236);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,10.64156);
   VbbHcc_tags_H_dR_stack_3->SetEntries(5745643);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(2,0.3209163);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,669.5384);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,768.2995);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,639.6185);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,623.6104);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,533.1942);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,517.7057);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,515.0062);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,571.7821);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,592.8599);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,677.6349);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,755.0611);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,809.6873);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,891.6833);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,969.7919);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,920.015);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,851.692);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,776.7474);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,657.2181);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,537.9788);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,424.0621);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,350.7743);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,267.6963);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,209.4265);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,189.2484);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,145.5226);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,122.4219);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,116.6033);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,83.82686);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,59.2643);
   VbbHcc_tags_H_dR_stack_4->SetBinError(2,0.1881925);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,17.67783);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,18.46757);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,16.80959);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,19.12137);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,15.7001);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,16.42826);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,18.87389);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,19.4067);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,18.35886);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,18.9254);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,22.30795);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,20.73235);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,18.74991);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,22.58301);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,24.32742);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,20.8725);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,22.63744);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,18.8932);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,13.85402);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,12.14281);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,17.10595);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,9.597024);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,9.12409);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,11.79154);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,8.729463);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,7.347086);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,8.924741);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,8.620419);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,4.393996);
   VbbHcc_tags_H_dR_stack_4->SetEntries(86588);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(2,0.293317);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,385.2747);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,477.9199);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,388.6847);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,349.3313);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,261.7427);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,329.3113);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,269.5284);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,283.421);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,344.5156);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,322.0189);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,372.1097);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,412.2881);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,465.2625);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,452.7388);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,464.1858);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,428.9338);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,386.8038);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,300.9064);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,213.1959);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,232.677);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,158.2118);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,135.2635);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,96.33887);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,100.3375);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,81.71535);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,82.32206);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,57.13365);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,48.77677);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,28.28722);
   VbbHcc_tags_H_dR_stack_5->SetBinError(2,0.2073624);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,14.37383);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,23.54961);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,22.02339);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,29.89865);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,17.18312);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,31.32736);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,15.96115);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,21.29578);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,29.03646);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,23.02007);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,21.55755);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,23.72468);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,28.77446);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,23.51713);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,38.10891);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,25.86234);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,20.70513);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,20.34597);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,12.24809);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,22.22423);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,15.56387);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,15.11986);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,9.234211);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,14.37226);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,13.44742);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,9.830232);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,7.628304);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,7.10021);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,4.00569);
   VbbHcc_tags_H_dR_stack_5->SetEntries(38399);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(3,3.376276);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,2.173624);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,2.399259);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(6,1.210764);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(7,2.060761);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(8,1.050873);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(9,1.670893);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(10,0.307415);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(11,1.608404);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(12,2.630901);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,2.813553);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(14,3.608557);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(15,3.564686);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(16,2.976261);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(17,1.315627);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,1.872293);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(19,2.777914);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(20,0.6075362);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(21,0.7203381);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(22,1.66297);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(23,0.456744);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(24,0.4191023);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(25,0.9500164);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(26,0.6008205);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(27,0.7011754);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(28,0.7707292);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(29,0.2002826);
   VbbHcc_tags_H_dR_stack_6->SetBinError(3,1.028249);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,0.8222164);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.8880867);
   VbbHcc_tags_H_dR_stack_6->SetBinError(6,0.622614);
   VbbHcc_tags_H_dR_stack_6->SetBinError(7,0.8522999);
   VbbHcc_tags_H_dR_stack_6->SetBinError(8,0.6130611);
   VbbHcc_tags_H_dR_stack_6->SetBinError(9,0.7580977);
   VbbHcc_tags_H_dR_stack_6->SetBinError(10,0.307415);
   VbbHcc_tags_H_dR_stack_6->SetBinError(11,0.7289975);
   VbbHcc_tags_H_dR_stack_6->SetBinError(12,0.9421752);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,0.9473331);
   VbbHcc_tags_H_dR_stack_6->SetBinError(14,1.108824);
   VbbHcc_tags_H_dR_stack_6->SetBinError(15,1.091484);
   VbbHcc_tags_H_dR_stack_6->SetBinError(16,0.970141);
   VbbHcc_tags_H_dR_stack_6->SetBinError(17,0.6008177);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,0.7285764);
   VbbHcc_tags_H_dR_stack_6->SetBinError(19,0.9886657);
   VbbHcc_tags_H_dR_stack_6->SetBinError(20,0.4320953);
   VbbHcc_tags_H_dR_stack_6->SetBinError(21,0.4288166);
   VbbHcc_tags_H_dR_stack_6->SetBinError(22,0.7580858);
   VbbHcc_tags_H_dR_stack_6->SetBinError(23,0.3254006);
   VbbHcc_tags_H_dR_stack_6->SetBinError(24,0.2993315);
   VbbHcc_tags_H_dR_stack_6->SetBinError(25,0.5486691);
   VbbHcc_tags_H_dR_stack_6->SetBinError(26,0.4255243);
   VbbHcc_tags_H_dR_stack_6->SetBinError(27,0.4990318);
   VbbHcc_tags_H_dR_stack_6->SetBinError(28,0.4501765);
   VbbHcc_tags_H_dR_stack_6->SetBinError(29,0.2002826);
   VbbHcc_tags_H_dR_stack_6->SetEntries(144);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,8.477001);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,12.36607);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,7.164489);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(6,3.173244);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,4.449044);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(8,3.854547);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(9,2.609705);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,2.390244);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,4.002709);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,4.997765);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,5.332968);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,6.165214);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,5.305021);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,7.70126);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,7.670731);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,4.4001);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,6.555239);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,4.448856);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,3.986262);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(22,4.041894);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(23,1.341329);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,1.185727);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(25,0.6477692);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,1.531483);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,0.378255);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(28,1.669482);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(29,0.9974377);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.519168);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(31,1.132299);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,1.431978);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,1.725792);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,1.353072);
   VbbHcc_tags_H_dR_stack_7->SetBinError(6,0.8728258);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,1.050274);
   VbbHcc_tags_H_dR_stack_7->SetBinError(8,1.010008);
   VbbHcc_tags_H_dR_stack_7->SetBinError(9,0.7721066);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.7304483);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,0.9848689);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,1.087465);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,1.123013);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,1.19961);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,1.12911);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,1.384341);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,1.394826);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,1.065946);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,1.375923);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,1.01787);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.9692753);
   VbbHcc_tags_H_dR_stack_7->SetBinError(22,0.9667715);
   VbbHcc_tags_H_dR_stack_7->SetBinError(23,0.5510108);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.5363477);
   VbbHcc_tags_H_dR_stack_7->SetBinError(25,0.3749652);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.6315881);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.2711226);
   VbbHcc_tags_H_dR_stack_7->SetBinError(28,0.6367479);
   VbbHcc_tags_H_dR_stack_7->SetBinError(29,0.5027335);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.3725211);
   VbbHcc_tags_H_dR_stack_7->SetBinError(31,0.5397515);
   VbbHcc_tags_H_dR_stack_7->SetEntries(512);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,7.023629);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,12.16531);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,8.322524);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,5.054322);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,4.460646);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,3.817633);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,2.048707);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,3.33799);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,3.243988);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,3.682498);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,4.202084);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,4.150916);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,8.549893);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,6.036567);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,4.891272);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,6.470011);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,8.109141);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,3.363652);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,3.451227);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,4.047598);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,1.238855);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,2.525145);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(25,0.6180931);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.9462078);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,1.49967);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,1.994401);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(29,0.9452551);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.4975729);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(31,0.598749);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,1.311468);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,1.718759);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,1.425021);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,1.086697);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,1.021537);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.9829897);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.6921869);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.9031699);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.8867302);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.9332342);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.9737422);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,0.9833345);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,1.447274);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,1.213408);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,1.069442);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,1.248545);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,1.657231);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.8871446);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.9367181);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.9918027);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.5068707);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.7772088);
   VbbHcc_tags_H_dR_stack_8->SetBinError(25,0.3597642);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.4821293);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.5730337);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.672685);
   VbbHcc_tags_H_dR_stack_8->SetBinError(29,0.4741369);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.3563582);
   VbbHcc_tags_H_dR_stack_8->SetBinError(31,0.352713);
   VbbHcc_tags_H_dR_stack_8->SetEntries(509);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(2,0.008224042);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,6.139908);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,8.516971);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,7.176315);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,4.351701);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,2.590434);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,2.090812);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,1.941804);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,2.045734);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,2.470992);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,3.013053);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,3.258027);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,4.145802);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,4.493171);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,5.014957);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,4.742273);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,4.095768);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,3.258979);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,2.645163);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,2.059888);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,1.536998);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,1.196544);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.9381206);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.826986);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.7103007);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.8368562);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.8070064);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.7894759);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.5814502);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.3695964);
   VbbHcc_tags_H_dR_stack_9->SetBinError(2,0.004800024);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.1373242);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.1607831);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.1520151);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.1128186);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.08389216);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.07785263);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.07201587);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.07481668);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.0899083);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.09896138);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.09528115);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.1082942);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.1144824);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.1199949);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.1186485);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.1099263);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.09825973);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.08486539);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.09273233);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.07214167);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.121076);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.04991949);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.06073588);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.04353856);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.0493416);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.05491801);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.04658739);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.05537675);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.03222405);
   VbbHcc_tags_H_dR_stack_9->SetEntries(32696);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(2,0.0007200141);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,3.599822);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,5.875046);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,5.980644);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,5.202272);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,3.616996);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,2.554605);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,2.330738);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,2.370467);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,2.576882);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,2.928107);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,3.339238);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,3.798309);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,4.096514);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,4.233075);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,3.981395);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,3.74239);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,3.197162);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,2.756315);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,2.250968);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,1.771062);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,1.475644);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,1.18623);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.9866136);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.9543658);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.9618527);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.8262646);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.7177118);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.4465192);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.3023963);
   VbbHcc_tags_H_dR_stack_10->SetBinError(2,0.0007200141);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.04792221);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.06126393);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.06190938);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.05774211);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.04810939);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.04035617);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.03847062);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.03884853);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.04049077);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.0430952);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.0460883);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.04912751);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.05104942);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.05186345);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.05034309);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.04874046);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.04503353);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.04180111);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.03776485);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.03345889);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.03054688);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.02740324);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.02503604);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.02461061);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.02474953);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.0229133);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.0214049);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.01684755);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.01383697);
   VbbHcc_tags_H_dR_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.07239927);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.1753842);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.2036077);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.3157149);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.1912369);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.1145689);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.07688035);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.05731555);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.08380521);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.08268372);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.08703892);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.07205339);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.08566496);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.08856047);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.06949771);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.0596336);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.05756271);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.08998401);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.05657067);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.02282387);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.01657649);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.02972461);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.01861869);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.00900208);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(27,0.03003016);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(28,0.02868921);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.03049134);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(30,0.01884146);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(31,0.007479328);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.0146268);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.02946807);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.02415313);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.0348163);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.02252183);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.01905567);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.01374749);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.01223303);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.01508388);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.0151111);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.0156259);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.01379351);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.01459536);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.01609745);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.0135947);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.01336327);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.01289974);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.02479556);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.0123362);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.007767743);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.006406073);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.00903413);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.008172292);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.00467179);
   VbbHcc_tags_H_dR_stack_11->SetBinError(27,0.008736962);
   VbbHcc_tags_H_dR_stack_11->SetBinError(28,0.008753535);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.008838433);
   VbbHcc_tags_H_dR_stack_11->SetBinError(30,0.006847226);
   VbbHcc_tags_H_dR_stack_11->SetBinError(31,0.005072128);
   VbbHcc_tags_H_dR_stack_11->SetEntries(903);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.02743556);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.06693705);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.08986172);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.1312162);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.1015518);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.06438634);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.05078902);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.0415281);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.03688888);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.03091065);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.03802018);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.04067913);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.0364309);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.04371793);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.03974084);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.03870209);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.04008257);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.02779214);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.02511177);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.01717978);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.01507722);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,0.01924025);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.01715872);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.01890206);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.0198234);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.01565097);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.01219634);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(30,0.004150067);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(31,0.00405975);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.003133378);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.00521287);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.005668545);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.007016658);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.00613604);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.004726544);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.004259125);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.003769972);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.003583166);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.003246567);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.003654733);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.003763046);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.003487525);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.0038973);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.003832096);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.00373661);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.005079726);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.003071086);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.002978102);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.002432116);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.002306413);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,0.002591642);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.002442343);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.002621951);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.002625738);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.00230296);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.002029279);
   VbbHcc_tags_H_dR_stack_12->SetBinError(30,0.001176514);
   VbbHcc_tags_H_dR_stack_12->SetBinError(31,0.00124002);
   VbbHcc_tags_H_dR_stack_12->SetEntries(3336);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__45 = new TH1D("VbbHcc_tags_H_dR__45","",30,0,6);
   VbbHcc_tags_H_dR__45->SetBinContent(2,118);
   VbbHcc_tags_H_dR__45->SetBinContent(3,119470);
   VbbHcc_tags_H_dR__45->SetBinContent(4,134789);
   VbbHcc_tags_H_dR__45->SetBinContent(5,107832);
   VbbHcc_tags_H_dR__45->SetBinContent(6,100775);
   VbbHcc_tags_H_dR__45->SetBinContent(7,97303);
   VbbHcc_tags_H_dR__45->SetBinContent(8,97747);
   VbbHcc_tags_H_dR__45->SetBinContent(9,101132);
   VbbHcc_tags_H_dR__45->SetBinContent(10,107124);
   VbbHcc_tags_H_dR__45->SetBinContent(11,117744);
   VbbHcc_tags_H_dR__45->SetBinContent(12,130044);
   VbbHcc_tags_H_dR__45->SetBinContent(13,145604);
   VbbHcc_tags_H_dR__45->SetBinContent(14,163850);
   VbbHcc_tags_H_dR__45->SetBinContent(15,178514);
   VbbHcc_tags_H_dR__45->SetBinContent(16,191290);
   VbbHcc_tags_H_dR__45->SetBinContent(17,179801);
   VbbHcc_tags_H_dR__45->SetBinContent(18,168371);
   VbbHcc_tags_H_dR__45->SetBinContent(19,153613);
   VbbHcc_tags_H_dR__45->SetBinContent(20,134011);
   VbbHcc_tags_H_dR__45->SetBinContent(21,114301);
   VbbHcc_tags_H_dR__45->SetBinContent(22,94196);
   VbbHcc_tags_H_dR__45->SetBinContent(23,76100);
   VbbHcc_tags_H_dR__45->SetBinContent(24,60927);
   VbbHcc_tags_H_dR__45->SetBinContent(25,48509);
   VbbHcc_tags_H_dR__45->SetBinContent(26,38846);
   VbbHcc_tags_H_dR__45->SetBinContent(27,31279);
   VbbHcc_tags_H_dR__45->SetBinContent(28,26104);
   VbbHcc_tags_H_dR__45->SetBinContent(29,22628);
   VbbHcc_tags_H_dR__45->SetBinContent(30,15324);
   VbbHcc_tags_H_dR__45->SetBinContent(31,14760);
   VbbHcc_tags_H_dR__45->SetEntries(2972106);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__45->SetLineColor(ci);
   VbbHcc_tags_H_dR__45->SetLineWidth(2);
   VbbHcc_tags_H_dR__45->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__45->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__45->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__45->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__45->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__45->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__45->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__45->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__45->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__45->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__45->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__45->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__45->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__45->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__45->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__45->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__45->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1045[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1045[30] = {
   0,
   48.53757,
   108594.9,
   106505.9,
   80947.22,
   73049.82,
   70111.95,
   73882.5,
   70888.12,
   77215.63,
   87081.12,
   94593.65,
   109431.5,
   122968.4,
   133232.4,
   141383.7,
   130720.8,
   126479.7,
   110217,
   99863.68,
   87764.81,
   67798.87,
   51110.05,
   41175.19,
   34742.25,
   25573.88,
   22455.39,
   19658.22,
   16574.51,
   11768.8};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1045[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1045[30] = {
   0,
   22.4386,
   3864.24,
   4358.013,
   3054.404,
   3456.568,
   2747.455,
   3427.541,
   2995.289,
   3433.537,
   3353.149,
   4303.717,
   4835.867,
   4626.602,
   4022.748,
   4602.093,
   4307.282,
   4367.238,
   3777.765,
   4074.974,
   4450.503,
   3326.016,
   2420.759,
   2286.992,
   2699.5,
   1574.774,
   1649.521,
   1643.643,
   1362.766,
   1594.419};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1045,Graph_from_VbbHcc_tags_H_dR_fy1045,Graph_from_VbbHcc_tags_H_dR_fex1045,Graph_from_VbbHcc_tags_H_dR_fey1045);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1045 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1045","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetMaximum(160584.4);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1045);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   H_dR_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__46 = new TH1D("data_mc_ratio__46","",30,0,6);
   data_mc_ratio__46->SetBinContent(2,2.431106);
   data_mc_ratio__46->SetBinContent(3,1.100144);
   data_mc_ratio__46->SetBinContent(4,1.265554);
   data_mc_ratio__46->SetBinContent(5,1.332127);
   data_mc_ratio__46->SetBinContent(6,1.379538);
   data_mc_ratio__46->SetBinContent(7,1.387823);
   data_mc_ratio__46->SetBinContent(8,1.323006);
   data_mc_ratio__46->SetBinContent(9,1.426642);
   data_mc_ratio__46->SetBinContent(10,1.387336);
   data_mc_ratio__46->SetBinContent(11,1.352119);
   data_mc_ratio__46->SetBinContent(12,1.374765);
   data_mc_ratio__46->SetBinContent(13,1.330549);
   data_mc_ratio__46->SetBinContent(14,1.332456);
   data_mc_ratio__46->SetBinContent(15,1.339869);
   data_mc_ratio__46->SetBinContent(16,1.352984);
   data_mc_ratio__46->SetBinContent(17,1.375459);
   data_mc_ratio__46->SetBinContent(18,1.331209);
   data_mc_ratio__46->SetBinContent(19,1.393733);
   data_mc_ratio__46->SetBinContent(20,1.341939);
   data_mc_ratio__46->SetBinContent(21,1.302356);
   data_mc_ratio__46->SetBinContent(22,1.389345);
   data_mc_ratio__46->SetBinContent(23,1.488944);
   data_mc_ratio__46->SetBinContent(24,1.479702);
   data_mc_ratio__46->SetBinContent(25,1.396254);
   data_mc_ratio__46->SetBinContent(26,1.518972);
   data_mc_ratio__46->SetBinContent(27,1.392939);
   data_mc_ratio__46->SetBinContent(28,1.327893);
   data_mc_ratio__46->SetBinContent(29,1.365229);
   data_mc_ratio__46->SetBinContent(30,1.302087);
   data_mc_ratio__46->SetBinContent(31,1.255349);
   data_mc_ratio__46->SetBinError(2,0.2238015);
   data_mc_ratio__46->SetBinError(3,0.003182878);
   data_mc_ratio__46->SetBinError(4,0.003447097);
   data_mc_ratio__46->SetBinError(5,0.00405669);
   data_mc_ratio__46->SetBinError(6,0.004345675);
   data_mc_ratio__46->SetBinError(7,0.004449089);
   data_mc_ratio__46->SetBinError(8,0.004231654);
   data_mc_ratio__46->SetBinError(9,0.004486119);
   data_mc_ratio__46->SetBinError(10,0.004238754);
   data_mc_ratio__46->SetBinError(11,0.003940446);
   data_mc_ratio__46->SetBinError(12,0.003812266);
   data_mc_ratio__46->SetBinError(13,0.003486939);
   data_mc_ratio__46->SetBinError(14,0.003291772);
   data_mc_ratio__46->SetBinError(15,0.00317122);
   data_mc_ratio__46->SetBinError(16,0.003093475);
   data_mc_ratio__46->SetBinError(17,0.003243781);
   data_mc_ratio__46->SetBinError(18,0.003244238);
   data_mc_ratio__46->SetBinError(19,0.003556031);
   data_mc_ratio__46->SetBinError(20,0.003665748);
   data_mc_ratio__46->SetBinError(21,0.003852162);
   data_mc_ratio__46->SetBinError(22,0.004526826);
   data_mc_ratio__46->SetBinError(23,0.005397418);
   data_mc_ratio__46->SetBinError(24,0.005994725);
   data_mc_ratio__46->SetBinError(25,0.006339474);
   data_mc_ratio__46->SetBinError(26,0.007706844);
   data_mc_ratio__46->SetBinError(27,0.007876001);
   data_mc_ratio__46->SetBinError(28,0.008218819);
   data_mc_ratio__46->SetBinError(29,0.00907575);
   data_mc_ratio__46->SetBinError(30,0.0105185);
   data_mc_ratio__46->SetBinError(31,0.1945763);
   data_mc_ratio__46->SetMinimum(0.4);
   data_mc_ratio__46->SetMaximum(1.6);
   data_mc_ratio__46->SetEntries(1115.113);
   data_mc_ratio__46->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__46->SetLineColor(ci);
   data_mc_ratio__46->SetLineWidth(2);
   data_mc_ratio__46->SetMarkerStyle(20);
   data_mc_ratio__46->SetMarkerSize(1.2);
   data_mc_ratio__46->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__46->GetXaxis()->SetRange(1,31);
   data_mc_ratio__46->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__46->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__46->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__46->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__46->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__46->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1046[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1046[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1046[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1046[30] = {
   0,
   0.4622934,
   0.03558399,
   0.04091804,
   0.03773327,
   0.04731796,
   0.03918668,
   0.04639178,
   0.04225374,
   0.04446687,
   0.03850604,
   0.04549688,
   0.04419082,
   0.03762432,
   0.03019347,
   0.03255036,
   0.03295025,
   0.03452915,
   0.03427571,
   0.04080537,
   0.05070943,
   0.04905711,
   0.04736365,
   0.05554297,
   0.07770078,
   0.06157743,
   0.07345768,
   0.08361101,
   0.08222063,
   0.1354785};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1046,Graph_from_mc_statistical_error_fy1046,Graph_from_mc_statistical_error_fex1046,Graph_from_mc_statistical_error_fey1046);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1046 = new TH1F("Graph_Graph_from_mc_statistical_error1046","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1046->SetMinimum(0.445248);
   Graph_Graph_from_mc_statistical_error1046->SetMaximum(1.554752);
   Graph_Graph_from_mc_statistical_error1046->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1046->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1046);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
