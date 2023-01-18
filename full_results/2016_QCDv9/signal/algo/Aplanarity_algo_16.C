#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-0.1103241,1.171633,0.8090431);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15709);
   Aplanarity_algo_16->SetRightMargin(0.1234783);
   Aplanarity_algo_16->SetBottomMargin(0.12);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.7171064);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",50,0,1);
   st_stack_125->SetMinimum(0);
   st_stack_125->SetMaximum(0.7171064);
   st_stack_125->SetDirectory(0);
   st_stack_125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_125->SetLineColor(ci);
   st_stack_125->GetXaxis()->SetTitle("Aplanarity");
   st_stack_125->GetXaxis()->SetRange(1,50);
   st_stack_125->GetXaxis()->SetLabelFont(42);
   st_stack_125->GetXaxis()->SetTitleOffset(1);
   st_stack_125->GetXaxis()->SetTitleFont(42);
   st_stack_125->GetYaxis()->SetTitle("Events/0.02");
   st_stack_125->GetYaxis()->SetLabelFont(42);
   st_stack_125->GetYaxis()->SetTitleSize(0.037);
   st_stack_125->GetYaxis()->SetTitleFont(42);
   st_stack_125->GetZaxis()->SetLabelFont(42);
   st_stack_125->GetZaxis()->SetTitleOffset(1);
   st_stack_125->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_125);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.3631113);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.285106);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.2371235);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.1732839);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.1095328);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.1055971);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.06506821);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.04072314);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.03438639);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.03166086);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.01431935);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.01134728);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.009848461);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.00919824);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.003275389);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.001597611);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.00487749);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(20,0.001697469);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.0237629);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.02150507);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.01927274);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.01646246);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.0133663);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.01271948);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.01000128);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.007939228);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.007009362);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.00706742);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.005144596);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.004122563);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.003833093);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.003755618);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.002317471);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.001597611);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.002819772);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(20,0.001697469);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.1149597);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.08388844);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.0645781);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.04454702);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.02810489);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.02030179);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.01299003);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.01140531);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.007312848);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.005361114);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.002919362);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.004082577);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.001029084);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.001083906);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.0003431235);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.0001640314);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.0001937236);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,0.0001744784);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.004655979);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.0039953);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.003496528);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.002911546);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.002318104);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.001970308);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.00158625);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.001484362);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.001196038);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.001020175);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.0007634914);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.0008935726);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.0004403532);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.0004499659);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.0002452994);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0001640314);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.0001937236);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,0.0001744784);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(2298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
