#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_all_logY()
{
//=========Macro generated from canvas: H_pt_tags_all/H_pt_tags_all
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *H_pt_tags_all = new TCanvas("H_pt_tags_all", "H_pt_tags_all",0,0,600,600);
   H_pt_tags_all->SetHighLightColor(2);
   H_pt_tags_all->Range(37.97653,0.3179011,1705.96,3.479126);
   H_pt_tags_all->SetFillColor(0);
   H_pt_tags_all->SetFillStyle(4000);
   H_pt_tags_all->SetBorderMode(0);
   H_pt_tags_all->SetBorderSize(2);
   H_pt_tags_all->SetLogy();
   H_pt_tags_all->SetLeftMargin(0.15709);
   H_pt_tags_all->SetRightMargin(0.1234783);
   H_pt_tags_all->SetBottomMargin(0.12);
   H_pt_tags_all->SetFrameFillStyle(1000);
   H_pt_tags_all->SetFrameBorderMode(0);
   H_pt_tags_all->SetFrameFillStyle(1000);
   H_pt_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1037.268);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",40,0,2000);
   st_stack_16->SetMinimum(4.980215);
   st_stack_16->SetMaximum(1455.472);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_16->GetXaxis()->SetRange(7,30);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/50.0");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_tags_H_pt_all_stack_1 = new TH1D("VbbHcc_tags_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(1,6.134876);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(2,10.37268);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(3,6.369446);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(4,3.184739);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(5,1.365305);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(6,0.7472815);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(7,0.4350182);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(8,0.2736147);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(9,0.1532752);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(10,0.07079224);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(11,0.04370869);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(12,0.02607309);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(13,0.008509813);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(14,0.01214874);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(15,0.00428707);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(16,0.001727301);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(17,0.004426489);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(18,0.002496094);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(19,0.005373985);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(22,0.001646926);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(1,0.1149811);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(2,0.1499582);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(3,0.1172258);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(4,0.08268279);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(5,0.0539501);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(6,0.03944599);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(7,0.03045969);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(8,0.02324832);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(9,0.0175962);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(10,0.01201881);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(11,0.009360749);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(12,0.006976512);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(13,0.003875036);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(14,0.005400791);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(15,0.002483259);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(16,0.001727301);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(17,0.003277374);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(18,0.002496094);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(19,0.003829101);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(22,0.001646926);
   VbbHcc_tags_H_pt_all_stack_1->SetEntries(16994);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_2 = new TH1D("VbbHcc_tags_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(1,1.013622);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(2,2.314535);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(3,2.480942);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(4,1.603016);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(5,0.8049222);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(6,0.4039266);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(7,0.2401747);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(8,0.1386859);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(9,0.08152428);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(10,0.04602283);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(11,0.03233293);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(12,0.02434035);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(13,0.01373187);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(14,0.007652478);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(15,0.00814854);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(16,0.003269092);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(17,0.00155438);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(18,0.003011904);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(19,0.001358638);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(20,0.0005867675);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(21,0.0007452383);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(22,0.0007877508);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(23,0.0009213753);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(24,0.0005516689);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(25,0.001002765);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(27,0.0002057899);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(35,0.0003681385);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(38,0.0001892237);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(39,0.0001275402);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(1,0.01712016);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(2,0.02607793);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(3,0.02718301);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(4,0.02174611);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(5,0.01520427);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(6,0.0109178);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(7,0.008281613);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(8,0.006318862);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(9,0.004826174);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(10,0.003640763);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(11,0.003137396);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(12,0.003105882);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(13,0.001938815);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(14,0.001476966);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(15,0.001631332);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(16,0.001039765);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(17,0.0006584858);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(18,0.0008418624);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(19,0.0006215348);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(20,0.000339428);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(21,0.0004523797);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(22,0.0005231098);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(23,0.0005435262);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(24,0.0004159405);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(25,0.000582507);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(27,0.0002057899);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(35,0.0003681385);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(38,0.0001892237);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(39,0.0001275402);
   VbbHcc_tags_H_pt_all_stack_2->SetEntries(38313);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_1","ZHcc","F");

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
   H_pt_tags_all->Modified();
   H_pt_tags_all->cd();
   H_pt_tags_all->SetSelected(H_pt_tags_all);
}
