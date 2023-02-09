void Z_pt_alljet_17_logY()
{
//=========Macro generated from canvas: Z_pt_alljet_17/Z_pt_alljet_17
//=========  (Thu Feb  9 09:44:36 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_alljet_17 = new TCanvas("Z_pt_alljet_17", "Z_pt_alljet_17",0,0,600,600);
   Z_pt_alljet_17->SetHighLightColor(2);
   Z_pt_alljet_17->Range(37.97653,-0.1250263,1705.96,5.475196);
   Z_pt_alljet_17->SetFillColor(0);
   Z_pt_alljet_17->SetFillStyle(4000);
   Z_pt_alljet_17->SetBorderMode(0);
   Z_pt_alljet_17->SetBorderSize(2);
   Z_pt_alljet_17->SetLogy();
   Z_pt_alljet_17->SetLeftMargin(0.15709);
   Z_pt_alljet_17->SetRightMargin(0.1234783);
   Z_pt_alljet_17->SetBottomMargin(0.12);
   Z_pt_alljet_17->SetFrameFillStyle(1000);
   Z_pt_alljet_17->SetFrameBorderMode(0);
   Z_pt_alljet_17->SetFrameFillStyle(1000);
   Z_pt_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(47405.96);
   
   TH1F *st_stack_202 = new TH1F("st_stack_202","",40,0,2000);
   st_stack_202->SetMinimum(3.523712);
   st_stack_202->SetMaximum(82257.23);
   st_stack_202->SetDirectory(0);
   st_stack_202->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_202->SetLineColor(ci);
   st_stack_202->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_202->GetXaxis()->SetRange(7,30);
   st_stack_202->GetXaxis()->SetLabelFont(42);
   st_stack_202->GetXaxis()->SetLabelSize(0.035);
   st_stack_202->GetXaxis()->SetTitleSize(0.035);
   st_stack_202->GetXaxis()->SetTitleFont(42);
   st_stack_202->GetYaxis()->SetTitle("Events/50.0");
   st_stack_202->GetYaxis()->SetLabelFont(42);
   st_stack_202->GetYaxis()->SetLabelSize(0.035);
   st_stack_202->GetYaxis()->SetTitleSize(0.037);
   st_stack_202->GetYaxis()->SetTitleOffset(0);
   st_stack_202->GetYaxis()->SetTitleFont(42);
   st_stack_202->GetZaxis()->SetLabelFont(42);
   st_stack_202->GetZaxis()->SetLabelSize(0.035);
   st_stack_202->GetZaxis()->SetTitleSize(0.035);
   st_stack_202->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_202);
   
   
   TH1D *VbbHcc_alljet_Z_pt_stack_1 = new TH1D("VbbHcc_alljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(1,432.0379);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(2,300.1308);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(3,42.96081);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(4,9.208011);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(5,2.877759);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(6,1.033582);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(7,0.437134);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(8,0.2043134);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(9,0.06890229);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(10,0.03372094);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(11,0.02160933);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(12,0.009709703);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(13,0.0170539);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(14,0.003367023);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(15,0.003856594);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(16,0.002359533);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(17,0.001870372);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(19,0.001639841);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(1,0.9211258);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(2,0.760037);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(3,0.2809058);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(4,0.1292112);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(5,0.07222404);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(6,0.04306398);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(7,0.02799287);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(8,0.01873309);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(9,0.01110356);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(10,0.007721885);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(11,0.006264413);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(12,0.004343856);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(13,0.005541983);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(14,0.002423429);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(15,0.002729717);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(16,0.002359533);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(17,0.001870372);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(19,0.001639841);
   VbbHcc_alljet_Z_pt_stack_1->SetEntries(479854);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_pt_stack_2 = new TH1D("VbbHcc_alljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(1,42.02171);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(2,46.66593);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(3,16.2822);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(4,5.025252);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(5,1.666145);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(6,0.5698569);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(7,0.194464);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(8,0.07931573);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(9,0.02991738);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(10,0.01406191);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(11,0.008172843);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(12,0.001428325);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(13,0.001821223);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(14,0.0007376271);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(15,0.0002639519);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(16,0.0003193896);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(28,0.0002612132);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(1,0.1006821);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(2,0.105976);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(3,0.06228238);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(4,0.03442224);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(5,0.01975658);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(6,0.01153603);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(7,0.006709468);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(8,0.004321897);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(9,0.002662697);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(10,0.001813972);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(11,0.001389571);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(12,0.0005464534);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(13,0.0006725982);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(14,0.000426456);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(15,0.0002639519);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(16,0.0002490911);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(28,0.0002612132);
   VbbHcc_alljet_Z_pt_stack_2->SetEntries(490312);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_alljet_17->Modified();
   Z_pt_alljet_17->cd();
   Z_pt_alljet_17->SetSelected(Z_pt_alljet_17);
}
