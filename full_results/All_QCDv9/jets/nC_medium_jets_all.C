#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all()
{
//=========Macro generated from canvas: nC_medium_jets_all/nC_medium_jets_all
//=========  (Mon Dec 12 10:49:49 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all = new TCanvas("nC_medium_jets_all", "nC_medium_jets_all",0,0,600,600);
   nC_medium_jets_all->SetHighLightColor(2);
   nC_medium_jets_all->Range(-2.683529,-3.852931e+10,11.21633,2.825483e+11);
   nC_medium_jets_all->SetFillColor(0);
   nC_medium_jets_all->SetFillStyle(4000);
   nC_medium_jets_all->SetBorderMode(0);
   nC_medium_jets_all->SetBorderSize(2);
   nC_medium_jets_all->SetLeftMargin(0.15709);
   nC_medium_jets_all->SetRightMargin(0.1234783);
   nC_medium_jets_all->SetBottomMargin(0.12);
   nC_medium_jets_all->SetFrameFillStyle(1000);
   nC_medium_jets_all->SetFrameBorderMode(0);
   nC_medium_jets_all->SetFrameFillStyle(1000);
   nC_medium_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.504405e+11);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",10,-0.5,9.5);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(2.504405e+11);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_24->GetXaxis()->SetRange(1,10);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/1.0");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_1 = new TH1D("VbbHcc_jets_nC_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(1,1.668774e+11);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(2,9.810865e+10);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(3,2.282313e+10);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(4,2.770929e+09);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(5,2.20644e+08);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(6,1.451337e+07);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(7,898862.3);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(8,54586.31);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(9,2642.748);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(10,621.3412);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(11,1.919604);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(1,1.604421e+07);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(2,1.192384e+07);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(3,5518992);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(4,1806877);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(5,456321);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(6,107141.7);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(7,22376.32);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(8,5133.281);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(9,373.4975);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(10,368.5548);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(11,1.124011);
   VbbHcc_jets_nC_medium_all_stack_1->SetEntries(6.271464e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nC_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_2 = new TH1D("VbbHcc_jets_nC_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(1,1.986433e+07);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(2,1.600458e+07);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(3,5700850);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(4,1211511);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(5,179846);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(6,20982.48);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(7,2055.329);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(8,166.4888);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(9,18.58979);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(10,0.8810516);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(11,-0.01366146);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(1,1604.085);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(2,1547.314);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(3,1000.576);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(4,501.5092);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(5,205.3568);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(6,72.5599);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(7,22.66098);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(8,6.24578);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(9,2.161935);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(10,0.2336202);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(11,0.03982061);
   VbbHcc_jets_nC_medium_all_stack_2->SetEntries(6.217747e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_nC_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_2,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_3 = new TH1D("VbbHcc_jets_nC_medium_all_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(1,3.505852e+07);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(2,4.60239e+07);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(3,2.695289e+07);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(4,9297865);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(5,2122831);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(6,347636.7);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(7,44224.79);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(8,4718.902);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(9,455.8399);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(10,39.17334);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinContent(11,2.911031);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(1,1593.239);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(2,1880.559);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(3,1472.918);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(4,879.1192);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(5,424.3931);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(6,172.0675);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(7,62.17603);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(8,19.79248);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(9,6.230949);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(10,1.763129);
   VbbHcc_jets_nC_medium_all_stack_3->SetBinError(11,0.4750395);
   VbbHcc_jets_nC_medium_all_stack_3->SetEntries(1.878746e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_nC_medium_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_3->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_3,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_4 = new TH1D("VbbHcc_jets_nC_medium_all_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinContent(1,5667562);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinContent(2,6846438);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinContent(3,3448277);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinContent(4,923642.2);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinContent(5,146038);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinContent(6,15229.64);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinContent(7,1177.593);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinContent(8,74.37913);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinContent(9,3.991216);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinContent(10,0.3007987);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinError(1,1737.178);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinError(2,1887.564);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinError(3,1327.122);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinError(4,681.3707);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinError(5,271.7138);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinError(6,84.86005);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinError(7,23.41639);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinError(8,5.827233);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinError(9,1.367777);
   VbbHcc_jets_nC_medium_all_stack_4->SetBinError(10,0.3007987);
   VbbHcc_jets_nC_medium_all_stack_4->SetEntries(3.985608e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_nC_medium_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_4->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_4,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_5 = new TH1D("VbbHcc_jets_nC_medium_all_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinContent(1,1.221623e+07);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinContent(2,1.699386e+07);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinContent(3,9110505);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinContent(4,2439043);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinContent(5,374866.2);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinContent(6,38155.54);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinContent(7,2996.509);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinContent(8,216.9774);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinContent(9,10.33303);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinContent(10,1.437938);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinError(1,5060.527);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinError(2,5891.108);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinError(3,4260.476);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinError(4,2198.866);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinError(5,842.1598);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinError(6,260.3964);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinError(7,75.45548);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinError(8,19.19976);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinError(9,3.920116);
   VbbHcc_jets_nC_medium_all_stack_5->SetBinError(10,1.096058);
   VbbHcc_jets_nC_medium_all_stack_5->SetEntries(2.697091e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_nC_medium_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_5->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_5,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_6 = new TH1D("VbbHcc_jets_nC_medium_all_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinContent(1,6626447);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinContent(2,3635476);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinContent(3,953537.2);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinContent(4,147761.8);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinContent(5,15595.37);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinContent(6,1237.163);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinContent(7,87.84552);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinContent(8,4.478475);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinContent(9,0.3723497);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinError(1,1369.607);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinError(2,1007.476);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinError(3,513.1729);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinError(4,197.987);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinError(5,66.40944);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinError(6,17.88562);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinError(7,4.557032);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinError(8,1.003451);
   VbbHcc_jets_nC_medium_all_stack_6->SetBinError(9,0.2257038);
   VbbHcc_jets_nC_medium_all_stack_6->SetEntries(6.001887e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_nC_medium_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_6->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_6,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_7 = new TH1D("VbbHcc_jets_nC_medium_all_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinContent(1,2392575);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinContent(2,1290104);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinContent(3,353740.4);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinContent(4,60141.67);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinContent(5,6929.749);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinContent(6,589.6551);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinContent(7,36.34975);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinContent(8,2.473137);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinContent(9,0.5182838);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinError(1,739.1729);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinError(2,537.2598);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinError(3,280.065);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinError(4,115.9474);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinError(5,38.12881);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinError(6,10.77985);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinError(7,2.568493);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinError(8,0.6720275);
   VbbHcc_jets_nC_medium_all_stack_7->SetBinError(9,0.3361546);
   VbbHcc_jets_nC_medium_all_stack_7->SetEntries(2.788188e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_nC_medium_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_7->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_7,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_8 = new TH1D("VbbHcc_jets_nC_medium_all_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinContent(1,1067400);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinContent(2,550165.4);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinContent(3,159322.3);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinContent(4,27792.79);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinContent(5,3243.318);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinContent(6,254.5428);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinContent(7,17.36601);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinContent(8,1.875645);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinError(1,600.5975);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinError(2,430.0097);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinError(3,232.2817);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinError(4,95.84558);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinError(5,32.65554);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinError(6,9.04511);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinError(7,2.407804);
   VbbHcc_jets_nC_medium_all_stack_8->SetBinError(8,0.7817888);
   VbbHcc_jets_nC_medium_all_stack_8->SetEntries(6488151);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_nC_medium_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_8->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_8,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_9 = new TH1D("VbbHcc_jets_nC_medium_all_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinContent(1,24587.91);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinContent(2,20265.67);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinContent(3,7718.627);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinContent(4,1695.652);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinContent(5,240.6415);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinContent(6,26.36456);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinContent(7,2.753178);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinContent(8,0.2461483);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinContent(9,0.01384257);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinError(1,7.976073);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinError(2,7.074846);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinError(3,4.315529);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinError(4,2.004027);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinError(5,0.7275023);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinError(6,0.2384982);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinError(7,0.07544964);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinError(8,0.02278571);
   VbbHcc_jets_nC_medium_all_stack_9->SetBinError(9,0.005110431);
   VbbHcc_jets_nC_medium_all_stack_9->SetEntries(2.909576e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_nC_medium_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_9->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_9,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_10 = new TH1D("VbbHcc_jets_nC_medium_all_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinContent(1,2268);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinContent(2,2818.867);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinContent(3,1530.91);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinContent(4,467.219);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinContent(5,88.92365);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinContent(6,12.00657);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinContent(7,1.254725);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinContent(8,0.117126);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinContent(9,0.007918788);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinError(1,1.081521);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinError(2,1.203821);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinError(3,0.8855389);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinError(4,0.4881299);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinError(5,0.2122491);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinError(6,0.07764645);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinError(7,0.02498302);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinError(8,0.007644469);
   VbbHcc_jets_nC_medium_all_stack_10->SetBinError(9,0.001951954);
   VbbHcc_jets_nC_medium_all_stack_10->SetEntries(1.49329e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_nC_medium_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_10->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_10,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_11 = new TH1D("VbbHcc_jets_nC_medium_all_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinContent(1,699.222);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinContent(2,969.1288);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinContent(3,565.4291);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinContent(4,154.4792);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinContent(5,20.78928);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinContent(6,1.246013);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinContent(7,0.04764504);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinContent(8,0.004306899);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinError(1,1.251192);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinError(2,1.456204);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinError(3,1.107024);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinError(4,0.5768329);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinError(5,0.2115735);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinError(6,0.05126447);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinError(7,0.009072061);
   VbbHcc_jets_nC_medium_all_stack_11->SetBinError(8,0.002618211);
   VbbHcc_jets_nC_medium_all_stack_11->SetEntries(1454659);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_11->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_11,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_12 = new TH1D("VbbHcc_jets_nC_medium_all_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinContent(1,58.87113);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinContent(2,128.7945);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinContent(3,101.2611);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinContent(4,37.39948);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinContent(5,6.931483);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinContent(6,0.5109019);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinContent(7,0.01269892);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinError(1,0.1254541);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinError(2,0.1863992);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinError(3,0.1653375);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinError(4,0.1001116);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinError(5,0.04284537);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinError(6,0.01144543);
   VbbHcc_jets_nC_medium_all_stack_12->SetBinError(7,0.001746743);
   VbbHcc_jets_nC_medium_all_stack_12->SetEntries(1455030);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_12->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all->Modified();
   nC_medium_jets_all->cd();
   nC_medium_jets_all->SetSelected(nC_medium_jets_all);
}
