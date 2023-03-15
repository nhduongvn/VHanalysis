#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
   Z_dR_Bj1_tags_18->SetHighLightColor(2);
   Z_dR_Bj1_tags_18->Range(-1.310117,-3.338349,7.029799,0.5078046);
   Z_dR_Bj1_tags_18->SetFillColor(0);
   Z_dR_Bj1_tags_18->SetFillStyle(4000);
   Z_dR_Bj1_tags_18->SetBorderMode(0);
   Z_dR_Bj1_tags_18->SetBorderSize(2);
   Z_dR_Bj1_tags_18->SetLogy();
   Z_dR_Bj1_tags_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_18->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_55 = new TH1F("st_stack_55","",30,0,6);
   st_stack_55->SetMinimum(16.6804);
   st_stack_55->SetMaximum(1.327973);
   st_stack_55->SetDirectory(0);
   st_stack_55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_55->SetLineColor(ci);
   st_stack_55->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_55->GetXaxis()->SetRange(1,30);
   st_stack_55->GetXaxis()->SetLabelFont(42);
   st_stack_55->GetXaxis()->SetTitleOffset(1);
   st_stack_55->GetXaxis()->SetTitleFont(42);
   st_stack_55->GetYaxis()->SetTitle("Event/0.2");
   st_stack_55->GetYaxis()->SetLabelFont(42);
   st_stack_55->GetYaxis()->SetTitleSize(0.037);
   st_stack_55->GetYaxis()->SetTitleFont(42);
   st_stack_55->GetZaxis()->SetLabelFont(42);
   st_stack_55->GetZaxis()->SetTitleOffset(1);
   st_stack_55->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_55);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.2691489);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,1.047758);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,1.050962);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,0.8154571);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,0.4918376);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,0.2563323);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,0.1954534);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.1730243);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.1169516);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.09292046);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.08811423);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.07369553);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.09452253);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.07369553);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.07369553);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.07369553);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.02563323);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.02883738);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.01602077);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.004806231);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,0.004806231);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.003204154);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,0.003204154);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,0.006408307);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,0.001602077);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.02076529);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.04097059);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.04103319);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.0361445);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.02807065);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.02026485);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.01769552);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.01664927);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.01368815);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.01220105);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.01188132);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.01086581);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.01230579);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.01086581);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.01086581);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.01086581);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.006408307);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.006797036);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.005066212);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.002774878);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,0.002774878);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.002265679);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,0.002265679);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,0.003204154);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,0.001602077);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.102522);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.4834986);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,0.5303297);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.3514436);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.1668619);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.08817733);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.06391802);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.05737855);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.04788577);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.04134631);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.0392368);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.03459589);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.02847832);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.02383741);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.02151696);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.02172791);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.01307893);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.007383269);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.005695665);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.003375209);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.001898555);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.0004219011);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.0006328516);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.001054753);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,0.0004219011);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,0.0002109505);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.004650491);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.01009922);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.01057702);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.008610297);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.005932925);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.004312894);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.003671994);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.003479086);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.00317829);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.002953308);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.002876982);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.002701485);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.002451024);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.002242435);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.002130496);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.002140914);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.001661026);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.001248);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.001096131);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.0008438022);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.0006328516);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.0002983291);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0003653771);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0004716998);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.0002983291);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.0002109505);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_18->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->SetSelected(Z_dR_Bj1_tags_18);
}
