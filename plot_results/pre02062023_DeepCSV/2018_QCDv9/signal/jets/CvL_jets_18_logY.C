#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_18_logY()
{
//=========Macro generated from canvas: CvL_jets_18/CvL_jets_18
//=========  (Mon Dec 19 11:03:32 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_18 = new TCanvas("CvL_jets_18", "CvL_jets_18",0,0,600,600);
   CvL_jets_18->SetHighLightColor(2);
   CvL_jets_18->Range(-0.2183529,-0.2190197,1.171633,5.929472);
   CvL_jets_18->SetFillColor(0);
   CvL_jets_18->SetFillStyle(4000);
   CvL_jets_18->SetBorderMode(0);
   CvL_jets_18->SetBorderSize(2);
   CvL_jets_18->SetLogy();
   CvL_jets_18->SetLeftMargin(0.15709);
   CvL_jets_18->SetRightMargin(0.1234783);
   CvL_jets_18->SetBottomMargin(0.12);
   CvL_jets_18->SetFrameFillStyle(1000);
   CvL_jets_18->SetFrameBorderMode(0);
   CvL_jets_18->SetFrameFillStyle(1000);
   CvL_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(113926.8);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",20,0,1);
   st_stack_11->SetMinimum(3.302169);
   st_stack_11->SetMaximum(206358.6);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_11->GetXaxis()->SetRange(1,20);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/0.05");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,749.9481);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,960.144);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,387.8512);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,201.2634);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,135.9141);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,101.3948);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,81.79744);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,68.81861);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,63.37712);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,56.9987);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,52.298);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,46.35988);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,45.79736);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,41.51357);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,39.66278);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,36.75152);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,36.85306);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,36.46006);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,36.59578);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,10.11879);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,1.429867);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,1.60946);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,1.021803);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,0.7374079);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,0.6061535);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,0.5246376);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,0.4719933);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,0.4339022);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,0.4161425);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,0.3947929);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,0.3782849);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,0.3548743);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,0.3557905);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,0.3374775);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,0.3301574);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,0.3199731);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,0.317678);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,0.3175368);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,0.3176658);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,0.1666169);
   VbbHcc_jets_CvL_stack_1->SetEntries(1437776);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,153.3611);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,179.1244);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,68.2279);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,34.96777);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,23.50372);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,17.53524);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,14.25025);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,11.84023);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,11.21824);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,9.961858);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,9.22497);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,8.280835);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,8.09207);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,7.519121);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,7.347994);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,6.95213);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,6.796308);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,7.122581);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,7.773031);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,2.550651);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,0.2443841);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,0.2623247);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,0.1611116);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,0.1156413);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,0.09458644);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,0.0820255);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,0.07392777);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,0.06748923);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,0.06563755);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,0.06193861);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,0.05978922);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,0.05675278);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,0.05654513);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,0.05458116);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,0.05351782);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,0.05202651);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,0.05183161);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,0.05279715);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,0.05512335);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,0.03185795);
   VbbHcc_jets_CvL_stack_2->SetEntries(1735131);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","ZHcc","F");

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
   CvL_jets_18->Modified();
   CvL_jets_18->cd();
   CvL_jets_18->SetSelected(CvL_jets_18);
}
