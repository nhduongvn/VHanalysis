#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_18_logY()
{
//=========Macro generated from canvas: H_pt_algo_18/H_pt_algo_18
//=========  (Fri Mar 10 11:27:13 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_18 = new TCanvas("H_pt_algo_18", "H_pt_algo_18",0,0,600,600);
   H_pt_algo_18->SetHighLightColor(2);
   H_pt_algo_18->Range(37.97653,-0.2735664,1705.96,0.8943749);
   H_pt_algo_18->SetFillColor(0);
   H_pt_algo_18->SetFillStyle(4000);
   H_pt_algo_18->SetBorderMode(0);
   H_pt_algo_18->SetBorderSize(2);
   H_pt_algo_18->SetLogy();
   H_pt_algo_18->SetLeftMargin(0.15709);
   H_pt_algo_18->SetRightMargin(0.1234783);
   H_pt_algo_18->SetBottomMargin(0.12);
   H_pt_algo_18->SetFrameFillStyle(1000);
   H_pt_algo_18->SetFrameBorderMode(0);
   H_pt_algo_18->SetFrameFillStyle(1000);
   H_pt_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(5.23859);
   
   TH1F *st_stack_79 = new TH1F("st_stack_79","",40,0,2000);
   st_stack_79->SetMinimum(0.7355066);
   st_stack_79->SetMaximum(5.992123);
   st_stack_79->SetDirectory(0);
   st_stack_79->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_79->SetLineColor(ci);
   st_stack_79->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_79->GetXaxis()->SetRange(7,30);
   st_stack_79->GetXaxis()->SetLabelFont(42);
   st_stack_79->GetXaxis()->SetTitleOffset(1);
   st_stack_79->GetXaxis()->SetTitleFont(42);
   st_stack_79->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_79->GetYaxis()->SetLabelFont(42);
   st_stack_79->GetYaxis()->SetTitleSize(0.037);
   st_stack_79->GetYaxis()->SetTitleFont(42);
   st_stack_79->GetZaxis()->SetLabelFont(42);
   st_stack_79->GetZaxis()->SetTitleOffset(1);
   st_stack_79->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_79);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.6674166);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,3.02742);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,4.348029);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,3.754694);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,2.547446);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,1.554419);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.828026);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.5697494);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.2704674);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.1802147);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.09703528);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.04164337);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.01314638);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(14,0.01575646);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(15,0.003274283);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(16,0.0199616);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(17,0.006509618);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(18,0.008335374);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(23,0.001884475);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(24,0.002452157);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.04279378);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.09288906);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.1106165);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.109677);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.09647608);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.0714636);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.04763986);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.03954181);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.02763411);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.02148822);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.01607424);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.01076357);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.005631651);
   VbbHcc_algo_H_pt_stack_1->SetBinError(14,0.00648023);
   VbbHcc_algo_H_pt_stack_1->SetBinError(15,0.002377477);
   VbbHcc_algo_H_pt_stack_1->SetBinError(16,0.008815276);
   VbbHcc_algo_H_pt_stack_1->SetBinError(17,0.004609962);
   VbbHcc_algo_H_pt_stack_1->SetBinError(18,0.004853426);
   VbbHcc_algo_H_pt_stack_1->SetBinError(23,0.001884475);
   VbbHcc_algo_H_pt_stack_1->SetBinError(24,0.002452157);
   VbbHcc_algo_H_pt_stack_1->SetEntries(7188);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.1657715);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.7575005);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,1.488318);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,1.602056);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,1.059659);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.634242);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.3495211);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.1886607);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.08569913);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.03617318);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.02021222);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,0.008679312);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,0.003590583);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(14,0.002421084);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(15,0.001605543);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(16,0.0009481747);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(17,0.001090087);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(18,0.0003035629);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(19,0.0003240891);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(21,0.0003334233);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.007891341);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.01695433);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.02371515);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.02494958);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.01983233);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.01537066);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.01169469);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.008946825);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.00563496);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.003587942);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.002633895);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,0.001776615);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,0.001145643);
   VbbHcc_algo_H_pt_stack_2->SetBinError(14,0.0009311833);
   VbbHcc_algo_H_pt_stack_2->SetBinError(15,0.0008047249);
   VbbHcc_algo_H_pt_stack_2->SetBinError(16,0.000556526);
   VbbHcc_algo_H_pt_stack_2->SetBinError(17,0.0006567672);
   VbbHcc_algo_H_pt_stack_2->SetBinError(18,0.0003035629);
   VbbHcc_algo_H_pt_stack_2->SetBinError(19,0.0003240891);
   VbbHcc_algo_H_pt_stack_2->SetBinError(21,0.0003334233);
   VbbHcc_algo_H_pt_stack_2->SetEntries(18991);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_algo_18->Modified();
   H_pt_algo_18->cd();
   H_pt_algo_18->SetSelected(H_pt_algo_18);
}
