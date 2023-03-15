#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_17_logY()
{
//=========Macro generated from canvas: H_pt_algo_17/H_pt_algo_17
//=========  (Fri Mar 10 11:27:13 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_17 = new TCanvas("H_pt_algo_17", "H_pt_algo_17",0,0,600,600);
   H_pt_algo_17->SetHighLightColor(2);
   H_pt_algo_17->Range(37.97653,-0.2294937,1705.96,0.7406474);
   H_pt_algo_17->SetFillColor(0);
   H_pt_algo_17->SetFillStyle(4000);
   H_pt_algo_17->SetBorderMode(0);
   H_pt_algo_17->SetBorderSize(2);
   H_pt_algo_17->SetLogy();
   H_pt_algo_17->SetLeftMargin(0.15709);
   H_pt_algo_17->SetRightMargin(0.1234783);
   H_pt_algo_17->SetBottomMargin(0.12);
   H_pt_algo_17->SetFrameFillStyle(1000);
   H_pt_algo_17->SetFrameBorderMode(0);
   H_pt_algo_17->SetFrameFillStyle(1000);
   H_pt_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(3.933846);
   
   TH1F *st_stack_78 = new TH1F("st_stack_78","",40,0,2000);
   st_stack_78->SetMinimum(0.7707672);
   st_stack_78->SetMaximum(4.40183);
   st_stack_78->SetDirectory(0);
   st_stack_78->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_78->SetLineColor(ci);
   st_stack_78->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_78->GetXaxis()->SetRange(7,30);
   st_stack_78->GetXaxis()->SetLabelFont(42);
   st_stack_78->GetXaxis()->SetTitleOffset(1);
   st_stack_78->GetXaxis()->SetTitleFont(42);
   st_stack_78->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_78->GetYaxis()->SetLabelFont(42);
   st_stack_78->GetYaxis()->SetTitleSize(0.037);
   st_stack_78->GetYaxis()->SetTitleFont(42);
   st_stack_78->GetZaxis()->SetLabelFont(42);
   st_stack_78->GetZaxis()->SetTitleOffset(1);
   st_stack_78->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_78);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.4523041);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,2.097333);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,3.265092);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,2.625883);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,1.929659);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.9683152);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.6887354);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.3591405);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.2171104);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.108907);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.05408102);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.03287737);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.01770874);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(14,0.01473488);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(15,0.0145325);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(16,0.003660715);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(17,0.003571252);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(18,0.006977797);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(19,0.006424723);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(20,0.001665928);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(21,0.0019888);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(22,0.004653065);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(25,0.001639841);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(26,0.001995241);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.02902623);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.06264685);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.07875854);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.07050546);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.06045739);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.04284337);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.03569071);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.0262309);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.02038442);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.01414157);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.01026574);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.007708846);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.005909481);
   VbbHcc_algo_H_pt_stack_1->SetBinError(14,0.005110896);
   VbbHcc_algo_H_pt_stack_1->SetBinError(15,0.005191613);
   VbbHcc_algo_H_pt_stack_1->SetBinError(16,0.002594534);
   VbbHcc_algo_H_pt_stack_1->SetBinError(17,0.00253366);
   VbbHcc_algo_H_pt_stack_1->SetBinError(18,0.003504218);
   VbbHcc_algo_H_pt_stack_1->SetBinError(19,0.003723061);
   VbbHcc_algo_H_pt_stack_1->SetBinError(20,0.001665928);
   VbbHcc_algo_H_pt_stack_1->SetBinError(21,0.0019888);
   VbbHcc_algo_H_pt_stack_1->SetBinError(22,0.003290438);
   VbbHcc_algo_H_pt_stack_1->SetBinError(25,0.001639841);
   VbbHcc_algo_H_pt_stack_1->SetBinError(26,0.001995241);
   VbbHcc_algo_H_pt_stack_1->SetEntries(7553);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.1235773);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.5552835);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,1.101361);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,1.126877);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.788014);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.4513545);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.2374009);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.1247692);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.0622899);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.02263664);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.01008522);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,0.00767519);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,0.001627623);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(14,0.001524476);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(15,0.001561532);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(16,0.0009143922);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(18,0.0002240614);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(19,0.0003262184);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(20,0.0001733128);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.005447185);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.01157934);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.01633358);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.01648621);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.01374543);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.01039271);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.00751145);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.00544584);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.003844915);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.002307231);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.001515307);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,0.001366774);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,0.0006234605);
   VbbHcc_algo_H_pt_stack_2->SetBinError(14,0.0006270289);
   VbbHcc_algo_H_pt_stack_2->SetBinError(15,0.000606567);
   VbbHcc_algo_H_pt_stack_2->SetBinError(16,0.0004642727);
   VbbHcc_algo_H_pt_stack_2->SetBinError(18,0.0002240614);
   VbbHcc_algo_H_pt_stack_2->SetBinError(19,0.0002555641);
   VbbHcc_algo_H_pt_stack_2->SetBinError(20,0.0001733128);
   VbbHcc_algo_H_pt_stack_2->SetEntries(20065);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   H_pt_algo_17->Modified();
   H_pt_algo_17->cd();
   H_pt_algo_17->SetSelected(H_pt_algo_17);
}
