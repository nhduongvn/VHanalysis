#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Thu Mar  9 13:08:26 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.310117,-0.1181914,7.029799,0.3686697);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLogy();
   Z_dR_both_18->SetLeftMargin(0.15709);
   Z_dR_both_18->SetRightMargin(0.1234783);
   Z_dR_both_18->SetBottomMargin(0.12);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.972791);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(0.8714289);
   st_stack_147->SetMaximum(2.089217);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetTitleOffset(1);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Event/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetTitleSize(0.037);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetTitleOffset(1);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.7801764);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,1.052319);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,1.05412);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,0.9204864);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.6515807);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.4422935);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.3921137);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.2804512);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.2767544);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.2971034);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.3238533);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.3552332);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.5124435);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.4187864);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.1782975);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.08119347);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.03392609);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.01457382);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.01433442);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.01765463);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,0.008122987);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,0.004869908);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,0.002358174);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.05028632);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.05465241);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.0604528);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.06667814);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.04230094);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.03456471);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.03271228);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.033683);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.02736501);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.02893422);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.0310653);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.03117971);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.03802524);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.03465384);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.0218712);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.0145247);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.009165189);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.006077016);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.006534676);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.01177757);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,0.004714813);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,0.003469898);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,0.002358174);
   VbbHcc_both_Z_dR_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.2641209);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.5540345);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.5832963);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.4736455);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.307115);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.1769285);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.1080575);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.09157478);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.104209);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.1087695);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.1311184);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.1350413);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.1598471);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.171063);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.07097993);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.03154803);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.01964082);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.01385581);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.003657607);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.004193031);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.001743298);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.001405139);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.0008002093);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.01064124);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.0143547);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.01468941);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.01441805);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.01040185);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.008139965);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.006199445);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.005635941);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.006130826);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.006231894);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.006892548);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.007156796);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.007605745);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.008933929);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.0061782);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.003271581);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.002640809);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.002188446);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.001127664);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.001204939);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.0007839672);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0007101706);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0005686183);
   VbbHcc_both_Z_dR_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
