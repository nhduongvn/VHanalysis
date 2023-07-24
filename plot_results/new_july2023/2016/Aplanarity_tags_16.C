void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Mon Jul 24 10:11:25 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(0,0,1,1);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7150.356,1.052419,7143215);
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
   st->SetMaximum(6122075);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(0.01);
   st_stack_61->SetMaximum(6428178);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetLabelSize(0.035);
   st_stack_61->GetXaxis()->SetTitleSize(0.035);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Events/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetLabelSize(0.05);
   st_stack_61->GetYaxis()->SetTitleSize(0.057);
   st_stack_61->GetYaxis()->SetTitleOffset(1.2);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetLabelSize(0.035);
   st_stack_61->GetZaxis()->SetTitleSize(0.035);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,2302927);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,340627.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,86396.54);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,26961.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,7734.835);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,4150.511);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,2540.477);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,735.5268);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,1268.289);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,146.9529);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,224.656);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,434.6684);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,108.4484);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,10.70504);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,45.92199);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.5033839);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,15.63565);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,40411.34);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,24683.06);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,5630.277);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,2922.144);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,1112.629);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,826.251);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,611.4373);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,109.8964);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,500.4494);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,44.67338);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,62.33765);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,295.1122);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,41.53195);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,8.057011);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,23.59614);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.5033839);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,10.77161);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(174298);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,23057.76);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,3420.813);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,880.002);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,302.4114);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,110.0598);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,55.29647);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,32.20277);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,16.56836);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,11.9697);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,8.425722);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,4.570771);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,1.80223);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,2.197104);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.828641);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.6773963);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.4847123);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.1544987);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.4987478);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.0900845);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.2995461);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,64.1595);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,24.55384);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,12.50476);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,7.349298);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,4.317012);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,3.158984);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,2.457864);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,1.726527);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,1.519734);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,1.315851);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.912265);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.4726048);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.6269969);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.3997709);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.335425);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.302415);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.08942945);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.3550006);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.06379451);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.3184841);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(391454);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,399977.9);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,58190.3);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,15174.24);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,5437.208);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,2388.918);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,1196.909);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,645.9398);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,370.3984);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,229.3358);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,136.9574);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,89.45086);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,55.04834);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,35.96876);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,22.12899);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,15.41376);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,7.606058);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,4.83384);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,2.760598);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,1.751689);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.2746876);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(21,0.3346908);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(22,0.1558213);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,164.1372);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,62.42584);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,31.77699);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,18.97983);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,12.55328);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,8.877735);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,6.519622);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,4.931109);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,3.878874);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,2.994466);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,2.419633);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,1.909147);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,1.53655);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,1.210424);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,1.014618);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.7048033);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.5671318);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.4292058);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.3364082);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.1255574);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(21,0.1503783);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(22,0.1102625);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(7663533);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,17926.59);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,2119.63);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,534.6502);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,170.9682);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,66.91605);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,29.62426);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,19.00525);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,8.838954);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,3.803881);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,10.10986);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,2.397857);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,1.754555);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.7845501);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(14,0.84457);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.1559047);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.3999637);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,102.0895);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,41.22909);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,20.55607);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,11.54714);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,6.119284);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,3.441673);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,1.803508);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,1.168919);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.6586984);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,4.302415);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.6277817);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.5169469);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.2497217);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(14,0.3611449);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.1103962);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.3201136);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(163132);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,10576.77);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,1152.335);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,323.6129);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,107.8707);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,33.42838);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,27.61453);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,25.68099);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,6.37034);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,2.541061);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(10,3.378873);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,1.129152);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(12,1.205579);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(13,0.4609483);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(14,6.911377e-05);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(15,0.2584845);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(20,0.1210029);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,119.6604);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,42.9736);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,27.17862);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,14.61841);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,4.012253);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,7.27745);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,9.878644);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,1.745926);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.6539789);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(10,1.660201);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.3363853);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(12,0.503963);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(13,0.2231311);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(14,6.911377e-05);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(15,0.2584845);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(20,0.08807871);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(113083);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,59.3209);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,6.38391);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(3,1.607547);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(4,0.550205);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(5,0.4807543);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(6,0.09139225);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(7,0.1722585);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,2.321975);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,0.7619146);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(3,0.3812616);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(4,0.2250457);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(5,0.2160558);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(6,0.09139225);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(7,0.1218542);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,145.8789);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,15.75402);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,2.6463);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(4,1.721306);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(5,0.3958449);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(6,0.4178331);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(7,0.07527418);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(8,0.06287276);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,3.152874);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,1.038759);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.4198479);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(4,0.3457173);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(5,0.161857);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(6,0.1713385);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(7,0.07527418);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(8,0.06287276);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(2496);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,134.4076);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,16.05235);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,3.462835);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,1.165096);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(5,0.7656171);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(6,0.6910103);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(8,0.2125369);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,5.075415);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,1.747224);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.811967);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.4762074);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(5,0.3829454);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(6,0.3497887);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(8,0.2125369);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(834);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,84.34888);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,8.738444);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,1.949144);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.5938371);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.274206);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.1314533);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.07599014);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.03667148);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.02467645);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.01789111);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.005748689);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.005717692);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(13,0.004611872);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(15,0.002692142);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(17,0.001576359);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(20,0.001654253);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.3569263);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.1143516);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.05382712);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.02979479);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.02004872);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01400675);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.01049588);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.007206726);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.006002878);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.005211458);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002874681);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.002861329);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(13,0.002674699);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(15,0.001904222);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(17,0.001576359);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(20,0.001654253);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(67621);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,40.43242);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,4.630023);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,1.093653);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.3618076);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.1766449);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.07259744);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.05319821);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.02379695);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01449345);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.0106978);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.004660783);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.003615072);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.001923302);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.001979986);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0005547656);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0004092642);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(19,0.0004092642);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(21,0.0003727492);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.1243549);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.04206713);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.02041165);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.01176762);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.008189387);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.005230128);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.004505867);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.003011453);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.002354551);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001991766);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.001334495);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.001124157);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.000861029);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0008862074);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0004155895);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0004092642);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(19,0.0004092642);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(21,0.0003727492);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,2.241073);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.2033551);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.04893889);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(4,0.01785026);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(6,0.002841685);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.08152401);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.0247672);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.01199883);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(4,0.007296883);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(6,0.002841685);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.9960887);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.1090449);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.02800761);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.008882933);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.003417138);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(6,0.001319481);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(7,0.0008095775);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.002021428);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(9,0.0003829271);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(17,0.0003753755);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.01947693);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.006432696);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.003260961);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.001830761);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.00114096);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(6,0.0006825484);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(7,0.0005736672);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.0008534785);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(9,0.0003829271);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(17,0.0003753755);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__121 = new TH1D("VbbHcc_tags_Aplanarity__121","",50,0,1);
   VbbHcc_tags_Aplanarity__121->SetBinContent(1,1268964);
   VbbHcc_tags_Aplanarity__121->SetBinContent(2,160896);
   VbbHcc_tags_Aplanarity__121->SetBinContent(3,45168);
   VbbHcc_tags_Aplanarity__121->SetBinContent(4,16902);
   VbbHcc_tags_Aplanarity__121->SetBinContent(5,7501);
   VbbHcc_tags_Aplanarity__121->SetBinContent(6,3845);
   VbbHcc_tags_Aplanarity__121->SetBinContent(7,2164);
   VbbHcc_tags_Aplanarity__121->SetBinContent(8,1218);
   VbbHcc_tags_Aplanarity__121->SetBinContent(9,744);
   VbbHcc_tags_Aplanarity__121->SetBinContent(10,476);
   VbbHcc_tags_Aplanarity__121->SetBinContent(11,294);
   VbbHcc_tags_Aplanarity__121->SetBinContent(12,189);
   VbbHcc_tags_Aplanarity__121->SetBinContent(13,120);
   VbbHcc_tags_Aplanarity__121->SetBinContent(14,74);
   VbbHcc_tags_Aplanarity__121->SetBinContent(15,63);
   VbbHcc_tags_Aplanarity__121->SetBinContent(16,21);
   VbbHcc_tags_Aplanarity__121->SetBinContent(17,15);
   VbbHcc_tags_Aplanarity__121->SetBinContent(18,6);
   VbbHcc_tags_Aplanarity__121->SetBinContent(19,8);
   VbbHcc_tags_Aplanarity__121->SetBinContent(20,7);
   VbbHcc_tags_Aplanarity__121->SetEntries(1508724);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__121->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__121->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__121->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__121->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__121->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__121->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__121->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__121->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__121->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__121->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__121->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__121->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__121->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__121->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1121[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1121[50] = {
   2754934,
   405562.1,
   103319.9,
   32984.38,
   10336.25,
   5461.365,
   3263.683,
   1138.041,
   1515.979,
   305.8533,
   322.215,
   494.4885,
   147.8663,
   34.50929,
   62.43022,
   8.994673,
   20.62635,
   3.259346,
   1.842183,
   0.6968909,
   0.3350635,
   0.1558213,
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1121[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1121[50] = {
   40412.03,
   24683.22,
   5630.484,
   2922.274,
   1112.732,
   826.344,
   611.5594,
   110.0408,
   500.4676,
   45.02973,
   62.39533,
   295.1197,
   41.56644,
   8.165218,
   23.622,
   0.971633,
   10.7869,
   0.5569946,
   0.3424039,
   0.3534931,
   0.1503788,
   0.1102625,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1121,Graph_from_VbbHcc_tags_Aplanarity_fy1121,Graph_from_VbbHcc_tags_Aplanarity_fex1121,Graph_from_VbbHcc_tags_Aplanarity_fey1121);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1121 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1121","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetMaximum(3074880);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1121);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__122 = new TH1D("data_mc_ratio__122","",50,0,1);
   data_mc_ratio__122->SetBinContent(1,0.4606151);
   data_mc_ratio__122->SetBinContent(2,0.3967235);
   data_mc_ratio__122->SetBinContent(3,0.4371666);
   data_mc_ratio__122->SetBinContent(4,0.5124243);
   data_mc_ratio__122->SetBinContent(5,0.7256982);
   data_mc_ratio__122->SetBinContent(6,0.7040365);
   data_mc_ratio__122->SetBinContent(7,0.6630545);
   data_mc_ratio__122->SetBinContent(8,1.07026);
   data_mc_ratio__122->SetBinContent(9,0.4907719);
   data_mc_ratio__122->SetBinContent(10,1.556302);
   data_mc_ratio__122->SetBinContent(11,0.9124341);
   data_mc_ratio__122->SetBinContent(12,0.3822132);
   data_mc_ratio__122->SetBinContent(13,0.8115438);
   data_mc_ratio__122->SetBinContent(14,2.14435);
   data_mc_ratio__122->SetBinContent(15,1.009127);
   data_mc_ratio__122->SetBinContent(16,2.334715);
   data_mc_ratio__122->SetBinContent(17,0.7272253);
   data_mc_ratio__122->SetBinContent(18,1.84086);
   data_mc_ratio__122->SetBinContent(19,4.342674);
   data_mc_ratio__122->SetBinContent(20,10.04461);
   data_mc_ratio__122->SetBinError(1,0.0004088966);
   data_mc_ratio__122->SetBinError(2,0.0009890433);
   data_mc_ratio__122->SetBinError(3,0.002056987);
   data_mc_ratio__122->SetBinError(4,0.003941492);
   data_mc_ratio__122->SetBinError(5,0.008379082);
   data_mc_ratio__122->SetBinError(6,0.01135395);
   data_mc_ratio__122->SetBinError(7,0.01425347);
   data_mc_ratio__122->SetBinError(8,0.03066661);
   data_mc_ratio__122->SetBinError(9,0.01799257);
   data_mc_ratio__122->SetBinError(10,0.07133297);
   data_mc_ratio__122->SetBinError(11,0.05321424);
   data_mc_ratio__122->SetBinError(12,0.02780192);
   data_mc_ratio__122->SetBinError(13,0.07408348);
   data_mc_ratio__122->SetBinError(14,0.2492756);
   data_mc_ratio__122->SetBinError(15,0.127138);
   data_mc_ratio__122->SetBinError(16,0.5094766);
   data_mc_ratio__122->SetBinError(17,0.1877688);
   data_mc_ratio__122->SetBinError(18,0.7515281);
   data_mc_ratio__122->SetBinError(19,1.535367);
   data_mc_ratio__122->SetBinError(20,3.796507);
   data_mc_ratio__122->SetMinimum(0.4);
   data_mc_ratio__122->SetMaximum(1.6);
   data_mc_ratio__122->SetEntries(21.99353);
   data_mc_ratio__122->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__122->SetLineColor(ci);
   data_mc_ratio__122->SetLineWidth(2);
   data_mc_ratio__122->SetMarkerStyle(20);
   data_mc_ratio__122->SetMarkerSize(1.2);
   data_mc_ratio__122->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__122->GetXaxis()->SetRange(1,50);
   data_mc_ratio__122->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__122->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__122->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__122->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__122->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__122->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__122->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__122->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__122->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__122->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__122->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__122->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__122->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__122->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__122->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__122->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__122->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1122[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1122[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1122[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1122[50] = {
   0.01466897,
   0.06086176,
   0.05449565,
   0.0885957,
   0.1076533,
   0.1513072,
   0.1873832,
   0.09669324,
   0.3301282,
   0.1472266,
   0.193645,
   0.5968181,
   0.2811082,
   0.2366093,
   0.3783745,
   0.1080232,
   0.5229671,
   0.1708915,
   0.1858686,
   0.5072431,
   0.4488068,
   0.7076211,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1122,Graph_from_mc_statistical_error_fy1122,Graph_from_mc_statistical_error_fex1122,Graph_from_mc_statistical_error_fey1122);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1122 = new TH1F("Graph_Graph_from_mc_statistical_error1122","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1122->SetMinimum(0.1508546);
   Graph_Graph_from_mc_statistical_error1122->SetMaximum(1.849145);
   Graph_Graph_from_mc_statistical_error1122->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1122->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1122);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
