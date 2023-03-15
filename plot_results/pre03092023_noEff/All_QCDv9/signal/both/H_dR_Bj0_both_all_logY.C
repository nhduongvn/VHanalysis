#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_all/H_dR_Bj0_both_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_all = new TCanvas("H_dR_Bj0_both_all", "H_dR_Bj0_both_all",0,0,600,600);
   H_dR_Bj0_both_all->SetHighLightColor(2);
   H_dR_Bj0_both_all->Range(-1.310117,-3.052757,7.029799,0.7933966);
   H_dR_Bj0_both_all->SetFillColor(0);
   H_dR_Bj0_both_all->SetFillStyle(4000);
   H_dR_Bj0_both_all->SetBorderMode(0);
   H_dR_Bj0_both_all->SetBorderSize(2);
   H_dR_Bj0_both_all->SetLogy();
   H_dR_Bj0_both_all->SetLeftMargin(0.15709);
   H_dR_Bj0_both_all->SetRightMargin(0.1234783);
   H_dR_Bj0_both_all->SetBottomMargin(0.12);
   H_dR_Bj0_both_all->SetFrameFillStyle(1000);
   H_dR_Bj0_both_all->SetFrameBorderMode(0);
   H_dR_Bj0_both_all->SetFrameFillStyle(1000);
   H_dR_Bj0_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_172 = new TH1F("st_stack_172","",30,0,6);
   st_stack_172->SetMinimum(13.71218);
   st_stack_172->SetMaximum(2.563192);
   st_stack_172->SetDirectory(0);
   st_stack_172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_172->SetLineColor(ci);
   st_stack_172->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_172->GetXaxis()->SetRange(1,30);
   st_stack_172->GetXaxis()->SetLabelFont(42);
   st_stack_172->GetXaxis()->SetTitleOffset(1);
   st_stack_172->GetXaxis()->SetTitleFont(42);
   st_stack_172->GetYaxis()->SetTitle("Event/0.2");
   st_stack_172->GetYaxis()->SetLabelFont(42);
   st_stack_172->GetYaxis()->SetTitleSize(0.037);
   st_stack_172->GetYaxis()->SetTitleFont(42);
   st_stack_172->GetZaxis()->SetLabelFont(42);
   st_stack_172->GetZaxis()->SetTitleOffset(1);
   st_stack_172->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_172);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(1,0.3184434);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(2,1.635024);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(3,2.026029);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(4,1.78142);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(5,1.316176);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(6,0.9693467);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(7,0.697025);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(8,0.5003384);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(9,0.4644943);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(10,0.3434277);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(11,0.2891685);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(12,0.2800269);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(13,0.2362212);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(14,0.2238882);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(15,0.2096715);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(16,0.1695952);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(17,0.09335646);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(18,0.07306618);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(19,0.05692819);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(20,0.03998625);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(21,0.01056368);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(22,0.01248998);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(23,0.01007382);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(24,0.005564957);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(25,0.01137699);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(26,0.003039293);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(27,0.001602849);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(1,0.02176358);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(2,0.04959613);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(3,0.05512277);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(4,0.05211603);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(5,0.04466604);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(6,0.0380672);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(7,0.03243265);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(8,0.02753954);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(9,0.02665914);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(10,0.02292971);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(11,0.02071956);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(12,0.02070051);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(13,0.01897806);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(14,0.01846468);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(15,0.0178566);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(16,0.01634507);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(17,0.01173207);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(18,0.01046703);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(19,0.009362917);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(20,0.007907841);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(21,0.004057663);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(22,0.004491689);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(23,0.003890277);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(24,0.002488724);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(25,0.004351611);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(26,0.002224722);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(27,0.001602849);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(1,0.1251798);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(2,0.6619208);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(3,0.8484352);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(4,0.7522027);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(5,0.5848274);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(6,0.4113765);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(7,0.2992561);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(8,0.2158838);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(9,0.1664793);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(10,0.1399606);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(11,0.1167627);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(12,0.1154005);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(13,0.09773034);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(14,0.09513474);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(15,0.08188262);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(16,0.07624118);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(17,0.05027399);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(18,0.03185212);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(19,0.02284061);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(20,0.0188612);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(21,0.009913801);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(22,0.006908699);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(23,0.005967498);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(24,0.002979897);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(25,0.002857698);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(26,0.002370998);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(27,0.001071578);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(30,0.000251627);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(31,0.0001462194);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(1,0.00500952);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(2,0.011435);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(3,0.01296326);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(4,0.01222821);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(5,0.01078184);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(6,0.009051229);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(7,0.007729748);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(8,0.006554857);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(9,0.005735229);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(10,0.005260444);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(11,0.004828354);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(12,0.004778236);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(13,0.004424417);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(14,0.004337762);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(15,0.004039045);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(16,0.003862425);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(17,0.003159988);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(18,0.002515547);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(19,0.002099137);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(20,0.001927882);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(21,0.001391503);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(22,0.00122699);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(23,0.001093958);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(24,0.0007640054);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(25,0.0007784877);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(26,0.0006741402);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(27,0.0004869275);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(30,0.000251627);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(31,0.0001462194);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_1","ZHcc","F");

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
   H_dR_Bj0_both_all->Modified();
   H_dR_Bj0_both_all->cd();
   H_dR_Bj0_both_all->SetSelected(H_dR_Bj0_both_all);
}
