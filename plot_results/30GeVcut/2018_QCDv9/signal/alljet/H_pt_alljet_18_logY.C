#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_alljet_18_logY()
{
//=========Macro generated from canvas: H_pt_alljet_18/H_pt_alljet_18
//=========  (Tue Feb 14 16:07:57 2023) by ROOT version 6.26/06
   TCanvas *H_pt_alljet_18 = new TCanvas("H_pt_alljet_18", "H_pt_alljet_18",0,0,600,600);
   H_pt_alljet_18->SetHighLightColor(2);
   H_pt_alljet_18->Range(37.97653,-0.1407582,1705.96,5.550551);
   H_pt_alljet_18->SetFillColor(0);
   H_pt_alljet_18->SetFillStyle(4000);
   H_pt_alljet_18->SetBorderMode(0);
   H_pt_alljet_18->SetBorderSize(2);
   H_pt_alljet_18->SetLogy();
   H_pt_alljet_18->SetLeftMargin(0.15709);
   H_pt_alljet_18->SetRightMargin(0.1234783);
   H_pt_alljet_18->SetBottomMargin(0.12);
   H_pt_alljet_18->SetFrameFillStyle(1000);
   H_pt_alljet_18->SetFrameBorderMode(0);
   H_pt_alljet_18->SetFrameFillStyle(1000);
   H_pt_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(54819.07);
   
   TH1F *st_stack_207 = new TH1F("st_stack_207","",40,0,2000);
   st_stack_207->SetMinimum(3.484969);
   st_stack_207->SetMaximum(95812.03);
   st_stack_207->SetDirectory(0);
   st_stack_207->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_207->SetLineColor(ci);
   st_stack_207->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_207->GetXaxis()->SetRange(7,30);
   st_stack_207->GetXaxis()->SetLabelFont(42);
   st_stack_207->GetXaxis()->SetTitleOffset(1);
   st_stack_207->GetXaxis()->SetTitleFont(42);
   st_stack_207->GetYaxis()->SetTitle("Events/50.0");
   st_stack_207->GetYaxis()->SetLabelFont(42);
   st_stack_207->GetYaxis()->SetTitleSize(0.037);
   st_stack_207->GetYaxis()->SetTitleFont(42);
   st_stack_207->GetZaxis()->SetLabelFont(42);
   st_stack_207->GetZaxis()->SetTitleOffset(1);
   st_stack_207->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_207);
   
   
   TH1D *VbbHcc_alljet_H_pt_stack_1 = new TH1D("VbbHcc_alljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(1,548.1907);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(2,464.973);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(3,110.0887);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(4,24.89368);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(5,8.07341);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(6,3.203709);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(7,1.450737);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(8,0.7533812);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(9,0.3916334);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(10,0.1558923);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(11,0.103386);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(12,0.05905119);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(13,0.01856888);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(14,0.03059154);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(15,0.01270142);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(16,0.007400372);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(17,0.009975564);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(18,0.002444891);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(19,0.003272863);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(1,1.339862);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(2,1.238252);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(3,0.5761679);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(4,0.2744948);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(5,0.1580517);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(6,0.09524495);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(7,0.06323932);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(8,0.04609351);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(9,0.03404114);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(10,0.02044894);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(11,0.01644116);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(12,0.01272245);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(13,0.007072643);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(14,0.009303651);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(15,0.005447318);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(16,0.004285545);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(17,0.005759404);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(18,0.002444891);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(19,0.003272863);
   VbbHcc_alljet_H_pt_stack_1->SetEntries(479240);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_pt_stack_2 = new TH1D("VbbHcc_alljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(1,51.77121);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(2,66.65543);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(3,29.11839);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(4,11.14403);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(5,4.449255);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(6,1.788907);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(7,0.7672699);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(8,0.3286612);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(9,0.1421522);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(10,0.06024507);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(11,0.02792789);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(12,0.01105581);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(13,0.007690405);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(14,0.004003315);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(15,0.001453892);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(16,0.0008115611);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(17,0.0003035629);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(18,0.0003740668);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(19,0.0007440045);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(20,0.0003186975);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(1,0.1448955);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(2,0.1633687);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(3,0.1067873);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(4,0.06698922);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(5,0.0421162);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(6,0.02927393);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(7,0.01719806);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(8,0.0112103);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(9,0.00711232);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(10,0.004628955);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(11,0.003141937);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(12,0.001924634);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(13,0.001643258);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(14,0.001144652);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(15,0.0007437922);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(16,0.0005756103);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(17,0.0003035629);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(18,0.0003740668);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(19,0.0005304363);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(20,0.0003186975);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_alljet_H_pt_stack_2->SetEntries(488139);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_1","ZHcc","F");

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
   H_pt_alljet_18->Modified();
   H_pt_alljet_18->cd();
   H_pt_alljet_18->SetSelected(H_pt_alljet_18);
}
