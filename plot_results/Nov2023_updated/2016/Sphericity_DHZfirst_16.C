#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_16()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_16/Sphericity_DHZfirst_16
//=========  (Wed Jan 10 10:25:26 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_16 = new TCanvas("Sphericity_DHZfirst_16", "Sphericity_DHZfirst_16",0,0,600,600);
   Sphericity_DHZfirst_16->SetHighLightColor(2);
   Sphericity_DHZfirst_16->Range(0,0,1,1);
   Sphericity_DHZfirst_16->SetFillColor(0);
   Sphericity_DHZfirst_16->SetFillStyle(4000);
   Sphericity_DHZfirst_16->SetBorderMode(0);
   Sphericity_DHZfirst_16->SetBorderSize(2);
   Sphericity_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-312.7449,1.052419,312442.2);
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
   st->SetMaximum(281166.7);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",25,0,1);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(281166.7);
   st_stack_115->SetDirectory(nullptr);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->SetLineWidth(0);
   st_stack_115->GetXaxis()->SetRange(1,25);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.04");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VH_DHZfirst_Sphericity_stack_1 = new TH1D("VH_DHZfirst_Sphericity_stack_1","",25,0,1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,109712.5);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,108276.1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,57138.19);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,25789.49);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,14268.73);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,5431.296);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,3463.37);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,538.047);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,572.9451);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,339.1814);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,33.87787);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,28.20405);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,21.96082);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,20.51427);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(15,0.1737393);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(17,2.003909);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(18,20.11717);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,6323.873);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,5601.842);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,4478.554);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,2608.15);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,2128.855);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,937.831);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,1558.31);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,280.7943);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,390.764);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,295.2606);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,23.40109);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,23.92349);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,16.89097);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,18.31387);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(15,0.1737393);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(17,2.003909);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(18,20.11717);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(13350);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_1,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_2 = new TH1D("VH_DHZfirst_Sphericity_stack_2","",25,0,1);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,801.3984);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,802.8709);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,477.0241);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,247.9996);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,129.2359);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,63.30411);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,25.65152);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,9.832114);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,3.097462);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,1.831119);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,1.283253);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,0.6013093);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,1.429144);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.4991528);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(15,0.1967536);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.2144281);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.1816039);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(18,0.05315009);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(19,0.2925703);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,10.68078);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,10.75165);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,8.343872);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,6.172955);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,4.543261);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,3.317024);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,2.121196);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,1.21296);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,0.6015439);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.3792495);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,0.4965144);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.1596332);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.5625251);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.2894397);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(15,0.08365222);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.0907868);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.08581227);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(18,0.04315737);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(19,0.2828847);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(36655);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_2,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_3 = new TH1D("VH_DHZfirst_Sphericity_stack_3","",25,0,1);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,7925.749);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,8691.186);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,4805.92);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,2553.691);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,1325.256);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,648.7214);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,301.1739);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,141.3388);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,76.02217);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,39.58852);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,21.58314);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,15.00705);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,10.85722);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,5.805821);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,3.194218);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,2.583504);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,2.05195);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,1.462673);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,0.610829);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(20,0.2793108);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(21,0.1087846);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,23.36548);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,24.58889);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,18.28568);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,13.32173);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,9.591802);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,6.680895);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,4.530344);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,3.072976);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,2.235477);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,1.582611);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,1.160582);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,0.9638961);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,0.820573);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.5844107);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.4339489);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.3775276);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.3425029);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.2970972);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.1818537);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(20,0.1282048);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(21,0.07692978);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(401285);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_3,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_4 = new TH1D("VH_DHZfirst_Sphericity_stack_4","",25,0,1);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,675.8139);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,609.6664);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,346.0493);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,219.201);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,124.7345);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,60.37736);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,15.85231);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,2.129561);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,0.470115);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,0.2202834);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.07169879);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.4972354);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(13,0.1286801);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,23.0956);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,23.28774);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,16.17867);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,13.85517);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,10.36451);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,6.919609);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,3.26417);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,0.6185058);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.3168199);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,0.1212869);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.07169879);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.3253007);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(13,0.09290755);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(12460);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_4,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_5 = new TH1D("VH_DHZfirst_Sphericity_stack_5","",25,0,1);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,411.3115);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,357.4063);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,210.5674);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,103.6686);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,67.53815);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,29.43593);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,7.845173);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,0.5642698);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,1.571797);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,1.789701);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(11,6.263099);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(12,0.02976383);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(13,0.3658896);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(15,0.04511182);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(16,0.03837404);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(17,0.04356932);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(18,0.0002245513);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,28.95064);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,27.21657);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,21.98436);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,11.63587);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,11.33274);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,9.456672);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,2.156172);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,0.290195);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,1.094948);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,1.32299);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(11,6.216988);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(12,0.02976383);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(13,0.3656581);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(15,0.04511182);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(16,0.03837404);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(17,0.04356932);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(18,0.0002245513);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(8097);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_5,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_6 = new TH1D("VH_DHZfirst_Sphericity_stack_6","",25,0,1);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,4.386204);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,2.828423);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,1.03355);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(4,1.23516);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(5,0.799953);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(6,0.2840678);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(8,0.1962924);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,0.7894532);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.6303744);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.3923418);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(4,0.4164299);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(5,0.3314911);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(6,0.2009039);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(8,0.1619425);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(78);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_6,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_7 = new TH1D("VH_DHZfirst_Sphericity_stack_7","",25,0,1);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,15.39171);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,12.73765);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,6.548885);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,3.393307);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,1.553205);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,0.605229);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(7,0.3536937);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(8,0.1197326);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(9,0.1082963);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(13,0.1068191);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,1.345488);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,1.234093);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,0.873516);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,0.6367328);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.4320057);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.2711931);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(7,0.2043308);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(8,0.1197326);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(9,0.1082963);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(13,0.1068191);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(350);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_7,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_8 = new TH1D("VH_DHZfirst_Sphericity_stack_8","",25,0,1);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,11.70344);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,9.306507);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,6.251267);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,2.095011);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,1.359);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,1.767441);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.576);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,1.28196);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,0.7291798);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,0.6086335);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(118);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_8,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_9 = new TH1D("VH_DHZfirst_Sphericity_stack_9","",25,0,1);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,4.225674);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,4.143322);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,2.430165);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,1.703641);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,1.115978);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.4754446);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.1581752);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.03880002);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.006876164);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(10,0.004648611);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(11,0.001245432);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(13,0.002155405);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.07652477);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.07595764);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.05812984);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.04863511);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.03942743);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.02570284);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.01471104);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.00735297);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.003083966);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(10,0.002400383);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(11,0.001245432);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(13,0.001563902);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(10463);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_9,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_10 = new TH1D("VH_DHZfirst_Sphericity_stack_10","",25,0,1);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,1.793253);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,1.829562);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,1.039924);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.650654);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.3787203);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.1766763);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.05484117);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.02266699);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.007728493);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.002921955);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.00132048);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.001128058);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.0005954706);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.000442022);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(15,0.0003553988);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.02816462);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.02845377);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.02145284);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.01700426);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.01296143);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.0088405);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.004904062);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.003142049);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.001785661);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.001057574);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.0007644397);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.0006186721);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.0004738589);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.000442022);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(15,0.0003553988);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(13704);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_10,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_11 = new TH1D("VH_DHZfirst_Sphericity_stack_11","",25,0,1);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.1469899);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.1035619);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.09317674);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.05621243);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.02953862);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.02621838);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(8,0.002407828);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.02033224);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.01684189);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.01609202);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.01259433);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.008990536);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.008756494);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(8,0.002407828);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(167);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_11,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_12 = new TH1D("VH_DHZfirst_Sphericity_stack_12","",25,0,1);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.05181286);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.05379577);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.02712043);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.02010499);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.007802411);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.005786043);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.001527931);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.000370249);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(9,0.0003802122);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.00442967);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.004532178);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.00321802);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.002786422);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001719844);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.001496415);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.000764043);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.000370249);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(9,0.0003802122);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(452);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Sphericity__229 = new TH1D("VH_DHZfirst_Sphericity__229","",25,0,1);
   VH_DHZfirst_Sphericity__229->SetBinContent(1,126525);
   VH_DHZfirst_Sphericity__229->SetBinContent(2,116582);
   VH_DHZfirst_Sphericity__229->SetBinContent(3,63338);
   VH_DHZfirst_Sphericity__229->SetBinContent(4,33848);
   VH_DHZfirst_Sphericity__229->SetBinContent(5,16923);
   VH_DHZfirst_Sphericity__229->SetBinContent(6,7270);
   VH_DHZfirst_Sphericity__229->SetBinContent(7,2575);
   VH_DHZfirst_Sphericity__229->SetBinContent(8,893);
   VH_DHZfirst_Sphericity__229->SetBinContent(9,399);
   VH_DHZfirst_Sphericity__229->SetBinContent(10,208);
   VH_DHZfirst_Sphericity__229->SetBinContent(11,108);
   VH_DHZfirst_Sphericity__229->SetBinContent(12,66);
   VH_DHZfirst_Sphericity__229->SetBinContent(13,51);
   VH_DHZfirst_Sphericity__229->SetBinContent(14,24);
   VH_DHZfirst_Sphericity__229->SetBinContent(15,21);
   VH_DHZfirst_Sphericity__229->SetBinContent(16,19);
   VH_DHZfirst_Sphericity__229->SetBinContent(17,10);
   VH_DHZfirst_Sphericity__229->SetBinContent(18,4);
   VH_DHZfirst_Sphericity__229->SetBinContent(19,3);
   VH_DHZfirst_Sphericity__229->SetBinContent(20,2);
   VH_DHZfirst_Sphericity__229->SetBinContent(22,1);
   VH_DHZfirst_Sphericity__229->SetEntries(368894);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__229->SetLineColor(ci);
   VH_DHZfirst_Sphericity__229->SetLineWidth(2);
   VH_DHZfirst_Sphericity__229->SetMarkerStyle(20);
   VH_DHZfirst_Sphericity__229->SetMarkerSize(1.2);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Sphericity_fx1229[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1229[25] = { 119564.5, 118768.2, 62995.17, 28923.2, 15920.74, 6234.709, 3814.461, 692.292, 654.2299, 382.6186, 63.08163, 44.34054, 34.85133, 26.81969, 3.610178, 2.836306, 4.281032,
   21.63322, 0.9033992, 0.2793108, 0.1087846, 0, 0, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1229[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1229[25] = { 6324.035, 5602.021, 4478.682, 2608.254, 2128.937, 937.9339, 1558.323, 280.8146, 390.7725, 295.2681, 24.24583, 23.94566, 16.92478, 18.32548, 0.477001, 0.3901819, 2.035245,
   20.11941, 0.3362952, 0.1282048, 0.07692978, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1229,Graph_from_VH_DHZfirst_Sphericity_fy1229,Graph_from_VH_DHZfirst_Sphericity_fex1229,Graph_from_VH_DHZfirst_Sphericity_fey1229);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1229 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1229","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetMaximum(138477.3);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Sphericity1229);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Sphericity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_DHZfirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__230 = new TH1D("data_mc_ratio__230","",25,0,1);
   data_mc_ratio__230->SetBinContent(1,1.058216);
   data_mc_ratio__230->SetBinContent(2,0.9815926);
   data_mc_ratio__230->SetBinContent(3,1.005442);
   data_mc_ratio__230->SetBinContent(4,1.170271);
   data_mc_ratio__230->SetBinContent(5,1.062953);
   data_mc_ratio__230->SetBinContent(6,1.166053);
   data_mc_ratio__230->SetBinContent(7,0.6750626);
   data_mc_ratio__230->SetBinContent(8,1.289918);
   data_mc_ratio__230->SetBinContent(9,0.6098774);
   data_mc_ratio__230->SetBinContent(10,0.5436223);
   data_mc_ratio__230->SetBinContent(11,1.712067);
   data_mc_ratio__230->SetBinContent(12,1.48848);
   data_mc_ratio__230->SetBinContent(13,1.463359);
   data_mc_ratio__230->SetBinContent(14,0.8948651);
   data_mc_ratio__230->SetBinContent(15,5.816887);
   data_mc_ratio__230->SetBinContent(16,6.698853);
   data_mc_ratio__230->SetBinContent(17,2.335885);
   data_mc_ratio__230->SetBinContent(18,0.1849008);
   data_mc_ratio__230->SetBinContent(19,3.320791);
   data_mc_ratio__230->SetBinContent(20,7.160482);
   data_mc_ratio__230->SetBinError(1,0.002974994);
   data_mc_ratio__230->SetBinError(2,0.002874852);
   data_mc_ratio__230->SetBinError(3,0.003995075);
   data_mc_ratio__230->SetBinError(4,0.006360922);
   data_mc_ratio__230->SetBinError(5,0.008171005);
   data_mc_ratio__230->SetBinError(6,0.01367575);
   data_mc_ratio__230->SetBinError(7,0.01330318);
   data_mc_ratio__230->SetBinError(8,0.04316546);
   data_mc_ratio__230->SetBinError(9,0.03053206);
   data_mc_ratio__230->SetBinError(10,0.03769343);
   data_mc_ratio__230->SetBinError(11,0.1647438);
   data_mc_ratio__230->SetBinError(12,0.1832192);
   data_mc_ratio__230->SetBinError(13,0.2049112);
   data_mc_ratio__230->SetBinError(14,0.1826636);
   data_mc_ratio__230->SetBinError(15,1.269349);
   data_mc_ratio__230->SetBinError(16,1.536822);
   data_mc_ratio__230->SetBinError(17,0.7386718);
   data_mc_ratio__230->SetBinError(18,0.0924504);
   data_mc_ratio__230->SetBinError(19,1.91726);
   data_mc_ratio__230->SetBinError(20,5.063225);
   data_mc_ratio__230->SetMinimum(0.4);
   data_mc_ratio__230->SetMaximum(1.6);
   data_mc_ratio__230->SetEntries(31.94385);
   data_mc_ratio__230->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__230->SetLineColor(ci);
   data_mc_ratio__230->SetLineWidth(2);
   data_mc_ratio__230->SetMarkerStyle(20);
   data_mc_ratio__230->SetMarkerSize(1.2);
   data_mc_ratio__230->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__230->GetXaxis()->SetRange(1,25);
   data_mc_ratio__230->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__230->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__230->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__230->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__230->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__230->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__230->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1230[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1230[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1230[25] = { 0.05289226, 0.04716768, 0.07109564, 0.09017861, 0.133721, 0.1504375, 0.4085303, 0.4056303, 0.5973015, 0.7717035, 0.3843565, 0.5400398, 0.4856281, 0.6832847, 0.1321267, 0.1375669, 0.4754099,
   0.9300239, 0.3722554, 0.4590039, 0.7071751, 0, 0, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.06297847);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(2.116029);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_DHZfirst_16->cd();
   Sphericity_DHZfirst_16->Modified();
   Sphericity_DHZfirst_16->cd();
   Sphericity_DHZfirst_16->SetSelected(Sphericity_DHZfirst_16);
}
