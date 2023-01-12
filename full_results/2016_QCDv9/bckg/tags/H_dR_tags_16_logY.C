#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Mon Dec 19 11:15:37 2022) by ROOT version 6.26/06
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.353788,-2.15559,7.264125,10.28752);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLogy();
   H_dR_tags_16->SetLeftMargin(0.15709);
   H_dR_tags_16->SetRightMargin(0.1234783);
   H_dR_tags_16->SetBottomMargin(0.12);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.147683);
   st->SetMaximum(4.075911e+08);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(0.2175618);
   st_stack_21->SetMaximum(1.104605e+09);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,1978.449);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,1681567);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,2185091);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,1577148);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,1554490);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,1570766);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,1594086);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,1830761);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,1818156);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,2311325);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,2400815);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,2764797);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,3309720);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,3323719);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,3888406);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,2848295);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,2037222);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,1501206);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,1356292);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,1127879);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,731717.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,621871.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,408658.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,216896.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,199927.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,86847.72);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,14788.91);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,1130.184);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,1497.617);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,88495.71);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,118160.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,94947.45);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,93599.12);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,96177.64);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,91642.95);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,106822.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,99211.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,127755.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,111041.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,130313.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,151439.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,133976.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,158774);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,147403.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,118138.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,89117.49);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,101652.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,96946.14);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,69221.64);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,68412.65);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,48376.49);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,28520.91);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,46195.56);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,20158.83);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,3782.991);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,538.8499);
   VbbHcc_tags_H_dR_stack_1->SetEntries(514605);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,40.84759);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,45372.25);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,80128.84);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,97584.98);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,117101.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,127603.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,131232.7);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,132723.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,135356.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,141528.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,150892.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,162502.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,176139.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,189148.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,187505.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,108962.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,71011.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,48745.72);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,33844.13);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,23317.72);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,15821.14);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,10372.18);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,6518.101);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,3608.301);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,1829.117);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,793.3349);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,235.6801);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,17.49854);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.774196);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,60.3376);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,80.34524);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,88.69441);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,97.1154);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,101.3459);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,102.8541);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,103.5663);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,104.7431);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,107.2629);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,110.9027);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,115.2725);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,120.1809);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,124.6665);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,124.161);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,94.32332);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,75.77117);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,62.47457);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,51.74832);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,42.72734);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,34.98694);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,28.14438);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,22.1906);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,16.41679);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,11.61707);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,7.620339);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,4.088285);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,1.111681);
   VbbHcc_tags_H_dR_stack_2->SetEntries(2.979302e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
