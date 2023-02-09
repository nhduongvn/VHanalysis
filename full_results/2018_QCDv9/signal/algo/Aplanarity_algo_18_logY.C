void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Feb  9 09:44:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2183529,0.5487692,1.171633,2.549394);
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
   st->SetMaximum(178.7575);
   
   TH1F *st_stack_127 = new TH1F("st_stack_127","",50,0,1);
   st_stack_127->SetMinimum(6.149562);
   st_stack_127->SetMaximum(223.5278);
   st_stack_127->SetDirectory(0);
   st_stack_127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_127->SetLineColor(ci);
   st_stack_127->GetXaxis()->SetTitle("Aplanarity");
   st_stack_127->GetXaxis()->SetRange(1,50);
   st_stack_127->GetXaxis()->SetLabelFont(42);
   st_stack_127->GetXaxis()->SetLabelSize(0.035);
   st_stack_127->GetXaxis()->SetTitleSize(0.035);
   st_stack_127->GetXaxis()->SetTitleFont(42);
   st_stack_127->GetYaxis()->SetTitle("Events/0.02");
   st_stack_127->GetYaxis()->SetLabelFont(42);
   st_stack_127->GetYaxis()->SetLabelSize(0.035);
   st_stack_127->GetYaxis()->SetTitleSize(0.037);
   st_stack_127->GetYaxis()->SetTitleOffset(0);
   st_stack_127->GetYaxis()->SetTitleFont(42);
   st_stack_127->GetZaxis()->SetLabelFont(42);
   st_stack_127->GetZaxis()->SetLabelSize(0.035);
   st_stack_127->GetZaxis()->SetTitleSize(0.035);
   st_stack_127->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_127);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1.394197);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,1.183118);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.8167786);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.4853912);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.3773101);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.267169);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.2215725);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.1527547);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.07942388);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.07383928);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.04597764);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.03738176);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.03128509);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.02419579);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.01101179);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.01442039);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.004594452);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(18,0.006165558);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,0.002358174);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(20,0.002452157);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.07446262);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.05808992);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.04761561);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.03699948);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.03191454);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.02847538);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.02596091);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.02070665);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.01434779);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.01402223);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.01127908);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.01060293);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.009095453);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.008249255);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.005548671);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.006059937);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.003257045);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(18,0.003646284);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,0.002358174);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(20,0.002452157);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(2134);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.3933779);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.3170365);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.2424889);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.155044);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.09811559);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.07562628);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.05242395);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.03659631);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.02614621);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.01702738);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.01215444);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.008749401);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.00590403);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.002345762);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.002872882);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.0006575123);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,0.001199761);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.0003400733);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.01205669);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.01060278);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.009782832);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.007401671);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.005924333);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.005198697);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.004314029);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.003700866);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.00305634);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.003014331);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.002095704);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.003073719);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.001401831);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.0008879605);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.001025046);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0004649783);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,0.0006992376);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.0003400733);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(4285);

   ci = TColor::GetColor("#00cc00");
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
