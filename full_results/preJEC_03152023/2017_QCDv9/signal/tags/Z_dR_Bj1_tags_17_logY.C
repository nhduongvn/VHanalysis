#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_17/Z_dR_Bj1_tags_17
//=========  (Thu Mar  9 13:08:25 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_17 = new TCanvas("Z_dR_Bj1_tags_17", "Z_dR_Bj1_tags_17",0,0,600,600);
   Z_dR_Bj1_tags_17->SetHighLightColor(2);
   Z_dR_Bj1_tags_17->Range(-1.310117,-0.1328779,7.029799,0.4163958);
   Z_dR_Bj1_tags_17->SetFillColor(0);
   Z_dR_Bj1_tags_17->SetFillStyle(4000);
   Z_dR_Bj1_tags_17->SetBorderMode(0);
   Z_dR_Bj1_tags_17->SetBorderSize(2);
   Z_dR_Bj1_tags_17->SetLogy();
   Z_dR_Bj1_tags_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_17->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.154923);
   
   TH1F *st_stack_54 = new TH1F("st_stack_54","",30,0,6);
   st_stack_54->SetMinimum(0.8571067);
   st_stack_54->SetMaximum(2.298627);
   st_stack_54->SetDirectory(0);
   st_stack_54->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_54->SetLineColor(ci);
   st_stack_54->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_54->GetXaxis()->SetRange(1,30);
   st_stack_54->GetXaxis()->SetLabelFont(42);
   st_stack_54->GetXaxis()->SetTitleOffset(1);
   st_stack_54->GetXaxis()->SetTitleFont(42);
   st_stack_54->GetYaxis()->SetTitle("Event/0.2");
   st_stack_54->GetYaxis()->SetLabelFont(42);
   st_stack_54->GetYaxis()->SetTitleSize(0.037);
   st_stack_54->GetYaxis()->SetTitleFont(42);
   st_stack_54->GetZaxis()->SetLabelFont(42);
   st_stack_54->GetZaxis()->SetTitleOffset(1);
   st_stack_54->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_54);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.3286922);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,1.096694);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,1.219954);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,0.8501751);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,0.4914581);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,0.301828);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,0.2149142);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.1596054);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.1469634);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.1027163);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.1011361);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.09797557);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.07585205);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.07585205);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.0679508);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.06953105);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.03634578);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.02686427);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.01738276);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.004740753);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.02279071);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.04162995);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.0439071);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.03665365);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.02786803);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.02183951);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.01842874);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.01588133);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.01523939);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.01274039);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.01264201);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.01244291);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.0109483);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.0109483);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.0103624);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.0104822);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.007578618);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.006515542);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.0052411);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.002234813);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.002737075);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(3477);

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
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.1143907);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.5094643);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,0.5686319);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.3693305);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.1735583);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.09632902);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.07556846);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.05563832);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.05231663);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.04733409);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.0402755);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.03134845);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.03217888);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.02864958);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.02761155);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.02408226);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.01307916);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.007889015);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.006643381);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.002906479);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.002906479);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.00145324);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.001245634);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.001245634);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.004873208);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.01028434);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.01086514);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.008756431);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.00600264);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.004471963);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.003960863);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.003398651);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.003295638);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.003134777);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.002891612);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.002551101);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.00258467);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.002438814);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.002394225);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.002235981);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.001647819);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.001279767);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.001174395);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.0007767892);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.0007767892);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.0005492729);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0005085279);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0005085279);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.0003595835);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(11007);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_17->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->SetSelected(Z_dR_Bj1_tags_17);
}
