#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_17/H_dR_Bj1_tags_17
//=========  (Wed Jan 18 11:40:23 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_17 = new TCanvas("H_dR_Bj1_tags_17", "H_dR_Bj1_tags_17",0,0,600,600);
   H_dR_Bj1_tags_17->SetHighLightColor(2);
   H_dR_Bj1_tags_17->Range(-1.310117,-0.411868,7.029799,3.020366);
   H_dR_Bj1_tags_17->SetFillColor(0);
   H_dR_Bj1_tags_17->SetFillStyle(4000);
   H_dR_Bj1_tags_17->SetBorderMode(0);
   H_dR_Bj1_tags_17->SetBorderSize(2);
   H_dR_Bj1_tags_17->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_17->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_17->SetBottomMargin(0.12);
   H_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_17->SetFrameBorderMode(0);
   H_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.677142);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",30,0,6);
   st_stack_46->SetMinimum(0);
   st_stack_46->SetMaximum(2.677142);
   st_stack_46->SetDirectory(0);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_46->GetXaxis()->SetRange(1,30);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetTitleOffset(1);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.2");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetTitleSize(0.037);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.1936236);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,0.9570084);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,1.3633);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,1.302991);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,1.044298);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,0.9109831);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,0.7602106);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.6221348);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.4792977);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.4126404);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.4015309);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.3094803);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.2920225);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.2761517);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.2348876);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.1936236);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.1174438);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.07935393);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.05396067);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.03332865);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.01587079);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.007935393);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,0.009522471);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.006348314);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.004761236);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,0.003174157);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.01752986);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.03897239);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.04651521);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.04547472);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.04071096);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.0380237);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.03473491);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.03142255);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.02758048);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.02559087);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.02524403);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.02216235);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.02152818);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.020935);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.01930764);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.01752986);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.01365257);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.01122234);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.009254179);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.007272908);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.005018783);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.003548816);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,0.003887533);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.003174157);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.002748901);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,0.002244468);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(6355);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.07351835);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.3391117);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.421461);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.3843707);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.3183587);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.2357886);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.1836855);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.1335694);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.1136995);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.08985576);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.07727154);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.06490809);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.06292111);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.0611549);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.05342775);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.04923301);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.02251913);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.01788284);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.009272584);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.004415516);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.005740171);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.003090861);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.001324655);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.0008831033);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.0008831033);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.0008831033);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.004028781);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.00865261);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.00964616);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.009211936);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.008383669);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.007215013);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.006368148);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.005430367);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.005010201);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.004453985);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.004130337);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.003785517);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.003727125);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.003674442);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.003434466);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.003296886);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.002229726);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.001986982);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.001430791);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.0009873395);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.00112574);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.0008260675);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.0005407881);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.0004415516);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0004415516);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.0004415516);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(12362);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","ZHcc","F");

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
   H_dR_Bj1_tags_17->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->SetSelected(H_dR_Bj1_tags_17);
}
