#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_all_logY()
{
//=========Macro generated from canvas: H_pt_algo_all/H_pt_algo_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_all = new TCanvas("H_pt_algo_all", "H_pt_algo_all",0,0,600,600);
   H_pt_algo_all->SetHighLightColor(2);
   H_pt_algo_all->Range(37.97653,-4.219051,1705.96,-0.372897);
   H_pt_algo_all->SetFillColor(0);
   H_pt_algo_all->SetFillStyle(4000);
   H_pt_algo_all->SetBorderMode(0);
   H_pt_algo_all->SetBorderSize(2);
   H_pt_algo_all->SetLogy();
   H_pt_algo_all->SetLeftMargin(0.15709);
   H_pt_algo_all->SetRightMargin(0.1234783);
   H_pt_algo_all->SetBottomMargin(0.12);
   H_pt_algo_all->SetFrameFillStyle(1000);
   H_pt_algo_all->SetFrameBorderMode(0);
   H_pt_algo_all->SetFrameFillStyle(1000);
   H_pt_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_80 = new TH1F("st_stack_80","",40,0,2000);
   st_stack_80->SetMinimum(48.91773);
   st_stack_80->SetMaximum(0.1747783);
   st_stack_80->SetDirectory(0);
   st_stack_80->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_80->SetLineColor(ci);
   st_stack_80->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_80->GetXaxis()->SetRange(7,30);
   st_stack_80->GetXaxis()->SetLabelFont(42);
   st_stack_80->GetXaxis()->SetTitleOffset(1);
   st_stack_80->GetXaxis()->SetTitleFont(42);
   st_stack_80->GetYaxis()->SetTitle("Event/50.0");
   st_stack_80->GetYaxis()->SetLabelFont(42);
   st_stack_80->GetYaxis()->SetTitleSize(0.037);
   st_stack_80->GetYaxis()->SetTitleFont(42);
   st_stack_80->GetZaxis()->SetLabelFont(42);
   st_stack_80->GetZaxis()->SetTitleOffset(1);
   st_stack_80->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_80);
   
   
   TH1D *VbbHcc_algo_H_pt_all_stack_1 = new TH1D("VbbHcc_algo_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(1,0.04413178);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(2,0.3543623);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(3,0.8576825);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(4,0.7852838);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(5,0.5935065);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(6,0.3792088);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(7,0.2004221);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(8,0.1570381);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(9,0.0642271);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(10,0.02298993);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(11,0.01185889);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(12,0.008482563);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(13,0.006993585);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(14,0.003969347);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(16,0.009057255);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(18,0.002103186);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(1,0.008687881);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(2,0.02518901);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(3,0.0405515);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(4,0.03797277);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(5,0.04379816);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(6,0.02738173);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(7,0.01905814);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(8,0.01718907);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(9,0.01163195);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(10,0.006382405);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(11,0.004924858);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(12,0.003916363);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(13,0.003551367);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(14,0.002292383);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(16,0.005623524);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(18,0.002103186);
   VbbHcc_algo_H_pt_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_2 = new TH1D("VbbHcc_algo_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(1,0.01142317);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(2,0.08032919);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(3,0.3024811);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(4,0.3634374);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(5,0.2367937);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(6,0.1282705);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(7,0.05593757);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(8,0.03005564);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(9,0.01294651);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(10,0.0040454);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(11,0.001692163);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(12,0.0002933127);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(13,0.0003734607);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(1,0.001632378);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(2,0.004413106);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(3,0.008509474);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(4,0.009763838);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(5,0.00760992);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(6,0.00552535);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(7,0.004118868);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(8,0.002745189);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(9,0.001762399);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(10,0.0009746258);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(11,0.0006146982);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(12,0.0002933127);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(13,0.0002642584);
   VbbHcc_algo_H_pt_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_algo_all->Modified();
   H_pt_algo_all->cd();
   H_pt_algo_all->SetSelected(H_pt_algo_all);
}
