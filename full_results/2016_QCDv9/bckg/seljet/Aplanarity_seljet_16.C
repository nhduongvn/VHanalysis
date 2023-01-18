#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_16()
{
//=========Macro generated from canvas: Aplanarity_seljet_16/Aplanarity_seljet_16
//=========  (Wed Jan 18 11:43:16 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_16 = new TCanvas("Aplanarity_seljet_16", "Aplanarity_seljet_16",0,0,600,600);
   Aplanarity_seljet_16->SetHighLightColor(2);
   Aplanarity_seljet_16->Range(-0.2183529,-1.755407e+09,1.171633,1.287298e+10);
   Aplanarity_seljet_16->SetFillColor(0);
   Aplanarity_seljet_16->SetFillStyle(4000);
   Aplanarity_seljet_16->SetBorderMode(0);
   Aplanarity_seljet_16->SetBorderSize(2);
   Aplanarity_seljet_16->SetLeftMargin(0.15709);
   Aplanarity_seljet_16->SetRightMargin(0.1234783);
   Aplanarity_seljet_16->SetBottomMargin(0.12);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   Aplanarity_seljet_16->SetFrameFillStyle(1000);
   Aplanarity_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.141014e+10);
   
   TH1F *st_stack_317 = new TH1F("st_stack_317","",50,0,1);
   st_stack_317->SetMinimum(0);
   st_stack_317->SetMaximum(1.141014e+10);
   st_stack_317->SetDirectory(0);
   st_stack_317->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_317->SetLineColor(ci);
   st_stack_317->GetXaxis()->SetTitle("Aplanarity");
   st_stack_317->GetXaxis()->SetRange(1,50);
   st_stack_317->GetXaxis()->SetLabelFont(42);
   st_stack_317->GetXaxis()->SetTitleOffset(1);
   st_stack_317->GetXaxis()->SetTitleFont(42);
   st_stack_317->GetYaxis()->SetTitle("Events/0.02");
   st_stack_317->GetYaxis()->SetLabelFont(42);
   st_stack_317->GetYaxis()->SetTitleSize(0.037);
   st_stack_317->GetYaxis()->SetTitleFont(42);
   st_stack_317->GetZaxis()->SetLabelFont(42);
   st_stack_317->GetZaxis()->SetTitleOffset(1);
   st_stack_317->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_317);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(0,1077.815);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,7.601554e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,3.786742e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,1.982396e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,1.124115e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,6.717685e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,4.199081e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,2.71843e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,1.807328e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,1.174497e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,7.946519e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,5.451064e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,3.567015e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,2.324835e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,1.541102e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,1.008073e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,5824862);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,3837466);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,1950215);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,1252741);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,531387.5);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,227583);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,37722.89);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,37004.88);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(24,1604.386);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(0,559.2609);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,6912627);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,5285395);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,3929014);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,2990476);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,2319244);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,1836620);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,1494459);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,1225012);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,975369.7);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,812500.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,679462.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,548264.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,436330.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,357489.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,300692.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,219664.3);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,187206.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,127736);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,105459.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,65107.05);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,44639.7);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,6407.571);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,17726.35);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(24,1553.942);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(6.188646e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(0,1.082153);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,5208062);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,4035527);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,2731139);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,1871750);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,1310552);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,933804.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,671498.9);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,485647.5);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,351612.8);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,253579.9);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,181375.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,128488.4);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,89730.34);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,61403.3);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,40857.98);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,26429.41);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,16485.59);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,9713.149);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,5342.799);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,2710.394);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,1191.769);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,444.1688);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,118.7423);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,18.25322);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(25,0.3469533);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(0,0.2739995);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,595.5875);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,528.4367);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,435.9316);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,361.3418);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,302.6029);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,255.6021);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,216.8557);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,184.4766);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,157.0276);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,133.3847);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,112.8427);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,95.00729);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,79.41531);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,65.71113);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,53.60898);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,43.12461);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,34.0636);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,26.15467);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,19.40496);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,13.82304);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,9.168505);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,5.601258);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,2.891);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,1.142754);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(25,0.1596018);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(2.87454e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_16->Modified();
   Aplanarity_seljet_16->cd();
   Aplanarity_seljet_16->SetSelected(Aplanarity_seljet_16);
}
