#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.310117,-0.141577,7.029799,1.038231);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLogy();
   Z_dR_tags_17->SetLeftMargin(0.15709);
   Z_dR_tags_17->SetRightMargin(0.1234783);
   Z_dR_tags_17->SetBottomMargin(0.12);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(-2.482226e+09);
   st_stack_18->SetMaximum(-0.8864699);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Event/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,0.3474677);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,0.5679753);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,0.5827424);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,0.5313319);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,0.3322155);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,0.2368994);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,0.1945095);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,0.161709);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,0.1407269);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,0.1673251);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,0.1574613);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,0.1877977);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,0.2342628);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,0.2218524);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.0833626);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.03323454);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.01966758);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.01130764);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.003954907);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,0.003922254);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.02147495);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.0273375);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.02801677);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.02665291);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.02108705);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.01787962);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.01585581);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.01471892);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.01350895);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.01501207);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.01445485);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.01576948);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.01788012);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.01690472);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.01063193);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.006558765);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.004995399);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.003841871);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.002287992);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,0.00226656);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.000107203);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.1278918);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.2603747);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.2936866);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,0.2440871);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.1583621);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.08738227);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.06044146);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.05187938);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.05011104);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.06130138);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.06678489);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.0751015);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.08197868);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.08132008);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.03884111);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.01728072);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.009869412);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.006286479);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.00352611);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.003180092);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,0.00173309);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.0003807697);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.0001210533);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,0.0001293202);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.000107203);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.004607932);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.006625791);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.007074747);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.006454421);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.005170238);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.003842408);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.003226602);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.002976356);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.002895164);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.003231681);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.00336343);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.003576479);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.0037049);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.003686756);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.002571138);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.001712347);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.001317161);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.001028379);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.0007671747);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.0007328439);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,0.0005352474);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0002274792);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.0001210533);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,0.0001293202);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
