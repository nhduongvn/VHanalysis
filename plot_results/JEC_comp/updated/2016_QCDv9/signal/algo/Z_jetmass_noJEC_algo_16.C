#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_algo_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_16/Z_jetmass_noJEC_algo_16
//=========  (Thu Mar 23 11:25:14 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_noJEC_algo_16 = new TCanvas("Z_jetmass_noJEC_algo_16", "Z_jetmass_noJEC_algo_16",0,0,600,600);
   Z_jetmass_noJEC_algo_16->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_16->Range(-65.50587,-0.01444102,351.4899,0.1059008);
   Z_jetmass_noJEC_algo_16->SetFillColor(0);
   Z_jetmass_noJEC_algo_16->SetFillStyle(4000);
   Z_jetmass_noJEC_algo_16->SetBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetBorderSize(2);
   Z_jetmass_noJEC_algo_16->SetLeftMargin(0.15709);
   Z_jetmass_noJEC_algo_16->SetRightMargin(0.1234783);
   Z_jetmass_noJEC_algo_16->SetBottomMargin(0.12);
   Z_jetmass_noJEC_algo_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.09386661);
   
   TH1F *st_stack_185 = new TH1F("st_stack_185","",150,0,300);
   st_stack_185->SetMinimum(0);
   st_stack_185->SetMaximum(0.09386661);
   st_stack_185->SetDirectory(0);
   st_stack_185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_185->SetLineColor(ci);
   st_stack_185->GetXaxis()->SetTitle("b-jet mass [GeV]");
   st_stack_185->GetXaxis()->SetRange(1,150);
   st_stack_185->GetXaxis()->SetLabelFont(42);
   st_stack_185->GetXaxis()->SetTitleOffset(1);
   st_stack_185->GetXaxis()->SetTitleFont(42);
   st_stack_185->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_185->GetYaxis()->SetLabelFont(42);
   st_stack_185->GetYaxis()->SetTitleSize(0.037);
   st_stack_185->GetYaxis()->SetTitleFont(42);
   st_stack_185->GetZaxis()->SetLabelFont(42);
   st_stack_185->GetZaxis()->SetTitleOffset(1);
   st_stack_185->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_185);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(3,0.006009757);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(4,0.02592275);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(5,0.06197133);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(6,0.04817733);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(7,0.05401429);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(8,0.05554345);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(9,0.02337662);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(10,0.02162445);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(11,0.01451002);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(12,0.01448222);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(13,0.007443631);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(14,0.002792918);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(15,0.008605182);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(16,0.0029041);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(17,0.006416396);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(20,0.005904281);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(21,0.002897276);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(3,0.004258949);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(4,0.008694134);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(5,0.01366835);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(6,0.01187504);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(7,0.01247366);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(8,0.01279138);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(9,0.008274809);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(10,0.008037859);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(11,0.006491383);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(12,0.006480868);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(13,0.004415831);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(14,0.002792918);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(15,0.004997785);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(16,0.0029041);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(17,0.004538557);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(20,0.004177378);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(21,0.002897276);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetEntries(126);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(3,0.0007547715);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(4,0.007109329);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(5,0.01402735);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(6,0.02122953);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(7,0.023895);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(8,0.009438298);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(9,0.01190394);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(10,0.007851943);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(11,0.004657877);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(12,0.002749786);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(13,0.002392011);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(14,0.001974496);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(15,0.001329295);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(16,0.0007877313);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(17,0.001088994);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(18,0.001061443);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(19,0.0003781358);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(21,0.0003751166);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(22,0.0008195947);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(24,0.0003835164);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(3,0.0005339694);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(4,0.001657214);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(5,0.00229756);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(6,0.002847219);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(7,0.003027287);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(8,0.001888395);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(9,0.002122172);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(10,0.001686324);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(11,0.00134959);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(12,0.001040855);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(13,0.0009780062);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(14,0.0008276696);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(15,0.0006785664);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(16,0.0005591542);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(17,0.0006328308);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(18,0.0006163723);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(19,0.0003781358);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(21,0.0003751166);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(22,0.0005801415);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(24,0.0003835164);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_algo_16->Modified();
   Z_jetmass_noJEC_algo_16->cd();
   Z_jetmass_noJEC_algo_16->SetSelected(Z_jetmass_noJEC_algo_16);
}
