#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_alljet_all()
{
//=========Macro generated from canvas: H_pt_alljet_all/H_pt_alljet_all
//=========  (Thu Feb 16 10:35:21 2023) by ROOT version 6.26/06
   TCanvas *H_pt_alljet_all = new TCanvas("H_pt_alljet_all", "H_pt_alljet_all",0,0,600,600);
   H_pt_alljet_all->SetHighLightColor(2);
   H_pt_alljet_all->Range(37.97653,-282.5462,1705.96,2072.006);
   H_pt_alljet_all->SetFillColor(0);
   H_pt_alljet_all->SetFillStyle(4000);
   H_pt_alljet_all->SetBorderMode(0);
   H_pt_alljet_all->SetBorderSize(2);
   H_pt_alljet_all->SetLeftMargin(0.15709);
   H_pt_alljet_all->SetRightMargin(0.1234783);
   H_pt_alljet_all->SetBottomMargin(0.12);
   H_pt_alljet_all->SetFrameFillStyle(1000);
   H_pt_alljet_all->SetFrameBorderMode(0);
   H_pt_alljet_all->SetFrameFillStyle(1000);
   H_pt_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1836.55);
   
   TH1F *st_stack_208 = new TH1F("st_stack_208","",40,0,2000);
   st_stack_208->SetMinimum(0);
   st_stack_208->SetMaximum(1836.55);
   st_stack_208->SetDirectory(0);
   st_stack_208->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_208->SetLineColor(ci);
   st_stack_208->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_208->GetXaxis()->SetRange(7,30);
   st_stack_208->GetXaxis()->SetLabelFont(42);
   st_stack_208->GetXaxis()->SetTitleOffset(1);
   st_stack_208->GetXaxis()->SetTitleFont(42);
   st_stack_208->GetYaxis()->SetTitle("Events/50.0");
   st_stack_208->GetYaxis()->SetLabelFont(42);
   st_stack_208->GetYaxis()->SetTitleSize(0.037);
   st_stack_208->GetYaxis()->SetTitleFont(42);
   st_stack_208->GetZaxis()->SetLabelFont(42);
   st_stack_208->GetZaxis()->SetTitleOffset(1);
   st_stack_208->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_208);
   
   
   TH1D *VbbHcc_alljet_H_pt_all_stack_1 = new TH1D("VbbHcc_alljet_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(1,1224.367);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(2,1031.886);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(3,242.4872);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(4,54.60598);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(5,18.06088);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(6,6.927386);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(7,3.133942);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(8,1.503582);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(9,0.791853);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(10,0.3517984);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(11,0.2164342);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(12,0.1150047);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(13,0.04383544);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(14,0.05973679);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(15,0.02202564);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(16,0.01641947);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(17,0.01198958);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(18,0.009025842);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(19,0.005115442);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinContent(25,0.001639841);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(1,1.865111);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(2,1.708954);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(3,0.8026384);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(4,0.3797371);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(5,0.2190373);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(6,0.1328763);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(7,0.0887767);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(8,0.0620363);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(9,0.04553402);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(10,0.02939177);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(11,0.02261295);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(12,0.0169328);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(13,0.01050433);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(14,0.01244614);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(15,0.006891123);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(16,0.00674901);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(17,0.006101392);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(18,0.004581831);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(19,0.003755893);
   VbbHcc_alljet_H_pt_all_stack_1->SetBinError(25,0.001639841);
   VbbHcc_alljet_H_pt_all_stack_1->SetEntries(1193419);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_pt_all_stack_2 = new TH1D("VbbHcc_alljet_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(1,115.8474);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(2,148.9441);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(3,64.79292);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(4,24.44427);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(5,9.707999);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(6,3.86665);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(7,1.649106);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(8,0.7153655);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(9,0.3217719);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(10,0.1382133);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(11,0.06598863);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(12,0.02891918);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(13,0.01763214);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(14,0.007058045);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(15,0.002763613);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(16,0.002918938);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(17,0.0009560243);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(18,0.0005945287);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(19,0.001123925);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(20,0.0004920103);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinContent(29,0.0002612132);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(1,0.2013108);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(2,0.2274555);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(3,0.1490326);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(4,0.09212537);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(5,0.05787265);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(6,0.03840167);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(7,0.02365321);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(8,0.01549279);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(9,0.01018963);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(10,0.006629185);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(11,0.004624959);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(12,0.002980698);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(13,0.002411059);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(14,0.001460762);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(15,0.0009320405);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(16,0.0009576033);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(17,0.0005610636);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(18,0.0004341997);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(19,0.0006524587);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(20,0.0003627746);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_alljet_H_pt_all_stack_2->SetBinError(29,0.0002612132);
   VbbHcc_alljet_H_pt_all_stack_2->SetEntries(1223268);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_pt_all_stack_1","ZHcc","F");

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
   H_pt_alljet_all->Modified();
   H_pt_alljet_all->cd();
   H_pt_alljet_all->SetSelected(H_pt_alljet_all);
}
