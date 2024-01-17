#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_18/Aplanarity_tagOnly_18
//=========  (Wed Jan 10 10:25:21 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_18 = new TCanvas("Aplanarity_tagOnly_18", "Aplanarity_tagOnly_18",0,0,600,600);
   Aplanarity_tagOnly_18->SetHighLightColor(2);
   Aplanarity_tagOnly_18->Range(0,0,1,1);
   Aplanarity_tagOnly_18->SetFillColor(0);
   Aplanarity_tagOnly_18->SetFillStyle(4000);
   Aplanarity_tagOnly_18->SetBorderMode(0);
   Aplanarity_tagOnly_18->SetBorderSize(2);
   Aplanarity_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6088.286,1.052419,6082207);
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
   st->SetMaximum(5473378);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",50,0,1);
   st_stack_48->SetMinimum(0.01);
   st_stack_48->SetMaximum(5473378);
   st_stack_48->SetDirectory(nullptr);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->SetLineWidth(0);
   st_stack_48->GetXaxis()->SetRange(1,50);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.02");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetLabelSize(0.05);
   st_stack_48->GetYaxis()->SetTitleSize(0.057);
   st_stack_48->GetYaxis()->SetTitleOffset(1.2);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VH_tagOnly_Aplanarity_stack_1 = new TH1D("VH_tagOnly_Aplanarity_stack_1","",50,0,1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,1644927);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,196614.6);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,45937.38);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,16822.44);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,5742.708);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,3295.781);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,1085.457);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,5563.333);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,1092.511);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,273.0991);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,118.9962);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,58.84893);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,642.7048);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,15.55874);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,40.03325);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.8367352);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,22.59311);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,19822.54);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,7700.368);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,3002.095);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,2037.316);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,739.9831);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,797.0836);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,132.4644);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,4360.162);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,601.7992);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,81.89497);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,32.34436);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,22.77053);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,596.0526);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,11.60233);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,17.69472);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(16,0.8367352);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,15.50426);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(161801);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_2 = new TH1D("VH_tagOnly_Aplanarity_stack_2","",50,0,1);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,18558.44);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,2474.19);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,649.2729);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,240.3104);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,99.20363);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,41.50715);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,24.53203);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,16.32823);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,7.715771);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,3.743532);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,1.848495);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,1.775745);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.244613);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,1.004332);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.484838);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.4197096);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.5015009);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.1119433);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,64.94116);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,22.34776);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,12.70599);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,7.039184);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,4.984442);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,2.745104);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,3.505912);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,1.953701);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,1.16085);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,0.8139131);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,0.6069618);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,0.5941471);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.473383);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.40617);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.3437533);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.3100532);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.327869);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.06854702);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(232639);

   ci = TColor::GetColor("#660066");
   VH_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_3 = new TH1D("VH_tagOnly_Aplanarity_stack_3","",50,0,1);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,326477.2);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,43587.06);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,11272.04);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,4049.749);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,1854.111);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,935.7449);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,523.0941);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,308.2358);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,178.1066);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,120.2367);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,77.59405);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,51.42254);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,28.67017);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,20.95694);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,11.42301);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,6.55964);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,5.434562);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,2.491065);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,1.291469);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.2163202);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.4899245);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.08011583);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,168.6813);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,61.30896);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,31.30323);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,18.40718);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,12.95434);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,8.749456);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,6.531414);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,5.069321);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,3.777712);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,3.125833);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,2.429985);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,2.071721);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,1.489501);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,3.454483);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,0.9594922);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,0.7037678);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,1.046891);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.446288);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.3220359);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.1249933);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.1813074);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(22,0.08011583);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(5428123);

   ci = TColor::GetColor("#cc00cc");
   VH_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_4 = new TH1D("VH_tagOnly_Aplanarity_stack_4","",50,0,1);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,13219.28);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,1449.691);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,348.2426);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,115.2568);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,54.68342);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,24.84366);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,16.4107);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,8.703532);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,5.911914);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,3.531907);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,1.833011);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,0.6866818);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.5133838);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.3316326);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.2635268);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.1074059);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(17,0.01402394);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(18,0.5873445);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(19,0.1304575);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,83.6802);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,30.63997);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,12.91501);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,6.25882);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,4.115245);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,2.828591);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,5.634637);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,1.365211);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,1.290186);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,1.414701);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,0.6567981);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,0.3209191);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.256002);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.1916047);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.1916714);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.1074059);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(17,0.01402394);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(18,0.49181);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(19,0.1304575);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(84631);

   ci = TColor::GetColor("#00cccc");
   VH_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_5 = new TH1D("VH_tagOnly_Aplanarity_stack_5","",50,0,1);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,6821.431);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,687.3165);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,226.1369);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,68.06675);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,30.02009);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,25.07826);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,10.35383);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,6.431338);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,0.776641);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,1.423766);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.4799919);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,1.033647);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.1529107);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(16,0.1282162);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(17,0.1333172);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(18,2.226874);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,103.4497);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,30.8697);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,25.63722);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,8.673188);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,8.199413);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,10.27654);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,3.591837);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,2.657752);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.3197422);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,0.4806355);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.3203882);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,0.5745775);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.1357888);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(16,0.1282162);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(17,0.1333172);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(18,2.226874);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(39865);

   ci = TColor::GetColor("#ff99cc");
   VH_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_6 = new TH1D("VH_tagOnly_Aplanarity_stack_6","",50,0,1);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,60.6727);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,6.057398);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,1.236607);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(5,1.151915);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(7,0.4870807);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,5.541149);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,1.714797);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,0.7319037);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(5,0.8146938);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(7,0.4870807);
   VH_tagOnly_Aplanarity_stack_6->SetEntries(144);

   ci = TColor::GetColor("#9933ff");
   VH_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_7 = new TH1D("VH_tagOnly_Aplanarity_stack_7","",50,0,1);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(1,174.2293);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(2,19.09509);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(3,4.801589);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(4,4.308844);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(1,8.532347);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(2,2.861942);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(3,1.424445);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(4,1.377796);
   VH_tagOnly_Aplanarity_stack_7->SetEntries(512);

   ci = TColor::GetColor("#3399ff");
   VH_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_8 = new TH1D("VH_tagOnly_Aplanarity_stack_8","",50,0,1);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(1,142.6886);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(2,10.29741);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(3,2.86492);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(4,0.3381559);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(1,7.376306);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(2,1.980225);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(3,1.027872);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(4,0.3381559);
   VH_tagOnly_Aplanarity_stack_8->SetEntries(430);

   ci = TColor::GetColor("#33ff99");
   VH_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_9 = new TH1D("VH_tagOnly_Aplanarity_stack_9","",50,0,1);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,70.76013);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,6.146969);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.367747);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.3999272);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.2150079);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.09100307);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.04473123);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.0468012);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01233224);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.02386457);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.01616485);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(14,0.004586441);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(16,0.005085333);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(18,0.002176348);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.4580256);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.1263261);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.05862977);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.03204471);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.02316239);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.01471307);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.01045199);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.0117433);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.005583951);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.007722951);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.006655393);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(14,0.003243387);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(16,0.003596338);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(18,0.002176348);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(32696);

   ci = TColor::GetColor("#cccc00");
   VH_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_10 = new TH1D("VH_tagOnly_Aplanarity_stack_10","",50,0,1);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,67.13697);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,7.683998);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,1.808514);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.5970723);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.290732);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.1113021);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.08644486);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.03998275);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.02484505);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.01623407);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.00749136);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.005718429);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.003688418);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.003797126);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.001063904);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0007848679);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0007848679);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0007148411);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.2219868);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.07507174);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.03636312);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.02093802);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.01455111);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.008974316);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.007952711);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.005416423);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.004267005);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.003382426);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.002345822);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.00197082);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.001651241);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.001699527);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0007969982);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0007848679);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0007848679);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0007148411);
   VH_tagOnly_Aplanarity_stack_10->SetEntries(107972);

   ci = TColor::GetColor("#0000cc");
   VH_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_11 = new TH1D("VH_tagOnly_Aplanarity_stack_11","",50,0,1);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(1,1.974806);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1574593);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.03231008);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.005149159);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(5,0.004248218);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001623734);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(7,0.00525871);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(8,0.003132481);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(1,0.07689065);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(2,0.01996789);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(3,0.008857366);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(4,0.0036432);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(5,0.003009041);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001623734);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(7,0.00373589);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(8,0.003132481);
   VH_tagOnly_Aplanarity_stack_11->SetEntries(903);

   ci = TColor::GetColor("#cc0000");
   VH_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_12 = new TH1D("VH_tagOnly_Aplanarity_stack_12","",50,0,1);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.9805894);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.09894524);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.02245398);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.006146334);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.002229413);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0007406657);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001490461);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(9,0.001061152);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(10,0.0002658739);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(12,0.0006439316);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(14,0.0006549438);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01911658);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(2,0.005832765);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(3,0.002774989);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001442313);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0009226276);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0005321741);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0006847317);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(9,0.0006205479);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(10,0.0002658739);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(12,0.0004556166);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(14,0.0004677797);
   VH_tagOnly_Aplanarity_stack_12->SetEntries(3336);

   ci = TColor::GetColor("#00cc00");
   VH_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Aplanarity__95 = new TH1D("VH_tagOnly_Aplanarity__95","",50,0,1);
   VH_tagOnly_Aplanarity__95->SetBinContent(0,2);
   VH_tagOnly_Aplanarity__95->SetBinContent(1,2463020);
   VH_tagOnly_Aplanarity__95->SetBinContent(2,320854);
   VH_tagOnly_Aplanarity__95->SetBinContent(3,83082);
   VH_tagOnly_Aplanarity__95->SetBinContent(4,27957);
   VH_tagOnly_Aplanarity__95->SetBinContent(5,11573);
   VH_tagOnly_Aplanarity__95->SetBinContent(6,5720);
   VH_tagOnly_Aplanarity__95->SetBinContent(7,3022);
   VH_tagOnly_Aplanarity__95->SetBinContent(8,1750);
   VH_tagOnly_Aplanarity__95->SetBinContent(9,1058);
   VH_tagOnly_Aplanarity__95->SetBinContent(10,697);
   VH_tagOnly_Aplanarity__95->SetBinContent(11,424);
   VH_tagOnly_Aplanarity__95->SetBinContent(12,281);
   VH_tagOnly_Aplanarity__95->SetBinContent(13,193);
   VH_tagOnly_Aplanarity__95->SetBinContent(14,80);
   VH_tagOnly_Aplanarity__95->SetBinContent(15,64);
   VH_tagOnly_Aplanarity__95->SetBinContent(16,43);
   VH_tagOnly_Aplanarity__95->SetBinContent(17,31);
   VH_tagOnly_Aplanarity__95->SetBinContent(18,12);
   VH_tagOnly_Aplanarity__95->SetBinContent(19,9);
   VH_tagOnly_Aplanarity__95->SetBinContent(20,1);
   VH_tagOnly_Aplanarity__95->SetBinContent(21,1);
   VH_tagOnly_Aplanarity__95->SetEntries(2919923);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__95->SetLineColor(ci);
   VH_tagOnly_Aplanarity__95->SetLineWidth(2);
   VH_tagOnly_Aplanarity__95->SetMarkerStyle(20);
   VH_tagOnly_Aplanarity__95->SetMarkerSize(1.2);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__95->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__95->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__95->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__95->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__95->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__95->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_Aplanarity_fx1095[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1095[50] = { 2010522, 244862.4, 58445.21, 21301.47, 7782.39, 4323.16, 1660.471, 5903.124, 1285.06, 402.0753, 200.7754, 113.7739, 673.1366, 38.01359, 52.20463, 8.057856, 28.6773,
   5.419403, 1.422711, 0.2163202, 0.4906393, 0.08011583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1095[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1095[50] = { 19823.81, 7700.768, 3002.423, 2037.44, 740.1705, 797.2076, 132.8407, 4360.166, 601.8136, 81.97227, 32.44942, 22.88176, 596.0547, 12.11477, 17.72508, 1.148711, 15.5436,
   2.324806, 0.3474578, 0.1249933, 0.1813088, 0.08011583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagOnly_Aplanarity_fx1095,Graph_from_VH_tagOnly_Aplanarity_fy1095,Graph_from_VH_tagOnly_Aplanarity_fex1095,Graph_from_VH_tagOnly_Aplanarity_fey1095);
   gre->SetName("Graph_from_VH_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_Aplanarity1095 = new TH1F("Graph_Graph_from_VH_tagOnly_Aplanarity1095","",100,0,1.1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetMinimum(0);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetMaximum(2233380);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_Aplanarity1095);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagOnly_18->cd();
  
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
   
   TH1D *data_mc_ratio__96 = new TH1D("data_mc_ratio__96","",50,0,1);
   data_mc_ratio__96->SetBinContent(1,1.225065);
   data_mc_ratio__96->SetBinContent(2,1.310344);
   data_mc_ratio__96->SetBinContent(3,1.421536);
   data_mc_ratio__96->SetBinContent(4,1.312444);
   data_mc_ratio__96->SetBinContent(5,1.487075);
   data_mc_ratio__96->SetBinContent(6,1.323106);
   data_mc_ratio__96->SetBinContent(7,1.819965);
   data_mc_ratio__96->SetBinContent(8,0.2964532);
   data_mc_ratio__96->SetBinContent(9,0.823308);
   data_mc_ratio__96->SetBinContent(10,1.733506);
   data_mc_ratio__96->SetBinContent(11,2.111813);
   data_mc_ratio__96->SetBinContent(12,2.469811);
   data_mc_ratio__96->SetBinContent(13,0.2867174);
   data_mc_ratio__96->SetBinContent(14,2.10451);
   data_mc_ratio__96->SetBinContent(15,1.225945);
   data_mc_ratio__96->SetBinContent(16,5.336407);
   data_mc_ratio__96->SetBinContent(17,1.080994);
   data_mc_ratio__96->SetBinContent(18,2.214266);
   data_mc_ratio__96->SetBinContent(19,6.325951);
   data_mc_ratio__96->SetBinContent(20,4.622777);
   data_mc_ratio__96->SetBinContent(21,2.038157);
   data_mc_ratio__96->SetBinError(1,0.000780594);
   data_mc_ratio__96->SetBinError(2,0.002313298);
   data_mc_ratio__96->SetBinError(3,0.00493179);
   data_mc_ratio__96->SetBinError(4,0.007849385);
   data_mc_ratio__96->SetBinError(5,0.01382324);
   data_mc_ratio__96->SetBinError(6,0.01749431);
   data_mc_ratio__96->SetBinError(7,0.0331067);
   data_mc_ratio__96->SetBinError(8,0.007086587);
   data_mc_ratio__96->SetBinError(9,0.02531159);
   data_mc_ratio__96->SetBinError(10,0.06566122);
   data_mc_ratio__96->SetBinError(11,0.1025587);
   data_mc_ratio__96->SetBinError(12,0.1473366);
   data_mc_ratio__96->SetBinError(13,0.02063837);
   data_mc_ratio__96->SetBinError(14,0.2352914);
   data_mc_ratio__96->SetBinError(15,0.1532431);
   data_mc_ratio__96->SetBinError(16,0.8137945);
   data_mc_ratio__96->SetBinError(17,0.1941523);
   data_mc_ratio__96->SetBinError(18,0.6392035);
   data_mc_ratio__96->SetBinError(19,2.10865);
   data_mc_ratio__96->SetBinError(20,4.622777);
   data_mc_ratio__96->SetBinError(21,2.038157);
   data_mc_ratio__96->SetMinimum(0.4);
   data_mc_ratio__96->SetMaximum(1.6);
   data_mc_ratio__96->SetEntries(40.62678);
   data_mc_ratio__96->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__96->SetLineColor(ci);
   data_mc_ratio__96->SetLineWidth(2);
   data_mc_ratio__96->SetMarkerStyle(20);
   data_mc_ratio__96->SetMarkerSize(1.2);
   data_mc_ratio__96->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__96->GetXaxis()->SetRange(1,50);
   data_mc_ratio__96->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__96->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__96->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__96->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__96->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__96->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__96->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1096[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1096[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1096[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1096[50] = { 0.009860034, 0.03144937, 0.05137159, 0.09564782, 0.09510839, 0.1844039, 0.08000184, 0.7386202, 0.4683156, 0.2038729, 0.1616205, 0.2011161, 0.8854884, 0.3186958, 0.3395309, 0.1425579, 0.5420175,
   0.4289782, 0.2442223, 0.577816, 0.3695358, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1096,Graph_from_mc_statistical_error_fy1096,Graph_from_mc_statistical_error_fex1096,Graph_from_mc_statistical_error_fey1096);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1096 = new TH1F("Graph_Graph_from_mc_statistical_error1096","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1096->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1096->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1096->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1096->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1096);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_18->cd();
   Aplanarity_tagOnly_18->Modified();
   Aplanarity_tagOnly_18->cd();
   Aplanarity_tagOnly_18->SetSelected(Aplanarity_tagOnly_18);
}
