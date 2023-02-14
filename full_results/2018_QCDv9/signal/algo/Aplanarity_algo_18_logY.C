#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Tue Feb 14 10:43:07 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2183529,0.5516869,1.171633,2.538195);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15709);
   Aplanarity_algo_18->SetRightMargin(0.1234783);
   Aplanarity_algo_18->SetBottomMargin(0.12);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(175.0303);
   
   TH1F *st_stack_127 = new TH1F("st_stack_127","",50,0,1);
   st_stack_127->SetMinimum(6.166914);
   st_stack_127->SetMaximum(218.5468);
   st_stack_127->SetDirectory(0);
   st_stack_127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_127->SetLineColor(ci);
   st_stack_127->GetXaxis()->SetTitle("Aplanarity");
   st_stack_127->GetXaxis()->SetRange(1,50);
   st_stack_127->GetXaxis()->SetLabelFont(42);
   st_stack_127->GetXaxis()->SetTitleOffset(1);
   st_stack_127->GetXaxis()->SetTitleFont(42);
   st_stack_127->GetYaxis()->SetTitle("Events/0.02");
   st_stack_127->GetYaxis()->SetLabelFont(42);
   st_stack_127->GetYaxis()->SetTitleSize(0.037);
   st_stack_127->GetYaxis()->SetTitleFont(42);
   st_stack_127->GetZaxis()->SetLabelFont(42);
   st_stack_127->GetZaxis()->SetTitleOffset(1);
   st_stack_127->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_127);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1.364935);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,1.174686);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.8023722);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.4859648);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.3645109);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.2715867);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.2215725);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.1527078);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.07942388);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.07125658);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.04597764);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.03738176);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.03128509);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.02206266);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.01101179);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.01442039);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.004594452);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(18,0.006165558);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,0.002358174);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(20,0.002452157);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.07391657);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.05791814);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.04711862);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.03680421);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.0313891);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.02866015);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.02596091);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.02070104);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.01434779);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.01378233);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.01127908);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.01060293);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.009095453);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.007968685);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.005548671);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.006059937);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.003257045);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(18,0.003646284);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,0.002358174);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(20,0.002452157);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(2101);

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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.3853674);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.3127702);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.241246);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.1537319);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.0976274);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.07516142);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.05153839);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.03634051);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.02583057);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.01702738);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.01147642);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.008749401);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.00590403);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.002345762);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.002872882);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.0003240891);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,0.001199761);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.0003400733);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.01195178);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.01051785);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.009767405);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.007369399);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.005907659);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.005178755);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.004273621);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.003685555);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.003039998);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.003014331);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.002040079);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.003073719);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.001401831);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.0008879605);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.001025046);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0003240891);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,0.0006992376);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.0003400733);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(4230);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
