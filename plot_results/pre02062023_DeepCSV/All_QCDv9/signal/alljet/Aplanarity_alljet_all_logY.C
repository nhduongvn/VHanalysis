#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_all_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_all/Aplanarity_alljet_all
//=========  (Wed Jan 18 11:42:16 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_all = new TCanvas("Aplanarity_alljet_all", "Aplanarity_alljet_all",0,0,600,600);
   Aplanarity_alljet_all->SetHighLightColor(2);
   Aplanarity_alljet_all->Range(-0.2183529,-0.2479247,1.171633,6.071084);
   Aplanarity_alljet_all->SetFillColor(0);
   Aplanarity_alljet_all->SetFillStyle(4000);
   Aplanarity_alljet_all->SetBorderMode(0);
   Aplanarity_alljet_all->SetBorderSize(2);
   Aplanarity_alljet_all->SetLogy();
   Aplanarity_alljet_all->SetLeftMargin(0.15709);
   Aplanarity_alljet_all->SetRightMargin(0.1234783);
   Aplanarity_alljet_all->SetBottomMargin(0.12);
   Aplanarity_alljet_all->SetFrameFillStyle(1000);
   Aplanarity_alljet_all->SetFrameBorderMode(0);
   Aplanarity_alljet_all->SetFrameFillStyle(1000);
   Aplanarity_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(149803.6);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(3.238593);
   st_stack_256->SetMaximum(274905.2);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetTitle("Aplanarity");
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetTitleOffset(1);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Events/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetTitleSize(0.037);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetTitleOffset(1);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_all_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(1,1332.4);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(2,370.2034);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(3,203.622);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(4,129.4993);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(5,87.57445);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(6,61.03976);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(7,43.86345);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(8,30.96245);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(9,22.90106);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(10,16.71417);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(11,11.75428);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(12,8.5172);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(13,5.940246);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(14,4.085888);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(15,2.609587);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(16,1.69154);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(17,1.016906);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(18,0.621109);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(19,0.3530039);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(20,0.1479534);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(21,0.06910331);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(22,0.03608297);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(23,0.008267);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(1,1.715612);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(2,0.8952867);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(3,0.6653196);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(4,0.5275904);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(5,0.4358186);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(6,0.3621541);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(7,0.3075444);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(8,0.2577454);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(9,0.2216285);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(10,0.1893825);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(11,0.1580964);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(12,0.1351213);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(13,0.1126749);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(14,0.09292802);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(15,0.07475286);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(16,0.06027878);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(17,0.04707929);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(18,0.03632134);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(19,0.02784576);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(20,0.01791056);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(21,0.01186771);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(22,0.008435782);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(23,0.004386837);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetEntries(1410242);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_all_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(1,165.6358);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(2,63.52394);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(3,35.65533);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(4,22.31132);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(5,14.52004);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(6,9.788596);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(7,6.512535);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(8,4.470755);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(9,2.98079);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(10,2.011153);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(11,1.35105);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(12,0.9552187);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(13,0.6305935);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(14,0.383017);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(15,0.2526724);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(16,0.1488597);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(17,0.08585189);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(18,0.05869744);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(19,0.03340472);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(20,0.0131454);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(21,0.006902165);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(22,0.001263533);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(23,0.0005622135);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(1,0.2192553);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(2,0.1366151);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(3,0.1024232);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(4,0.08097725);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(5,0.06552361);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(6,0.05391814);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(7,0.04371848);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(8,0.03666314);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(9,0.02948083);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(10,0.02434926);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(11,0.01989552);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(12,0.01680181);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(13,0.01355449);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(14,0.01067437);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(15,0.008520951);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(16,0.006581432);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(17,0.005028593);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(18,0.004134525);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(19,0.003152845);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(20,0.001871607);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(21,0.00140986);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(22,0.0005665915);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(23,0.0004204548);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetEntries(1377680);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_all_stack_1","ZHcc","F");

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
   Aplanarity_alljet_all->Modified();
   Aplanarity_alljet_all->cd();
   Aplanarity_alljet_all->SetSelected(Aplanarity_alljet_all);
}
