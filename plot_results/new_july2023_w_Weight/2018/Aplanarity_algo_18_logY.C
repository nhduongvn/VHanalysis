void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug 10 12:21:05 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(0,0,1,1);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.97351,1.052419,16.56569);
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
   st->SetMinimum(0.01);
   st->SetMaximum(9.744319e+13);
   
   TH1F *st_stack_159 = new TH1F("st_stack_159","",50,0,1);
   st_stack_159->SetMinimum(0.001111806);
   st_stack_159->SetMaximum(4.090422e+14);
   st_stack_159->SetDirectory(0);
   st_stack_159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_159->SetLineColor(ci);
   st_stack_159->GetXaxis()->SetRange(1,50);
   st_stack_159->GetXaxis()->SetLabelFont(42);
   st_stack_159->GetXaxis()->SetLabelSize(0.035);
   st_stack_159->GetXaxis()->SetTitleSize(0.035);
   st_stack_159->GetXaxis()->SetTitleFont(42);
   st_stack_159->GetYaxis()->SetTitle("Events/0.02");
   st_stack_159->GetYaxis()->SetLabelFont(42);
   st_stack_159->GetYaxis()->SetLabelSize(0.05);
   st_stack_159->GetYaxis()->SetTitleSize(0.057);
   st_stack_159->GetYaxis()->SetTitleOffset(1.2);
   st_stack_159->GetYaxis()->SetTitleFont(42);
   st_stack_159->GetZaxis()->SetLabelFont(42);
   st_stack_159->GetZaxis()->SetLabelSize(0.035);
   st_stack_159->GetZaxis()->SetTitleSize(0.035);
   st_stack_159->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_159);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1723779);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,216955.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,44313.85);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,13705.61);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3326.101);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,624.8598);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,212.0205);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,89.8697);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,16.61847);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,7.920658);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,8.794337);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,3.358621);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,30795.03);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,7343.668);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,3627.66);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2575.489);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1068.708);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,436.5047);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,82.14551);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,49.92915);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,11.77468);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,7.920658);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,8.794337);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,3.358621);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(112239);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,11342.69);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1466.79);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,343.5245);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,92.25291);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,32.92122);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,10.9895);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3.58296);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.236639);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,2.120268);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.9202442);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.8638402);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3088156);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.05471136);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,-0.002990372);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,51.5941);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,17.95911);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,9.410923);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,4.53186);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,4.209741);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.517349);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.726418);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.5023679);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.7588619);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.4523617);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.4434356);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.1767041);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.05471136);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.1050048);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(153765);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,221948.9);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,27423.78);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,5540.01);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1475.785);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,477.8801);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,194.6478);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,78.73577);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,40.48329);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,22.13331);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,11.78216);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,7.391985);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,3.630428);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,1.973662);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.428404);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.8530252);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.2822694);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.08128454);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.0950829);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.2738712);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(20,0.08933013);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.07787837);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,148.0208);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,51.43245);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,23.39409);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,12.04531);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,6.414986);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,4.264885);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.664841);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.987766);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.371752);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.9654292);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.7743903);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.5446435);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.401741);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.3656126);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.2455507);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1637213);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.08128454);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.06860274);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.1583889);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(20,0.08933013);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.07787837);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3228671);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,11156.59);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1279.661);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,279.4913);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,62.58019);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,16.13455);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,4.279293);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.4006179);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.09751069);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1303332);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.1007876);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.6096656);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,90.88933);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,33.09427);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,16.75554);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,7.731465);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,6.225355);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,1.366018);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.2314301);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.09751069);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.1303332);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.1007876);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.3132072);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(55877);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,3462.68);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,394.8394);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,61.26217);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,24.22318);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,1.612366);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,1.019);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,1.169007);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.1542881);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,92.65827);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,29.69346);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,8.969886);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,6.430703);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,0.654483);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,0.5333864);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.6450624);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.1198042);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(15424);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,35.25807);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,5.512079);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,1.255574);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.4964046);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,4.881922);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,1.702357);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.7308554);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.4964046);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,88.01396);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,7.576499);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,2.408365);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(8,0.3805224);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,6.065767);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,1.777311);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.9879451);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(8,0.3805224);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,153.9815);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,10.73593);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,2.674483);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.5712326);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(5,0.3042088);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,7.063637);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,1.887059);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.9521757);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.4243639);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(5,0.3042088);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,111.2893);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,8.002527);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.209568);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.2362148);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.09500915);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.0163943);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.007475228);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(12,0.002971343);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(13,0.002431021);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.594732);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.1554117);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.0602719);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02848294);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01557723);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.006316363);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.004492949);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(12,0.002971343);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(13,0.002431021);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,62.13663);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,7.070632);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,1.357127);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.2934593);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.09959767);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.0292358);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.009956219);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.005146865);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.002820744);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.001232015);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0004500496);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0002197265);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1999829);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.06745093);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.0295041);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.01364789);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.007901695);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.004246857);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.002464048);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001735126);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.001275569);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0007936414);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0004500496);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0002197265);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.7768996);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.07208605);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.01329837);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.002811088);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.04950632);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.01487477);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.0063036);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.002811088);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(313);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.3876019);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.03374612);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.005903668);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.003797904);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.0004389172);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.01273481);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.003441862);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001421382);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.001171522);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0004389172);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__436 = new TH1D("VbbHcc_algo_Aplanarity__436","",50,0,1);
   VbbHcc_algo_Aplanarity__436->SetBinContent(0,1);
   VbbHcc_algo_Aplanarity__436->SetBinContent(1,1818265);
   VbbHcc_algo_Aplanarity__436->SetBinContent(2,249887);
   VbbHcc_algo_Aplanarity__436->SetBinContent(3,53934);
   VbbHcc_algo_Aplanarity__436->SetBinContent(4,13248);
   VbbHcc_algo_Aplanarity__436->SetBinContent(5,3476);
   VbbHcc_algo_Aplanarity__436->SetBinContent(6,1061);
   VbbHcc_algo_Aplanarity__436->SetBinContent(7,412);
   VbbHcc_algo_Aplanarity__436->SetBinContent(8,182);
   VbbHcc_algo_Aplanarity__436->SetBinContent(9,90);
   VbbHcc_algo_Aplanarity__436->SetBinContent(10,51);
   VbbHcc_algo_Aplanarity__436->SetBinContent(11,28);
   VbbHcc_algo_Aplanarity__436->SetBinContent(12,17);
   VbbHcc_algo_Aplanarity__436->SetBinContent(13,16);
   VbbHcc_algo_Aplanarity__436->SetBinContent(14,10);
   VbbHcc_algo_Aplanarity__436->SetBinContent(15,7);
   VbbHcc_algo_Aplanarity__436->SetBinContent(16,1);
   VbbHcc_algo_Aplanarity__436->SetEntries(2140735);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__436->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__436->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__436->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__436->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__436->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1317[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1317[50] = {
   1972142,
   247559.3,
   50547.07,
   15362.05,
   3855.149,
   835.8409,
   295.9262,
   132.2271,
   41.0052,
   12.80442,
   8.865941,
   11.86309,
   10.77043,
   1.483115,
   4.208656,
   0.2822694,
   0.08128454,
   0.0950829,
   0.2738712,
   0.08933013,
   0.07787837,
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
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1317[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1317[50] = {
   30795.7,
   7344.005,
   3627.798,
   2575.541,
   1068.754,
   436.5306,
   82.19479,
   49.97291,
   11.8793,
   1.070908,
   0.9457349,
   7.941328,
   8.803509,
   0.3696835,
   3.369222,
   0.1637213,
   0.08128454,
   0.06860274,
   0.1583889,
   0.08933013,
   0.07787837,
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
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1317,Graph_from_VbbHcc_algo_Aplanarity_fy1317,Graph_from_VbbHcc_algo_Aplanarity_fex1317,Graph_from_VbbHcc_algo_Aplanarity_fey1317);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1317 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1317","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetMinimum(2203.231);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetMaximum(2203231);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1317);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__437 = new TH1D("data_mc_ratio__437","",50,0,1);
   data_mc_ratio__437->SetBinContent(1,0.9219747);
   data_mc_ratio__437->SetBinContent(2,1.009403);
   data_mc_ratio__437->SetBinContent(3,1.067006);
   data_mc_ratio__437->SetBinContent(4,0.8623849);
   data_mc_ratio__437->SetBinContent(5,0.9016513);
   data_mc_ratio__437->SetBinContent(6,1.26938);
   data_mc_ratio__437->SetBinContent(7,1.392239);
   data_mc_ratio__437->SetBinContent(8,1.37642);
   data_mc_ratio__437->SetBinContent(9,2.194844);
   data_mc_ratio__437->SetBinContent(10,3.982999);
   data_mc_ratio__437->SetBinContent(11,3.158153);
   data_mc_ratio__437->SetBinContent(12,1.433016);
   data_mc_ratio__437->SetBinContent(13,1.485549);
   data_mc_ratio__437->SetBinContent(14,6.742564);
   data_mc_ratio__437->SetBinContent(15,1.663239);
   data_mc_ratio__437->SetBinContent(16,3.542715);
   data_mc_ratio__437->SetBinError(1,0.0006837391);
   data_mc_ratio__437->SetBinError(2,0.002019262);
   data_mc_ratio__437->SetBinError(3,0.004594469);
   data_mc_ratio__437->SetBinError(4,0.007492487);
   data_mc_ratio__437->SetBinError(5,0.01529321);
   data_mc_ratio__437->SetBinError(6,0.03897033);
   data_mc_ratio__437->SetBinError(7,0.06859068);
   data_mc_ratio__437->SetBinError(8,0.102027);
   data_mc_ratio__437->SetBinError(9,0.2313568);
   data_mc_ratio__437->SetBinError(10,0.5577314);
   data_mc_ratio__437->SetBinError(11,0.5968349);
   data_mc_ratio__437->SetBinError(12,0.3475574);
   data_mc_ratio__437->SetBinError(13,0.3713872);
   data_mc_ratio__437->SetBinError(14,2.132186);
   data_mc_ratio__437->SetBinError(15,0.6286452);
   data_mc_ratio__437->SetBinError(16,3.542715);
   data_mc_ratio__437->SetMinimum(0.4);
   data_mc_ratio__437->SetMaximum(1.6);
   data_mc_ratio__437->SetEntries(34.81982);
   data_mc_ratio__437->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__437->SetLineColor(ci);
   data_mc_ratio__437->SetLineWidth(2);
   data_mc_ratio__437->SetMarkerStyle(20);
   data_mc_ratio__437->SetMarkerSize(1.2);
   data_mc_ratio__437->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__437->GetXaxis()->SetRange(1,50);
   data_mc_ratio__437->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__437->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__437->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__437->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__437->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__437->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__437->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__437->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__437->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__437->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__437->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__437->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__437->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__437->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__437->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__437->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__437->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1318[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1318[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1318[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1318[50] = {
   0.01561536,
   0.02966564,
   0.07177069,
   0.1676561,
   0.2772276,
   0.5222651,
   0.2777543,
   0.3779325,
   0.2897023,
   0.08363578,
   0.1066706,
   0.6694146,
   0.8173776,
   0.2492615,
   0.8005458,
   0.5800181,
   1,
   0.7215045,
   0.5783335,
   1,
   1,
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
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1318,Graph_from_mc_statistical_error_fy1318,Graph_from_mc_statistical_error_fex1318,Graph_from_mc_statistical_error_fey1318);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1318 = new TH1F("Graph_Graph_from_mc_statistical_error1318","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1318->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1318->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1318->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1318->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1318->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1318);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
