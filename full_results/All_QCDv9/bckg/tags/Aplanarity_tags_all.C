#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_all()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Tue Feb 14 16:10:10 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(-0.2183529,-1.647114e+07,1.171633,1.207884e+08);
   Aplanarity_tags_all->SetFillColor(0);
   Aplanarity_tags_all->SetFillStyle(4000);
   Aplanarity_tags_all->SetBorderMode(0);
   Aplanarity_tags_all->SetBorderSize(2);
   Aplanarity_tags_all->SetLeftMargin(0.15709);
   Aplanarity_tags_all->SetRightMargin(0.1234783);
   Aplanarity_tags_all->SetBottomMargin(0.12);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.070624e+08);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0);
   st_stack_64->SetMaximum(1.070624e+08);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetTitle("Aplanarity");
   st_stack_64->GetXaxis()->SetRange(1,50);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetTitleOffset(1);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Events/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetTitleSize(0.037);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetTitleOffset(1);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,6.853708e+07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,3.188372e+07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,1.622027e+07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,8778766);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,5146840);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,3320346);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,2361148);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,1515438);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,1091931);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,688651.4);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,366938.1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(12,299976.1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,218262.7);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,119236.1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,92082.47);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(16,50061.63);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(17,54662.58);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(18,12932.08);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(19,6882.945);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(20,5042.573);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(21,2998.329);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,593026.8);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,480932.6);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,326402.4);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,241859.8);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,170595.3);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,142661.5);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,134471.5);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,106858.6);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,108829.3);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,70833.26);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,41534.45);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(12,49273.27);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,41610.75);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,28428.44);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,26587.27);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(16,14334.57);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(17,28700.97);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(18,4177.665);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(19,2539.421);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(20,2795.477);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(21,2866.706);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(1446641);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(0,0.7589306);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,2837876);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,1998168);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,1334080);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,916864.9);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,645159.8);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,461216.2);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,332825.6);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,241535.4);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,175209.5);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,126621.4);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,90912.08);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,64475.31);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,45138.74);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,30940.66);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,20732.58);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(16,13449.6);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,8385.145);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(18,4943.197);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(19,2741.706);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(20,1384.116);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(21,600.2328);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(22,227.067);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(23,58.44781);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(24,9.821804);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(25,0.3736729);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(0,0.2379071);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,484.5957);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,407.4793);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,333.2395);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,277.0084);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,232.5306);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,196.7467);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,166.8556);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,142.2272);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,121.1286);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,103.1663);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,87.23152);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,73.19778);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,62.12183);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,51.11698);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,42.16038);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(16,33.6488);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,26.69314);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(18,20.6004);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(19,14.84748);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(20,10.73876);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(21,6.934288);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(22,4.243772);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(23,2.156026);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(24,0.883027);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(25,0.1692812);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(1.308968e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   Aplanarity_tags_all->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->SetSelected(Aplanarity_tags_all);
}
