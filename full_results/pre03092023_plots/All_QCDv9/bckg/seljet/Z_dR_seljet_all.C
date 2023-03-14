#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_all()
{
//=========Macro generated from canvas: Z_dR_seljet_all/Z_dR_seljet_all
//=========  (Thu Feb 16 10:35:37 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_all = new TCanvas("Z_dR_seljet_all", "Z_dR_seljet_all",0,0,600,600);
   Z_dR_seljet_all->SetHighLightColor(2);
   Z_dR_seljet_all->Range(-1.310117,-2.046947e+08,7.029799,1.501094e+09);
   Z_dR_seljet_all->SetFillColor(0);
   Z_dR_seljet_all->SetFillStyle(4000);
   Z_dR_seljet_all->SetBorderMode(0);
   Z_dR_seljet_all->SetBorderSize(2);
   Z_dR_seljet_all->SetLeftMargin(0.15709);
   Z_dR_seljet_all->SetRightMargin(0.1234783);
   Z_dR_seljet_all->SetBottomMargin(0.12);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.330515e+09);
   
   TH1F *st_stack_276 = new TH1F("st_stack_276","",30,0,6);
   st_stack_276->SetMinimum(0);
   st_stack_276->SetMaximum(1.330515e+09);
   st_stack_276->SetDirectory(0);
   st_stack_276->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_276->SetLineColor(ci);
   st_stack_276->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_276->GetXaxis()->SetRange(1,30);
   st_stack_276->GetXaxis()->SetLabelFont(42);
   st_stack_276->GetXaxis()->SetTitleOffset(1);
   st_stack_276->GetXaxis()->SetTitleFont(42);
   st_stack_276->GetYaxis()->SetTitle("Events/0.2");
   st_stack_276->GetYaxis()->SetLabelFont(42);
   st_stack_276->GetYaxis()->SetTitleSize(0.037);
   st_stack_276->GetYaxis()->SetTitleFont(42);
   st_stack_276->GetZaxis()->SetLabelFont(42);
   st_stack_276->GetZaxis()->SetTitleOffset(1);
   st_stack_276->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_276);
   
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(2,452521.8);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(3,3.273853e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(4,4.736087e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(5,3.921526e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(6,3.801502e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(7,3.888599e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(8,4.051488e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(9,4.333225e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(10,4.739652e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(11,5.238952e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(12,5.949916e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(13,6.732405e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(14,7.647835e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(15,8.464402e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(16,8.837981e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(17,5.626397e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(18,3.965829e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(19,2.912748e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(20,2.144398e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(21,1.554546e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(22,1.09e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(23,7.406463e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(24,4.625404e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(25,2.679385e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(26,1.368278e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(27,5959788);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(28,1644845);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(29,91217.97);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(2,17445.13);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(3,669408.4);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(4,884822.9);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(5,838844.9);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(6,818972.8);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(7,848937.2);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(8,875250.7);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(9,935080.7);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(10,992975.9);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(11,1050475);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(12,1095883);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(13,1179986);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(14,1294253);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(15,1359221);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(16,1471545);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(17,1202632);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(18,1003142);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(19,855206);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(20,739210.2);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(21,657209.2);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(22,539895.8);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(23,454344.1);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(24,352356.1);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(25,299723);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(26,200243.2);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(27,144418.7);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(28,66873.01);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(29,9190.612);
   VbbHcc_seljet_Z_dR_all_stack_1->SetEntries(1.25316e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(2,738.5765);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(3,681033.1);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(4,1344543);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(5,1752509);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(6,2154243);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(7,2394211);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(8,2475369);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(9,2494338);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(10,2533865);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(11,2624707);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(12,2762919);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(13,2932965);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(14,3115882);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(15,3295115);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(16,3212115);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(17,1734561);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(18,1053787);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(19,680819.4);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(20,444572.5);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(21,286988.1);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(22,180757.7);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(23,109860.7);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(24,62656.26);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(25,32461.47);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(26,15038.32);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(27,5849.39);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(28,1467.105);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(29,85.4101);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(2,7.961967);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(3,235.0313);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(4,331.2896);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(5,378.5522);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(6,419.8888);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(7,442.2988);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(8,449.5226);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(9,451.6166);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(10,455.4358);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(11,463.8059);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(12,476.8114);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(13,491.6479);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(14,507.5371);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(15,522.8147);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(16,516.4979);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(17,379.1794);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(18,294.6157);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(19,236.3194);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(20,190.8397);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(21,153.3869);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(22,120.8634);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(23,94.13153);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(24,71.15067);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(25,50.53034);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(26,34.59311);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(27,21.38503);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(28,10.63179);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(29,2.501712);
   VbbHcc_seljet_Z_dR_all_stack_2->SetEntries(5.413184e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_seljet_all->Modified();
   Z_dR_seljet_all->cd();
   Z_dR_seljet_all->SetSelected(Z_dR_seljet_all);
}
